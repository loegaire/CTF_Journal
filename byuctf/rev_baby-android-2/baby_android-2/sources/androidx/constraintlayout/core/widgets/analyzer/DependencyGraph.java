package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.Barrier;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.core.widgets.Guideline;
import androidx.constraintlayout.core.widgets.HelperWidget;
import androidx.constraintlayout.core.widgets.analyzer.BasicMeasure;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

/* loaded from: classes.dex */
public class DependencyGraph {
    private static final boolean DEBUG = false;
    private static final boolean USE_GROUPS = true;
    private ConstraintWidgetContainer mContainer;
    private ConstraintWidgetContainer mWidgetcontainer;
    private boolean mNeedBuildGraph = USE_GROUPS;
    private boolean mNeedRedoMeasures = USE_GROUPS;
    private ArrayList<WidgetRun> mRuns = new ArrayList<>();
    private ArrayList<RunGroup> mRunGroups = new ArrayList<>();
    private BasicMeasure.Measurer mMeasurer = null;
    private BasicMeasure.Measure mMeasure = new BasicMeasure.Measure();
    ArrayList<RunGroup> mGroups = new ArrayList<>();

    public DependencyGraph(ConstraintWidgetContainer container) {
        this.mWidgetcontainer = container;
        this.mContainer = container;
    }

    public void setMeasurer(BasicMeasure.Measurer measurer) {
        this.mMeasurer = measurer;
    }

    private int computeWrap(ConstraintWidgetContainer container, int orientation) {
        int count = this.mGroups.size();
        long wrapSize = 0;
        for (int i = 0; i < count; i++) {
            RunGroup run = this.mGroups.get(i);
            long size = run.computeWrapSize(container, orientation);
            wrapSize = Math.max(wrapSize, size);
        }
        int i2 = (int) wrapSize;
        return i2;
    }

    public void defineTerminalWidgets(ConstraintWidget.DimensionBehaviour horizontalBehavior, ConstraintWidget.DimensionBehaviour verticalBehavior) {
        if (this.mNeedBuildGraph) {
            buildGraph();
            boolean hasBarrier = false;
            Iterator<ConstraintWidget> it = this.mWidgetcontainer.mChildren.iterator();
            while (it.hasNext()) {
                ConstraintWidget widget = it.next();
                widget.isTerminalWidget[0] = USE_GROUPS;
                widget.isTerminalWidget[1] = USE_GROUPS;
                if (widget instanceof Barrier) {
                    hasBarrier = USE_GROUPS;
                }
            }
            if (!hasBarrier) {
                Iterator<RunGroup> it2 = this.mGroups.iterator();
                while (it2.hasNext()) {
                    RunGroup group = it2.next();
                    group.defineTerminalWidgets(horizontalBehavior == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, verticalBehavior == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT);
                }
            }
        }
    }

