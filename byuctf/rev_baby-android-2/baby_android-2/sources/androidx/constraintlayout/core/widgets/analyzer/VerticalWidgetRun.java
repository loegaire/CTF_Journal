package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.ConstraintAnchor;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.Helper;
import androidx.constraintlayout.core.widgets.analyzer.DependencyNode;
import androidx.constraintlayout.core.widgets.analyzer.WidgetRun;

/* loaded from: classes.dex */
public class VerticalWidgetRun extends WidgetRun {
    private static final boolean FORCE_USE = true;
    public DependencyNode baseline;
    DimensionDependency mBaselineDimension;

    public VerticalWidgetRun(ConstraintWidget widget) {
        super(widget);
        this.baseline = new DependencyNode(this);
        this.mBaselineDimension = null;
        this.start.mType = DependencyNode.Type.TOP;
        this.end.mType = DependencyNode.Type.BOTTOM;
        this.baseline.mType = DependencyNode.Type.BASELINE;
        this.orientation = 1;
    }

    public String toString() {
        return "VerticalRun " + this.mWidget.getDebugName();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void clear() {
        this.mRunGroup = null;
        this.start.clear();
        this.end.clear();
        this.baseline.clear();
        this.mDimension.clear();
        this.mResolved = false;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void reset() {
        this.mResolved = false;
        this.start.clear();
        this.start.resolved = false;
        this.end.clear();
        this.end.resolved = false;
        this.baseline.clear();
        this.baseline.resolved = false;
        this.mDimension.resolved = false;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    boolean supportsWrapComputation() {
        if (this.mDimensionBehavior != ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT || this.mWidget.mMatchConstraintDefaultHeight == 0) {
            return FORCE_USE;
        }
        return false;
    }

    /* renamed from: androidx.constraintlayout.core.widgets.analyzer.VerticalWidgetRun$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$androidx$constraintlayout$core$widgets$analyzer$WidgetRun$RunType;

        static {
            int[] iArr = new int[WidgetRun.RunType.values().length];
            $SwitchMap$androidx$constraintlayout$core$widgets$analyzer$WidgetRun$RunType = iArr;
            try {
                iArr[WidgetRun.RunType.START.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$widgets$analyzer$WidgetRun$RunType[WidgetRun.RunType.END.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$widgets$analyzer$WidgetRun$RunType[WidgetRun.RunType.CENTER.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun, androidx.constraintlayout.core.widgets.analyzer.Dependency
    public void update(Dependency dependency) {
        switch (AnonymousClass1.$SwitchMap$androidx$constraintlayout$core$widgets$analyzer$WidgetRun$RunType[this.mRunType.ordinal()]) {
            case 1:
                updateRunStart(dependency);
                break;
            case 2:
                updateRunEnd(dependency);
                break;
            case 3:
                updateRunCenter(dependency, this.mWidget.mTop, this.mWidget.mBottom, 1);
                return;
        }
        if (this.mDimension.readyToSolve && !this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
            switch (this.mWidget.mMatchConstraintDefaultHeight) {
                case 2:
                    ConstraintWidget parent = this.mWidget.getParent();
                    if (parent != null && parent.mVerticalRun.mDimension.resolved) {
                        float percent = this.mWidget.mMatchConstraintPercentHeight;
                        int targetDimensionValue = parent.mVerticalRun.mDimension.value;
                        int size = (int) ((targetDimensionValue * percent) + 0.5f);
                        this.mDimension.resolve(size);
                        break;
                    }
                    break;
                case 3:
                    if (this.mWidget.mHorizontalRun.mDimension.resolved) {
                        int size2 = 0;
                        int ratioSide = this.mWidget.getDimensionRatioSide();
                        switch (ratioSide) {
                            case -1:
                                size2 = (int) ((this.mWidget.mHorizontalRun.mDimension.value / this.mWidget.getDimensionRatio()) + 0.5f);
                                break;
                            case 0:
                                size2 = (int) ((this.mWidget.mHorizontalRun.mDimension.value * this.mWidget.getDimensionRatio()) + 0.5f);
                                break;
                            case 1:
                                size2 = (int) ((this.mWidget.mHorizontalRun.mDimension.value / this.mWidget.getDimensionRatio()) + 0.5f);
                                break;
                        }
                        this.mDimension.resolve(size2);
                        break;
                    }
                    break;
            }
        }
        if (!this.start.readyToSolve || !this.end.readyToSolve) {
            return;
        }
        if (this.start.resolved && this.end.resolved && this.mDimension.resolved) {
            return;
        }
        if (!this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && this.mWidget.mMatchConstraintDefaultWidth == 0 && !this.mWidget.isInVerticalChain()) {
            DependencyNode startTarget = this.start.mTargets.get(0);
            DependencyNode endTarget = this.end.mTargets.get(0);
            int startPos = startTarget.value + this.start.mMargin;
            int endPos = endTarget.value + this.end.mMargin;
            int distance = endPos - startPos;
            this.start.resolve(startPos);
            this.end.resolve(endPos);
            this.mDimension.resolve(distance);
            return;
        }
        if (!this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && this.matchConstraintsType == 1 && this.start.mTargets.size() > 0 && this.end.mTargets.size() > 0) {
            DependencyNode startTarget2 = this.start.mTargets.get(0);
            DependencyNode endTarget2 = this.end.mTargets.get(0);
            int startPos2 = startTarget2.value + this.start.mMargin;
            int endPos2 = endTarget2.value + this.end.mMargin;
            int availableSpace = endPos2 - startPos2;
            if (availableSpace < this.mDimension.wrapValue) {
                this.mDimension.resolve(availableSpace);
            } else {
                this.mDimension.resolve(this.mDimension.wrapValue);
            }
        }
        if (this.mDimension.resolved && this.start.mTargets.size() > 0 && this.end.mTargets.size() > 0) {
            DependencyNode startTarget3 = this.start.mTargets.get(0);
            DependencyNode endTarget3 = this.end.mTargets.get(0);
            int startPos3 = startTarget3.value + this.start.mMargin;
            int endPos3 = endTarget3.value + this.end.mMargin;
            float bias = this.mWidget.getVerticalBiasPercent();
            if (startTarget3 == endTarget3) {
                startPos3 = startTarget3.value;
                endPos3 = endTarget3.value;
                bias = 0.5f;
            }
            int distance2 = (endPos3 - startPos3) - this.mDimension.value;
            this.start.resolve((int) (startPos3 + 0.5f + (distance2 * bias)));
            this.end.resolve(this.start.value + this.mDimension.value);
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void apply() {
        ConstraintWidget parent;
        ConstraintWidget parent2;
        if (this.mWidget.measured) {
            this.mDimension.resolve(this.mWidget.getHeight());
        }
        if (!this.mDimension.resolved) {
            this.mDimensionBehavior = this.mWidget.getVerticalDimensionBehaviour();
            if (this.mWidget.hasBaseline()) {
                this.mBaselineDimension = new BaselineDimensionDependency(this);
            }
            if (this.mDimensionBehavior != ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_PARENT && (parent2 = this.mWidget.getParent()) != null && parent2.getVerticalDimensionBehaviour() == ConstraintWidget.DimensionBehaviour.FIXED) {
                    int resolvedDimension = (parent2.getHeight() - this.mWidget.mTop.getMargin()) - this.mWidget.mBottom.getMargin();
                    addTarget(this.start, parent2.mVerticalRun.start, this.mWidget.mTop.getMargin());
                    addTarget(this.end, parent2.mVerticalRun.end, -this.mWidget.mBottom.getMargin());
                    this.mDimension.resolve(resolvedDimension);
                    return;
                }
                if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.FIXED) {
                    this.mDimension.resolve(this.mWidget.getHeight());
                }
            }
        } else if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_PARENT && (parent = this.mWidget.getParent()) != null && parent.getVerticalDimensionBehaviour() == ConstraintWidget.DimensionBehaviour.FIXED) {
            addTarget(this.start, parent.mVerticalRun.start, this.mWidget.mTop.getMargin());
            addTarget(this.end, parent.mVerticalRun.end, -this.mWidget.mBottom.getMargin());
            return;
        }
        if (this.mDimension.resolved && this.mWidget.measured) {
            if (this.mWidget.mListAnchors[2].mTarget != null && this.mWidget.mListAnchors[3].mTarget != null) {
                if (this.mWidget.isInVerticalChain()) {
                    this.start.mMargin = this.mWidget.mListAnchors[2].getMargin();
                    this.end.mMargin = -this.mWidget.mListAnchors[3].getMargin();
                } else {
                    DependencyNode startTarget = getTarget(this.mWidget.mListAnchors[2]);
                    if (startTarget != null) {
                        addTarget(this.start, startTarget, this.mWidget.mListAnchors[2].getMargin());
                    }
                    DependencyNode endTarget = getTarget(this.mWidget.mListAnchors[3]);
                    if (endTarget != null) {
                        addTarget(this.end, endTarget, -this.mWidget.mListAnchors[3].getMargin());
                    }
                    this.start.delegateToWidgetRun = FORCE_USE;
                    this.end.delegateToWidgetRun = FORCE_USE;
                }
                if (this.mWidget.hasBaseline()) {
                    addTarget(this.baseline, this.start, this.mWidget.getBaselineDistance());
                    return;
                }
                return;
            }
            if (this.mWidget.mListAnchors[2].mTarget != null) {
                DependencyNode target = getTarget(this.mWidget.mListAnchors[2]);
                if (target != null) {
                    addTarget(this.start, target, this.mWidget.mListAnchors[2].getMargin());
                    addTarget(this.end, this.start, this.mDimension.value);
                    if (this.mWidget.hasBaseline()) {
                        addTarget(this.baseline, this.start, this.mWidget.getBaselineDistance());
                        return;
                    }
                    return;
                }
                return;
            }
            if (this.mWidget.mListAnchors[3].mTarget != null) {
                DependencyNode target2 = getTarget(this.mWidget.mListAnchors[3]);
                if (target2 != null) {
                    addTarget(this.end, target2, -this.mWidget.mListAnchors[3].getMargin());
                    addTarget(this.start, this.end, -this.mDimension.value);
                }
                if (this.mWidget.hasBaseline()) {
                    addTarget(this.baseline, this.start, this.mWidget.getBaselineDistance());
                    return;
                }
                return;
            }
            if (this.mWidget.mListAnchors[4].mTarget != null) {
                DependencyNode target3 = getTarget(this.mWidget.mListAnchors[4]);
                if (target3 != null) {
                    addTarget(this.baseline, target3, 0);
                    addTarget(this.start, this.baseline, -this.mWidget.getBaselineDistance());
                    addTarget(this.end, this.start, this.mDimension.value);
                    return;
                }
                return;
            }
            if (!(this.mWidget instanceof Helper) && this.mWidget.getParent() != null && this.mWidget.getAnchor(ConstraintAnchor.Type.CENTER).mTarget == null) {
                DependencyNode top = this.mWidget.getParent().mVerticalRun.start;
                addTarget(this.start, top, this.mWidget.getY());
                addTarget(this.end, this.start, this.mDimension.value);
                if (this.mWidget.hasBaseline()) {
                    addTarget(this.baseline, this.start, this.mWidget.getBaselineDistance());
                    return;
                }
                return;
            }
            return;
        }
        if (!this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
            switch (this.mWidget.mMatchConstraintDefaultHeight) {
                case 2:
                    ConstraintWidget parent3 = this.mWidget.getParent();
                    if (parent3 != null) {
                        DependencyNode targetDimension = parent3.mVerticalRun.mDimension;
                        this.mDimension.mTargets.add(targetDimension);
                        targetDimension.mDependencies.add(this.mDimension);
                        this.mDimension.delegateToWidgetRun = FORCE_USE;
                        this.mDimension.mDependencies.add(this.start);
                        this.mDimension.mDependencies.add(this.end);
                        break;
                    }
                    break;
                case 3:
                    if (!this.mWidget.isInVerticalChain() && this.mWidget.mMatchConstraintDefaultWidth != 3) {
                        DependencyNode targetDimension2 = this.mWidget.mHorizontalRun.mDimension;
                        this.mDimension.mTargets.add(targetDimension2);
                        targetDimension2.mDependencies.add(this.mDimension);
                        this.mDimension.delegateToWidgetRun = FORCE_USE;
                        this.mDimension.mDependencies.add(this.start);
                        this.mDimension.mDependencies.add(this.end);
                        break;
                    }
                    break;
            }
        } else {
            this.mDimension.addDependency(this);
        }
        if (this.mWidget.mListAnchors[2].mTarget != null && this.mWidget.mListAnchors[3].mTarget != null) {
            if (this.mWidget.isInVerticalChain()) {
                this.start.mMargin = this.mWidget.mListAnchors[2].getMargin();
                this.end.mMargin = -this.mWidget.mListAnchors[3].getMargin();
            } else {
                DependencyNode startTarget2 = getTarget(this.mWidget.mListAnchors[2]);
                DependencyNode endTarget2 = getTarget(this.mWidget.mListAnchors[3]);
                if (startTarget2 != null) {
                    startTarget2.addDependency(this);
                }
                if (endTarget2 != null) {
                    endTarget2.addDependency(this);
                }
                this.mRunType = WidgetRun.RunType.CENTER;
            }
            if (this.mWidget.hasBaseline()) {
                addTarget(this.baseline, this.start, 1, this.mBaselineDimension);
            }
        } else if (this.mWidget.mListAnchors[2].mTarget != null) {
            DependencyNode target4 = getTarget(this.mWidget.mListAnchors[2]);
            if (target4 != null) {
                addTarget(this.start, target4, this.mWidget.mListAnchors[2].getMargin());
                addTarget(this.end, this.start, 1, this.mDimension);
                if (this.mWidget.hasBaseline()) {
                    addTarget(this.baseline, this.start, 1, this.mBaselineDimension);
                }
                if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && this.mWidget.getDimensionRatio() > 0.0f && this.mWidget.mHorizontalRun.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                    this.mWidget.mHorizontalRun.mDimension.mDependencies.add(this.mDimension);
                    this.mDimension.mTargets.add(this.mWidget.mHorizontalRun.mDimension);
                    this.mDimension.updateDelegate = this;
                }
            }
        } else if (this.mWidget.mListAnchors[3].mTarget != null) {
            DependencyNode target5 = getTarget(this.mWidget.mListAnchors[3]);
            if (target5 != null) {
                addTarget(this.end, target5, -this.mWidget.mListAnchors[3].getMargin());
                addTarget(this.start, this.end, -1, this.mDimension);
                if (this.mWidget.hasBaseline()) {
                    addTarget(this.baseline, this.start, 1, this.mBaselineDimension);
                }
            }
        } else if (this.mWidget.mListAnchors[4].mTarget != null) {
            DependencyNode target6 = getTarget(this.mWidget.mListAnchors[4]);
            if (target6 != null) {
                addTarget(this.baseline, target6, 0);
                addTarget(this.start, this.baseline, -1, this.mBaselineDimension);
                addTarget(this.end, this.start, 1, this.mDimension);
            }
        } else if (!(this.mWidget instanceof Helper) && this.mWidget.getParent() != null) {
            DependencyNode top2 = this.mWidget.getParent().mVerticalRun.start;
            addTarget(this.start, top2, this.mWidget.getY());
            addTarget(this.end, this.start, 1, this.mDimension);
            if (this.mWidget.hasBaseline()) {
                addTarget(this.baseline, this.start, 1, this.mBaselineDimension);
            }
            if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && this.mWidget.getDimensionRatio() > 0.0f && this.mWidget.mHorizontalRun.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                this.mWidget.mHorizontalRun.mDimension.mDependencies.add(this.mDimension);
                this.mDimension.mTargets.add(this.mWidget.mHorizontalRun.mDimension);
                this.mDimension.updateDelegate = this;
            }
        }
        if (this.mDimension.mTargets.size() == 0) {
            this.mDimension.readyToSolve = FORCE_USE;
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    public void applyToWidget() {
        if (this.start.resolved) {
            this.mWidget.setY(this.start.value);
        }
    }
}