    public boolean directMeasure(boolean optimizeWrap) {
        boolean optimizeWrap2 = optimizeWrap & USE_GROUPS;
        if (this.mNeedBuildGraph || this.mNeedRedoMeasures) {
            Iterator<ConstraintWidget> it = this.mWidgetcontainer.mChildren.iterator();
            while (it.hasNext()) {
                ConstraintWidget widget = it.next();
                widget.ensureWidgetRuns();
                widget.measured = false;
                widget.mHorizontalRun.reset();
                widget.mVerticalRun.reset();
            }
            this.mWidgetcontainer.ensureWidgetRuns();
            this.mWidgetcontainer.measured = false;
            this.mWidgetcontainer.mHorizontalRun.reset();
            this.mWidgetcontainer.mVerticalRun.reset();
            this.mNeedRedoMeasures = false;
        }
        boolean avoid = basicMeasureWidgets(this.mContainer);
        if (avoid) {
            return false;
        }
        this.mWidgetcontainer.setX(0);
        this.mWidgetcontainer.setY(0);
        ConstraintWidget.DimensionBehaviour originalHorizontalDimension = this.mWidgetcontainer.getDimensionBehaviour(0);
        ConstraintWidget.DimensionBehaviour originalVerticalDimension = this.mWidgetcontainer.getDimensionBehaviour(1);
        if (this.mNeedBuildGraph) {
            buildGraph();
        }
        int x1 = this.mWidgetcontainer.getX();
        int y1 = this.mWidgetcontainer.getY();
        this.mWidgetcontainer.mHorizontalRun.start.resolve(x1);
        this.mWidgetcontainer.mVerticalRun.start.resolve(y1);
        measureWidgets();
        if (originalHorizontalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || originalVerticalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
            if (optimizeWrap2) {
                Iterator<WidgetRun> it2 = this.mRuns.iterator();
                while (true) {
                    if (!it2.hasNext()) {
                        break;
                    }
                    if (!it2.next().supportsWrapComputation()) {
                        optimizeWrap2 = false;
                        break;
                    }
                }
            }
            if (optimizeWrap2 && originalHorizontalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                this.mWidgetcontainer.setHorizontalDimensionBehaviour(ConstraintWidget.DimensionBehaviour.FIXED);
                ConstraintWidgetContainer constraintWidgetContainer = this.mWidgetcontainer;
                constraintWidgetContainer.setWidth(computeWrap(constraintWidgetContainer, 0));
                this.mWidgetcontainer.mHorizontalRun.mDimension.resolve(this.mWidgetcontainer.getWidth());
            }
            if (optimizeWrap2 && originalVerticalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                this.mWidgetcontainer.setVerticalDimensionBehaviour(ConstraintWidget.DimensionBehaviour.FIXED);
                ConstraintWidgetContainer constraintWidgetContainer2 = this.mWidgetcontainer;
                constraintWidgetContainer2.setHeight(computeWrap(constraintWidgetContainer2, 1));
                this.mWidgetcontainer.mVerticalRun.mDimension.resolve(this.mWidgetcontainer.getHeight());
            }
        }
        boolean checkRoot = false;
        if (this.mWidgetcontainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.FIXED || this.mWidgetcontainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
            int x2 = this.mWidgetcontainer.getWidth() + x1;
            this.mWidgetcontainer.mHorizontalRun.end.resolve(x2);
            this.mWidgetcontainer.mHorizontalRun.mDimension.resolve(x2 - x1);
            measureWidgets();
            if (this.mWidgetcontainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.FIXED || this.mWidgetcontainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
                int y2 = this.mWidgetcontainer.getHeight() + y1;
                this.mWidgetcontainer.mVerticalRun.end.resolve(y2);
                this.mWidgetcontainer.mVerticalRun.mDimension.resolve(y2 - y1);
            }
            measureWidgets();
            checkRoot = USE_GROUPS;
        }
        Iterator<WidgetRun> it3 = this.mRuns.iterator();
        while (it3.hasNext()) {
            WidgetRun run = it3.next();
            if (run.mWidget != this.mWidgetcontainer || run.mResolved) {
                run.applyToWidget();
            }
        }
        boolean allResolved = USE_GROUPS;
        Iterator<WidgetRun> it4 = this.mRuns.iterator();
        while (true) {
            if (!it4.hasNext()) {
                break;
            }
            WidgetRun run2 = it4.next();
            if (checkRoot || run2.mWidget != this.mWidgetcontainer) {
                if (!run2.start.resolved) {
                    allResolved = false;
                    break;
                }
                if (!run2.end.resolved && !(run2 instanceof GuidelineReference)) {
                    allResolved = false;
                    break;
                }
                if (!run2.mDimension.resolved && !(run2 instanceof ChainRun) && !(run2 instanceof GuidelineReference)) {
                    allResolved = false;
                    break;
                }
            }
        }
        this.mWidgetcontainer.setHorizontalDimensionBehaviour(originalHorizontalDimension);
        this.mWidgetcontainer.setVerticalDimensionBehaviour(originalVerticalDimension);
        return allResolved;
    }

    public boolean directMeasureSetup(boolean optimizeWrap) {
        if (this.mNeedBuildGraph) {
            Iterator<ConstraintWidget> it = this.mWidgetcontainer.mChildren.iterator();
            while (it.hasNext()) {
                ConstraintWidget widget = it.next();
                widget.ensureWidgetRuns();
                widget.measured = false;
                widget.mHorizontalRun.mDimension.resolved = false;
                widget.mHorizontalRun.mResolved = false;
                widget.mHorizontalRun.reset();
                widget.mVerticalRun.mDimension.resolved = false;
                widget.mVerticalRun.mResolved = false;
                widget.mVerticalRun.reset();
            }
            this.mWidgetcontainer.ensureWidgetRuns();
            this.mWidgetcontainer.measured = false;
            this.mWidgetcontainer.mHorizontalRun.mDimension.resolved = false;
            this.mWidgetcontainer.mHorizontalRun.mResolved = false;
            this.mWidgetcontainer.mHorizontalRun.reset();
            this.mWidgetcontainer.mVerticalRun.mDimension.resolved = false;
            this.mWidgetcontainer.mVerticalRun.mResolved = false;
            this.mWidgetcontainer.mVerticalRun.reset();
            buildGraph();
        }
        boolean avoid = basicMeasureWidgets(this.mContainer);
        if (avoid) {
            return false;
        }
        this.mWidgetcontainer.setX(0);
        this.mWidgetcontainer.setY(0);
        this.mWidgetcontainer.mHorizontalRun.start.resolve(0);
        this.mWidgetcontainer.mVerticalRun.start.resolve(0);
        return USE_GROUPS;
    }

    public boolean directMeasureWithOrientation(boolean optimizeWrap, int orientation) {
        boolean optimizeWrap2 = optimizeWrap & USE_GROUPS;
        ConstraintWidget.DimensionBehaviour originalHorizontalDimension = this.mWidgetcontainer.getDimensionBehaviour(0);
        ConstraintWidget.DimensionBehaviour originalVerticalDimension = this.mWidgetcontainer.getDimensionBehaviour(1);
        int x1 = this.mWidgetcontainer.getX();
        int y1 = this.mWidgetcontainer.getY();
        if (optimizeWrap2 && (originalHorizontalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || originalVerticalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT)) {
            Iterator<WidgetRun> it = this.mRuns.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                WidgetRun run = it.next();
                if (run.orientation == orientation && !run.supportsWrapComputation()) {
                    optimizeWrap2 = false;
                    break;
                }
            }
            if (orientation == 0) {
                if (optimizeWrap2 && originalHorizontalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                    this.mWidgetcontainer.setHorizontalDimensionBehaviour(ConstraintWidget.DimensionBehaviour.FIXED);
                    ConstraintWidgetContainer constraintWidgetContainer = this.mWidgetcontainer;
                    constraintWidgetContainer.setWidth(computeWrap(constraintWidgetContainer, 0));
                    this.mWidgetcontainer.mHorizontalRun.mDimension.resolve(this.mWidgetcontainer.getWidth());
                }
            } else if (optimizeWrap2 && originalVerticalDimension == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                this.mWidgetcontainer.setVerticalDimensionBehaviour(ConstraintWidget.DimensionBehaviour.FIXED);
                ConstraintWidgetContainer constraintWidgetContainer2 = this.mWidgetcontainer;
                constraintWidgetContainer2.setHeight(computeWrap(constraintWidgetContainer2, 1));
                this.mWidgetcontainer.mVerticalRun.mDimension.resolve(this.mWidgetcontainer.getHeight());
            }
        }
        boolean checkRoot = false;
        if (orientation != 0) {
            if (this.mWidgetcontainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.FIXED || this.mWidgetcontainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
                int y2 = this.mWidgetcontainer.getHeight() + y1;
                this.mWidgetcontainer.mVerticalRun.end.resolve(y2);
                this.mWidgetcontainer.mVerticalRun.mDimension.resolve(y2 - y1);
                checkRoot = USE_GROUPS;
            }
        } else if (this.mWidgetcontainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.FIXED || this.mWidgetcontainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
            int x2 = this.mWidgetcontainer.getWidth() + x1;
            this.mWidgetcontainer.mHorizontalRun.end.resolve(x2);
            this.mWidgetcontainer.mHorizontalRun.mDimension.resolve(x2 - x1);
            checkRoot = USE_GROUPS;
        }
        measureWidgets();
        Iterator<WidgetRun> it2 = this.mRuns.iterator();
        while (it2.hasNext()) {
            WidgetRun run2 = it2.next();
            if (run2.orientation == orientation && (run2.mWidget != this.mWidgetcontainer || run2.mResolved)) {
                run2.applyToWidget();
            }
        }
        boolean allResolved = USE_GROUPS;
        Iterator<WidgetRun> it3 = this.mRuns.iterator();
        while (true) {
            if (!it3.hasNext()) {
                break;
            }
            WidgetRun run3 = it3.next();
            if (run3.orientation == orientation && (checkRoot || run3.mWidget != this.mWidgetcontainer)) {
                if (!run3.start.resolved) {
                    allResolved = false;
                    break;
                }
                if (!run3.end.resolved) {
                    allResolved = false;
                    break;
                }
                if (!(run3 instanceof ChainRun) && !run3.mDimension.resolved) {
                    allResolved = false;
                    break;
                }
            }
        }
        this.mWidgetcontainer.setHorizontalDimensionBehaviour(originalHorizontalDimension);
        this.mWidgetcontainer.setVerticalDimensionBehaviour(originalVerticalDimension);
        return allResolved;
    }

    private void measure(ConstraintWidget widget, ConstraintWidget.DimensionBehaviour horizontalBehavior, int horizontalDimension, ConstraintWidget.DimensionBehaviour verticalBehavior, int verticalDimension) {
        this.mMeasure.horizontalBehavior = horizontalBehavior;
        this.mMeasure.verticalBehavior = verticalBehavior;
        this.mMeasure.horizontalDimension = horizontalDimension;
        this.mMeasure.verticalDimension = verticalDimension;
        this.mMeasurer.measure(widget, this.mMeasure);
        widget.setWidth(this.mMeasure.measuredWidth);
        widget.setHeight(this.mMeasure.measuredHeight);
        widget.setHasBaseline(this.mMeasure.measuredHasBaseline);
        widget.setBaselineDistance(this.mMeasure.measuredBaseline);
    }

    private boolean basicMeasureWidgets(ConstraintWidgetContainer constraintWidgetContainer) {
        ConstraintWidget.DimensionBehaviour horizontal;
        ConstraintWidget.DimensionBehaviour vertical;
        Iterator<ConstraintWidget> it = constraintWidgetContainer.mChildren.iterator();
        while (it.hasNext()) {
            ConstraintWidget widget = it.next();
            ConstraintWidget.DimensionBehaviour horizontal2 = widget.mListDimensionBehaviors[0];
            ConstraintWidget.DimensionBehaviour vertical2 = widget.mListDimensionBehaviors[1];
            if (widget.getVisibility() == 8) {
                widget.measured = USE_GROUPS;
            } else {
                if (widget.mMatchConstraintPercentWidth < 1.0f && horizontal2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                    widget.mMatchConstraintDefaultWidth = 2;
                }
                if (widget.mMatchConstraintPercentHeight < 1.0f && vertical2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                    widget.mMatchConstraintDefaultHeight = 2;
                }
                if (widget.getDimensionRatio() > 0.0f) {
                    if (horizontal2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && (vertical2 == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || vertical2 == ConstraintWidget.DimensionBehaviour.FIXED)) {
                        widget.mMatchConstraintDefaultWidth = 3;
                    } else if (vertical2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && (horizontal2 == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || horizontal2 == ConstraintWidget.DimensionBehaviour.FIXED)) {
                        widget.mMatchConstraintDefaultHeight = 3;
                    } else if (horizontal2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && vertical2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                        if (widget.mMatchConstraintDefaultWidth == 0) {
                            widget.mMatchConstraintDefaultWidth = 3;
                        }
                        if (widget.mMatchConstraintDefaultHeight == 0) {
                            widget.mMatchConstraintDefaultHeight = 3;
                        }
                    }
                }
                if (horizontal2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && widget.mMatchConstraintDefaultWidth == 1 && (widget.mLeft.mTarget == null || widget.mRight.mTarget == null)) {
                    horizontal = ConstraintWidget.DimensionBehaviour.WRAP_CONTENT;
                } else {
                    horizontal = horizontal2;
                }
                if (vertical2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && widget.mMatchConstraintDefaultHeight == 1 && (widget.mTop.mTarget == null || widget.mBottom.mTarget == null)) {
                    vertical = ConstraintWidget.DimensionBehaviour.WRAP_CONTENT;
                } else {
                    vertical = vertical2;
                }
                widget.mHorizontalRun.mDimensionBehavior = horizontal;
                widget.mHorizontalRun.matchConstraintsType = widget.mMatchConstraintDefaultWidth;
                widget.mVerticalRun.mDimensionBehavior = vertical;
                widget.mVerticalRun.matchConstraintsType = widget.mMatchConstraintDefaultHeight;
                if ((horizontal == ConstraintWidget.DimensionBehaviour.MATCH_PARENT || horizontal == ConstraintWidget.DimensionBehaviour.FIXED || horizontal == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) && (vertical == ConstraintWidget.DimensionBehaviour.MATCH_PARENT || vertical == ConstraintWidget.DimensionBehaviour.FIXED || vertical == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT)) {
                    int width = widget.getWidth();
                    if (horizontal == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
                        width = (constraintWidgetContainer.getWidth() - widget.mLeft.mMargin) - widget.mRight.mMargin;
                        horizontal = ConstraintWidget.DimensionBehaviour.FIXED;
                    }
                    int height = widget.getHeight();
                    if (vertical == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
                        height = (constraintWidgetContainer.getHeight() - widget.mTop.mMargin) - widget.mBottom.mMargin;
                        vertical = ConstraintWidget.DimensionBehaviour.FIXED;
                    }
                    measure(widget, horizontal, width, vertical, height);
                    widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                    widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                    widget.measured = USE_GROUPS;
                } else {
                    if (horizontal == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && (vertical == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || vertical == ConstraintWidget.DimensionBehaviour.FIXED)) {
                        if (widget.mMatchConstraintDefaultWidth == 3) {
                            if (vertical == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                                measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0);
                            }
                            int height2 = widget.getHeight();
                            int width2 = (int) ((height2 * widget.mDimensionRatio) + 0.5f);
                            measure(widget, ConstraintWidget.DimensionBehaviour.FIXED, width2, ConstraintWidget.DimensionBehaviour.FIXED, height2);
                            widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                            widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                            widget.measured = USE_GROUPS;
                        } else if (widget.mMatchConstraintDefaultWidth == 1) {
                            measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0, vertical, 0);
                            widget.mHorizontalRun.mDimension.wrapValue = widget.getWidth();
                        } else if (widget.mMatchConstraintDefaultWidth == 2) {
                            if (constraintWidgetContainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.FIXED || constraintWidgetContainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
                                float percent = widget.mMatchConstraintPercentWidth;
                                int width3 = (int) ((constraintWidgetContainer.getWidth() * percent) + 0.5f);
                                int height3 = widget.getHeight();
                                measure(widget, ConstraintWidget.DimensionBehaviour.FIXED, width3, vertical, height3);
                                widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                                widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                                widget.measured = USE_GROUPS;
                            }
                        } else if (widget.mListAnchors[0].mTarget == null || widget.mListAnchors[1].mTarget == null) {
                            measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0, vertical, 0);
                            widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                            widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                            widget.measured = USE_GROUPS;
                        }
                    }
                    if (vertical == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && (horizontal == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || horizontal == ConstraintWidget.DimensionBehaviour.FIXED)) {
                        if (widget.mMatchConstraintDefaultHeight == 3) {
                            if (horizontal == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                                measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0);
                            }
                            int width4 = widget.getWidth();
                            float ratio = widget.mDimensionRatio;
                            if (widget.getDimensionRatioSide() == -1) {
                                ratio = 1.0f / ratio;
                            }
                            int height4 = (int) ((width4 * ratio) + 0.5f);
                            measure(widget, ConstraintWidget.DimensionBehaviour.FIXED, width4, ConstraintWidget.DimensionBehaviour.FIXED, height4);
                            widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                            widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                            widget.measured = USE_GROUPS;
                        } else if (widget.mMatchConstraintDefaultHeight == 1) {
                            measure(widget, horizontal, 0, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0);
                            widget.mVerticalRun.mDimension.wrapValue = widget.getHeight();
                        } else if (widget.mMatchConstraintDefaultHeight == 2) {
                            if (constraintWidgetContainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.FIXED || constraintWidgetContainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.MATCH_PARENT) {
                                float percent2 = widget.mMatchConstraintPercentHeight;
                                int width5 = widget.getWidth();
                                int height5 = (int) ((constraintWidgetContainer.getHeight() * percent2) + 0.5f);
                                measure(widget, horizontal, width5, ConstraintWidget.DimensionBehaviour.FIXED, height5);
                                widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                                widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                                widget.measured = USE_GROUPS;
                            }
                        } else if (widget.mListAnchors[2].mTarget == null || widget.mListAnchors[3].mTarget == null) {
                            measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0, vertical, 0);
                            widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                            widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                            widget.measured = USE_GROUPS;
                        }
                    }
                    if (horizontal == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && vertical == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                        if (widget.mMatchConstraintDefaultWidth == 1 || widget.mMatchConstraintDefaultHeight == 1) {
                            measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, 0);
                            widget.mHorizontalRun.mDimension.wrapValue = widget.getWidth();
                            widget.mVerticalRun.mDimension.wrapValue = widget.getHeight();
                        } else if (widget.mMatchConstraintDefaultHeight == 2 && widget.mMatchConstraintDefaultWidth == 2 && constraintWidgetContainer.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.FIXED && constraintWidgetContainer.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.FIXED) {
                            float horizPercent = widget.mMatchConstraintPercentWidth;
                            float vertPercent = widget.mMatchConstraintPercentHeight;
                            int width6 = (int) ((constraintWidgetContainer.getWidth() * horizPercent) + 0.5f);
                            int height6 = (int) ((constraintWidgetContainer.getHeight() * vertPercent) + 0.5f);
                            measure(widget, ConstraintWidget.DimensionBehaviour.FIXED, width6, ConstraintWidget.DimensionBehaviour.FIXED, height6);
                            widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                            widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                            widget.measured = USE_GROUPS;
                        }
                    }
                }
            }
        }
        return false;
    }

    public void measureWidgets() {
        Iterator<ConstraintWidget> it = this.mWidgetcontainer.mChildren.iterator();
        while (it.hasNext()) {
            ConstraintWidget widget = it.next();
            if (!widget.measured) {
                boolean z = false;
                ConstraintWidget.DimensionBehaviour horiz = widget.mListDimensionBehaviors[0];
                ConstraintWidget.DimensionBehaviour vert = widget.mListDimensionBehaviors[1];
                int horizMatchConstraintsType = widget.mMatchConstraintDefaultWidth;
                int vertMatchConstraintsType = widget.mMatchConstraintDefaultHeight;
                boolean horizWrap = horiz == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || (horiz == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && horizMatchConstraintsType == 1);
                if (vert == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT || (vert == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && vertMatchConstraintsType == 1)) {
                    z = true;
                }
                boolean vertWrap = z;
                boolean horizResolved = widget.mHorizontalRun.mDimension.resolved;
                boolean vertResolved = widget.mVerticalRun.mDimension.resolved;
                if (horizResolved && vertResolved) {
                    measure(widget, ConstraintWidget.DimensionBehaviour.FIXED, widget.mHorizontalRun.mDimension.value, ConstraintWidget.DimensionBehaviour.FIXED, widget.mVerticalRun.mDimension.value);
                    widget.measured = USE_GROUPS;
                } else if (horizResolved && vertWrap) {
                    measure(widget, ConstraintWidget.DimensionBehaviour.FIXED, widget.mHorizontalRun.mDimension.value, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, widget.mVerticalRun.mDimension.value);
                    if (vert == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                        widget.mVerticalRun.mDimension.wrapValue = widget.getHeight();
                    } else {
                        widget.mVerticalRun.mDimension.resolve(widget.getHeight());
                        widget.measured = USE_GROUPS;
                    }
                } else if (vertResolved && horizWrap) {
                    measure(widget, ConstraintWidget.DimensionBehaviour.WRAP_CONTENT, widget.mHorizontalRun.mDimension.value, ConstraintWidget.DimensionBehaviour.FIXED, widget.mVerticalRun.mDimension.value);
                    if (horiz == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                        widget.mHorizontalRun.mDimension.wrapValue = widget.getWidth();
                    } else {
                        widget.mHorizontalRun.mDimension.resolve(widget.getWidth());
                        widget.measured = USE_GROUPS;
                    }
                }
                if (widget.measured && widget.mVerticalRun.mBaselineDimension != null) {
                    widget.mVerticalRun.mBaselineDimension.resolve(widget.getBaselineDistance());
                }
            }
        }
    }

    public void invalidateGraph() {
        this.mNeedBuildGraph = USE_GROUPS;
    }

    public void invalidateMeasures() {
        this.mNeedRedoMeasures = USE_GROUPS;
    }

    public void buildGraph() {
        buildGraph(this.mRuns);
        this.mGroups.clear();
        RunGroup.index = 0;
        findGroup(this.mWidgetcontainer.mHorizontalRun, 0, this.mGroups);
        findGroup(this.mWidgetcontainer.mVerticalRun, 1, this.mGroups);
        this.mNeedBuildGraph = false;
    }

    public void buildGraph(ArrayList<WidgetRun> runs) {
        runs.clear();
        this.mContainer.mHorizontalRun.clear();
        this.mContainer.mVerticalRun.clear();
        runs.add(this.mContainer.mHorizontalRun);
        runs.add(this.mContainer.mVerticalRun);
        HashSet<ChainRun> chainRuns = null;
        Iterator<ConstraintWidget> it = this.mContainer.mChildren.iterator();
        while (it.hasNext()) {
            ConstraintWidget widget = it.next();
            if (widget instanceof Guideline) {
                runs.add(new GuidelineReference(widget));
            } else {
                if (widget.isInHorizontalChain()) {
                    if (widget.horizontalChainRun == null) {
                        widget.horizontalChainRun = new ChainRun(widget, 0);
                    }
                    if (chainRuns == null) {
                        chainRuns = new HashSet<>();
                    }
                    chainRuns.add(widget.horizontalChainRun);
                } else {
                    runs.add(widget.mHorizontalRun);
                }
                if (widget.isInVerticalChain()) {
                    if (widget.verticalChainRun == null) {
                        widget.verticalChainRun = new ChainRun(widget, 1);
                    }
                    if (chainRuns == null) {
                        chainRuns = new HashSet<>();
                    }
                    chainRuns.add(widget.verticalChainRun);
                } else {
                    runs.add(widget.mVerticalRun);
                }
                if (widget instanceof HelperWidget) {
                    runs.add(new HelperReferences(widget));
                }
            }
        }
        if (chainRuns != null) {
            runs.addAll(chainRuns);
        }
        Iterator<WidgetRun> it2 = runs.iterator();
        while (it2.hasNext()) {
            it2.next().clear();
        }
        Iterator<WidgetRun> it3 = runs.iterator();
        while (it3.hasNext()) {
            WidgetRun run = it3.next();
            if (run.mWidget != this.mContainer) {
                run.apply();
            }
        }
    }

    private void displayGraph() {
        String content = "digraph {\n";
        Iterator<WidgetRun> it = this.mRuns.iterator();
        while (it.hasNext()) {
            WidgetRun run = it.next();
            content = generateDisplayGraph(run, content);
        }
        System.out.println("content:<<\n" + (content + "\n}\n") + "\n>>");
    }

    private void applyGroup(DependencyNode node, int orientation, int direction, DependencyNode end, ArrayList<RunGroup> groups, RunGroup group) {
        RunGroup group2;
        WidgetRun run = node.mRun;
        if (run.mRunGroup == null && run != this.mWidgetcontainer.mHorizontalRun) {
            if (run == this.mWidgetcontainer.mVerticalRun) {
                return;
            }
            if (group == null) {
                RunGroup group3 = new RunGroup(run, direction);
                groups.add(group3);
                group2 = group3;
            } else {
                group2 = group;
            }
            run.mRunGroup = group2;
            group2.add(run);
            for (Dependency dependent : run.start.mDependencies) {
                if (dependent instanceof DependencyNode) {
                    applyGroup((DependencyNode) dependent, orientation, 0, end, groups, group2);
                }
            }
            for (Dependency dependent2 : run.end.mDependencies) {
                if (dependent2 instanceof DependencyNode) {
                    applyGroup((DependencyNode) dependent2, orientation, 1, end, groups, group2);
                }
            }
            if (orientation == 1 && (run instanceof VerticalWidgetRun)) {
                for (Dependency dependent3 : ((VerticalWidgetRun) run).baseline.mDependencies) {
                    if (dependent3 instanceof DependencyNode) {
                        applyGroup((DependencyNode) dependent3, orientation, 2, end, groups, group2);
                    }
                }
            }
            for (DependencyNode target : run.start.mTargets) {
                if (target == end) {
                    group2.dual = USE_GROUPS;
                }
                applyGroup(target, orientation, 0, end, groups, group2);
            }
            for (DependencyNode target2 : run.end.mTargets) {
                if (target2 == end) {
                    group2.dual = USE_GROUPS;
                }
                applyGroup(target2, orientation, 1, end, groups, group2);
            }
            if (orientation == 1 && (run instanceof VerticalWidgetRun)) {
                Iterator<DependencyNode> it = ((VerticalWidgetRun) run).baseline.mTargets.iterator();
                while (it.hasNext()) {
                    applyGroup(it.next(), orientation, 2, end, groups, group2);
                }
            }
        }
    }

    private void findGroup(WidgetRun run, int orientation, ArrayList<RunGroup> groups) {
        for (Dependency dependent : run.start.mDependencies) {
            if (dependent instanceof DependencyNode) {
                DependencyNode node = (DependencyNode) dependent;
                applyGroup(node, orientation, 0, run.end, groups, null);
            } else if (dependent instanceof WidgetRun) {
                WidgetRun dependentRun = (WidgetRun) dependent;
                applyGroup(dependentRun.start, orientation, 0, run.end, groups, null);
            }
        }
        for (Dependency dependent2 : run.end.mDependencies) {
            if (dependent2 instanceof DependencyNode) {
                DependencyNode node2 = (DependencyNode) dependent2;
                applyGroup(node2, orientation, 1, run.start, groups, null);
            } else if (dependent2 instanceof WidgetRun) {
                WidgetRun dependentRun2 = (WidgetRun) dependent2;
                applyGroup(dependentRun2.end, orientation, 1, run.start, groups, null);
            }
        }
        if (orientation == 1) {
            for (Dependency dependent3 : ((VerticalWidgetRun) run).baseline.mDependencies) {
                if (dependent3 instanceof DependencyNode) {
                    DependencyNode node3 = (DependencyNode) dependent3;
                    applyGroup(node3, orientation, 2, null, groups, null);
                }
            }
        }
    }

    private String generateDisplayNode(DependencyNode node, boolean centeredConnection, String content) {
        StringBuilder contentBuilder = new StringBuilder(content);
        for (DependencyNode target : node.mTargets) {
            String constraint = ("\n" + node.name()) + " -> " + target.name();
            if (node.mMargin > 0 || centeredConnection || (node.mRun instanceof HelperReferences)) {
                String constraint2 = constraint + "[";
                if (node.mMargin > 0) {
                    constraint2 = constraint2 + "label=\"" + node.mMargin + "\"";
                    if (centeredConnection) {
                        constraint2 = constraint2 + ",";
                    }
                }
                if (centeredConnection) {
                    constraint2 = constraint2 + " style=dashed ";
                }
                if (node.mRun instanceof HelperReferences) {
                    constraint2 = constraint2 + " style=bold,color=gray ";
                }
                constraint = constraint2 + "]";
            }
            contentBuilder.append(constraint + "\n");
        }
        String content2 = contentBuilder.toString();
        return content2;
    }

    private String nodeDefinition(WidgetRun run) {
        boolean z = run instanceof VerticalWidgetRun;
        String name = run.mWidget.getDebugName();
        StringBuilder definition = new StringBuilder(name);
        ConstraintWidget.DimensionBehaviour behaviour = !z ? run.mWidget.getHorizontalDimensionBehaviour() : run.mWidget.getVerticalDimensionBehaviour();
        RunGroup runGroup = run.mRunGroup;
        if (!z) {
            definition.append("_HORIZONTAL");
        } else {
            definition.append("_VERTICAL");
        }
        definition.append(" [shape=none, label=<");
        definition.append("<TABLE BORDER=\"0\" CELLSPACING=\"0\" CELLPADDING=\"2\">");
        definition.append("  <TR>");
        if (!z) {
            definition.append("    <TD ");
            if (run.start.resolved) {
                definition.append(" BGCOLOR=\"green\"");
            }
            definition.append(" PORT=\"LEFT\" BORDER=\"1\">L</TD>");
        } else {
            definition.append("    <TD ");
            if (run.start.resolved) {
                definition.append(" BGCOLOR=\"green\"");
            }
            definition.append(" PORT=\"TOP\" BORDER=\"1\">T</TD>");
        }
        definition.append("    <TD BORDER=\"1\" ");
        if (run.mDimension.resolved && !run.mWidget.measured) {
            definition.append(" BGCOLOR=\"green\" ");
        } else if (run.mDimension.resolved) {
            definition.append(" BGCOLOR=\"lightgray\" ");
        } else if (run.mWidget.measured) {
            definition.append(" BGCOLOR=\"yellow\" ");
        }
        if (behaviour == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
            definition.append("style=\"dashed\"");
        }
        definition.append(">");
        definition.append(name);
        if (runGroup != null) {
            definition.append(" [");
            definition.append(runGroup.mGroupIndex + 1);
            definition.append("/");
            definition.append(RunGroup.index);
            definition.append("]");
        }
        definition.append(" </TD>");
        if (!z) {
            definition.append("    <TD ");
            if (run.end.resolved) {
                definition.append(" BGCOLOR=\"green\"");
            }
            definition.append(" PORT=\"RIGHT\" BORDER=\"1\">R</TD>");
        } else {
            definition.append("    <TD ");
            if (((VerticalWidgetRun) run).baseline.resolved) {
                definition.append(" BGCOLOR=\"green\"");
            }
            definition.append(" PORT=\"BASELINE\" BORDER=\"1\">b</TD>");
            definition.append("    <TD ");
            if (run.end.resolved) {
                definition.append(" BGCOLOR=\"green\"");
            }
            definition.append(" PORT=\"BOTTOM\" BORDER=\"1\">B</TD>");
        }
        definition.append("  </TR></TABLE>");
        definition.append(">];\n");
        return definition.toString();
    }

    private String generateChainDisplayGraph(ChainRun chain, String content) {
        int orientation = chain.orientation;
        StringBuilder subgroup = new StringBuilder("subgraph ");
        subgroup.append("cluster_");
        subgroup.append(chain.mWidget.getDebugName());
        if (orientation == 0) {
            subgroup.append("_h");
        } else {
            subgroup.append("_v");
        }
        subgroup.append(" {\n");
        String definitions = "";
        Iterator<WidgetRun> it = chain.mWidgets.iterator();
        while (it.hasNext()) {
            WidgetRun run = it.next();
            subgroup.append(run.mWidget.getDebugName());
            if (orientation == 0) {
                subgroup.append("_HORIZONTAL");
            } else {
                subgroup.append("_VERTICAL");
            }
            subgroup.append(";\n");
            definitions = generateDisplayGraph(run, definitions);
        }
        subgroup.append("}\n");
        return content + definitions + ((Object) subgroup);
    }

    private boolean isCenteredConnection(DependencyNode start, DependencyNode end) {
        int startTargets = 0;
        int endTargets = 0;
        for (DependencyNode s : start.mTargets) {
            if (s != end) {
                startTargets++;
            }
        }
        for (DependencyNode e : end.mTargets) {
            if (e != start) {
                endTargets++;
            }
        }
        if (startTargets <= 0 || endTargets <= 0) {
            return false;
        }
        return USE_GROUPS;
    }

    private String generateDisplayGraph(WidgetRun root, String content) {
        DependencyNode start = root.start;
        DependencyNode end = root.end;
        StringBuilder sb = new StringBuilder(content);
        if (!(root instanceof HelperReferences) && start.mDependencies.isEmpty() && end.mDependencies.isEmpty() && start.mTargets.isEmpty() && end.mTargets.isEmpty()) {
            return content;
        }
        sb.append(nodeDefinition(root));
        boolean centeredConnection = isCenteredConnection(start, end);
        String content2 = generateDisplayNode(end, centeredConnection, generateDisplayNode(start, centeredConnection, content));
        if (root instanceof VerticalWidgetRun) {
            DependencyNode baseline = ((VerticalWidgetRun) root).baseline;
            content2 = generateDisplayNode(baseline, centeredConnection, content2);
        }
        if ((root instanceof HorizontalWidgetRun) || ((root instanceof ChainRun) && ((ChainRun) root).orientation == 0)) {
            ConstraintWidget.DimensionBehaviour behaviour = root.mWidget.getHorizontalDimensionBehaviour();
            if (behaviour == ConstraintWidget.DimensionBehaviour.FIXED || behaviour == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                if (!start.mTargets.isEmpty() && end.mTargets.isEmpty()) {
                    sb.append("\n");
                    sb.append(end.name());
                    sb.append(" -> ");
                    sb.append(start.name());
                    sb.append("\n");
                } else if (start.mTargets.isEmpty() && !end.mTargets.isEmpty()) {
                    sb.append("\n");
                    sb.append(start.name());
                    sb.append(" -> ");
                    sb.append(end.name());
                    sb.append("\n");
                }
            } else if (behaviour == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && root.mWidget.getDimensionRatio() > 0.0f) {
                sb.append("\n");
                sb.append(root.mWidget.getDebugName());
                sb.append("_HORIZONTAL -> ");
                sb.append(root.mWidget.getDebugName());
                sb.append("_VERTICAL;\n");
            }
        } else if ((root instanceof VerticalWidgetRun) || ((root instanceof ChainRun) && ((ChainRun) root).orientation == 1)) {
            ConstraintWidget.DimensionBehaviour behaviour2 = root.mWidget.getVerticalDimensionBehaviour();
            if (behaviour2 == ConstraintWidget.DimensionBehaviour.FIXED || behaviour2 == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT) {
                if (!start.mTargets.isEmpty() && end.mTargets.isEmpty()) {
                    sb.append("\n");
                    sb.append(end.name());
                    sb.append(" -> ");
                    sb.append(start.name());
                    sb.append("\n");
                } else if (start.mTargets.isEmpty() && !end.mTargets.isEmpty()) {
                    sb.append("\n");
                    sb.append(start.name());
                    sb.append(" -> ");
                    sb.append(end.name());
                    sb.append("\n");
                }
            } else if (behaviour2 == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && root.mWidget.getDimensionRatio() > 0.0f) {
                sb.append("\n");
                sb.append(root.mWidget.getDebugName());
                sb.append("_VERTICAL -> ");
                sb.append(root.mWidget.getDebugName());
                sb.append("_HORIZONTAL;\n");
            }
        }
        if (root instanceof ChainRun) {
            return generateChainDisplayGraph((ChainRun) root, content2);
        }
        return sb.toString();
    }
}
