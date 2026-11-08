package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.ConstraintAnchor;
import androidx.constraintlayout.core.widgets.ConstraintWidget;

/* loaded from: classes.dex */
public abstract class WidgetRun implements Dependency {
    protected ConstraintWidget.DimensionBehaviour mDimensionBehavior;
    RunGroup mRunGroup;
    ConstraintWidget mWidget;
    public int matchConstraintsType;
    DimensionDependency mDimension = new DimensionDependency(this);
    public int orientation = 0;
    boolean mResolved = false;
    public DependencyNode start = new DependencyNode(this);
    public DependencyNode end = new DependencyNode(this);
    protected RunType mRunType = RunType.NONE;

    enum RunType {
        NONE,
        START,
        END,
        CENTER
    }

    abstract void apply();

    abstract void applyToWidget();

    abstract void clear();

    abstract void reset();

    abstract boolean supportsWrapComputation();

    public WidgetRun(ConstraintWidget widget) {
        this.mWidget = widget;
    }

    public boolean isDimensionResolved() {
        return this.mDimension.resolved;
    }

    public boolean isCenterConnection() {
        int connections = 0;
        int count = this.start.mTargets.size();
        for (int i = 0; i < count; i++) {
            DependencyNode dependency = this.start.mTargets.get(i);
            if (dependency.mRun != this) {
                connections++;
            }
        }
        int count2 = this.end.mTargets.size();
        for (int i2 = 0; i2 < count2; i2++) {
            DependencyNode dependency2 = this.end.mTargets.get(i2);
            if (dependency2.mRun != this) {
                connections++;
            }
        }
        return connections >= 2;
    }

    public long wrapSize(int direction) {
        if (this.mDimension.resolved) {
            long size = this.mDimension.value;
            if (isCenterConnection()) {
                return size + (this.start.mMargin - this.end.mMargin);
            }
            if (direction == 0) {
                return size + this.start.mMargin;
            }
            return size - this.end.mMargin;
        }
        return 0L;
    }

    protected final DependencyNode getTarget(ConstraintAnchor anchor) {
        if (anchor.mTarget == null) {
            return null;
        }
        ConstraintWidget targetWidget = anchor.mTarget.mOwner;
        ConstraintAnchor.Type targetType = anchor.mTarget.mType;
        switch (AnonymousClass1.$SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type[targetType.ordinal()]) {
            case 1:
                HorizontalWidgetRun run = targetWidget.mHorizontalRun;
                DependencyNode target = run.start;
                return target;
            case 2:
                HorizontalWidgetRun run2 = targetWidget.mHorizontalRun;
                DependencyNode target2 = run2.end;
                return target2;
            case 3:
                VerticalWidgetRun run3 = targetWidget.mVerticalRun;
                DependencyNode target3 = run3.start;
                return target3;
            case 4:
                VerticalWidgetRun run4 = targetWidget.mVerticalRun;
                DependencyNode target4 = run4.baseline;
                return target4;
            case 5:
                VerticalWidgetRun run5 = targetWidget.mVerticalRun;
                DependencyNode target5 = run5.end;
                return target5;
            default:
                return null;
        }
    }

    /* renamed from: androidx.constraintlayout.core.widgets.analyzer.WidgetRun$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type;

        static {
            int[] iArr = new int[ConstraintAnchor.Type.values().length];
            $SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type = iArr;
            try {
                iArr[ConstraintAnchor.Type.LEFT.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type[ConstraintAnchor.Type.RIGHT.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type[ConstraintAnchor.Type.TOP.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type[ConstraintAnchor.Type.BASELINE.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type[ConstraintAnchor.Type.BOTTOM.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
        }
    }

    protected void updateRunCenter(Dependency dependency, ConstraintAnchor startAnchor, ConstraintAnchor endAnchor, int orientation) {
        DependencyNode startTarget = getTarget(startAnchor);
        DependencyNode endTarget = getTarget(endAnchor);
        if (!startTarget.resolved || !endTarget.resolved) {
            return;
        }
        int startPos = startTarget.value + startAnchor.getMargin();
        int endPos = endTarget.value - endAnchor.getMargin();
        int distance = endPos - startPos;
        if (!this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
            resolveDimension(orientation, distance);
        }
        if (!this.mDimension.resolved) {
            return;
        }
        if (this.mDimension.value == distance) {
            this.start.resolve(startPos);
            this.end.resolve(endPos);
            return;
        }
        float bias = orientation == 0 ? this.mWidget.getHorizontalBiasPercent() : this.mWidget.getVerticalBiasPercent();
        if (startTarget == endTarget) {
            startPos = startTarget.value;
            endPos = endTarget.value;
            bias = 0.5f;
        }
        int availableDistance = (endPos - startPos) - this.mDimension.value;
        this.start.resolve((int) (startPos + 0.5f + (availableDistance * bias)));
        this.end.resolve(this.start.value + this.mDimension.value);
    }

    private void resolveDimension(int orientation, int distance) {
        WidgetRun run;
        float percent;
        int value;
        switch (this.matchConstraintsType) {
            case 0:
                this.mDimension.resolve(getLimitedDimension(distance, orientation));
                break;
            case 1:
                int wrapValue = getLimitedDimension(this.mDimension.wrapValue, orientation);
                this.mDimension.resolve(Math.min(wrapValue, distance));
                break;
            case 2:
                ConstraintWidget parent = this.mWidget.getParent();
                if (parent != null) {
                    if (orientation == 0) {
                        run = parent.mHorizontalRun;
                    } else {
                        run = parent.mVerticalRun;
                    }
                    if (run.mDimension.resolved) {
                        if (orientation == 0) {
                            percent = this.mWidget.mMatchConstraintPercentWidth;
                        } else {
                            percent = this.mWidget.mMatchConstraintPercentHeight;
                        }
                        int targetDimensionValue = run.mDimension.value;
                        int size = (int) ((targetDimensionValue * percent) + 0.5f);
                        this.mDimension.resolve(getLimitedDimension(size, orientation));
                        break;
                    }
                }
                break;
            case 3:
                if (this.mWidget.mHorizontalRun.mDimensionBehavior != ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT || this.mWidget.mHorizontalRun.matchConstraintsType != 3 || this.mWidget.mVerticalRun.mDimensionBehavior != ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT || this.mWidget.mVerticalRun.matchConstraintsType != 3) {
                    WidgetRun run2 = orientation == 0 ? this.mWidget.mVerticalRun : this.mWidget.mHorizontalRun;
                    if (run2.mDimension.resolved) {
                        float ratio = this.mWidget.getDimensionRatio();
                        if (orientation == 1) {
                            value = (int) ((run2.mDimension.value / ratio) + 0.5f);
                        } else {
                            value = (int) ((run2.mDimension.value * ratio) + 0.5f);
                        }
                        this.mDimension.resolve(value);
                        break;
                    }
                }
                break;
        }
    }

    protected void updateRunStart(Dependency dependency) {
    }

    protected void updateRunEnd(Dependency dependency) {
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.Dependency
    public void update(Dependency dependency) {
    }

    protected final int getLimitedDimension(int dimension, int orientation) {
        if (orientation == 0) {
            int max = this.mWidget.mMatchConstraintMaxWidth;
            int min = this.mWidget.mMatchConstraintMinWidth;
            int value = Math.max(min, dimension);
            if (max > 0) {
                value = Math.min(max, dimension);
            }
            if (value != dimension) {
                return value;
            }
            return dimension;
        }
        int max2 = this.mWidget.mMatchConstraintMaxHeight;
        int min2 = this.mWidget.mMatchConstraintMinHeight;
        int value2 = Math.max(min2, dimension);
        if (max2 > 0) {
            value2 = Math.min(max2, dimension);
        }
        if (value2 != dimension) {
            return value2;
        }
        return dimension;
    }

    protected final DependencyNode getTarget(ConstraintAnchor anchor, int orientation) {
        if (anchor.mTarget == null) {
            return null;
        }
        ConstraintWidget targetWidget = anchor.mTarget.mOwner;
        WidgetRun run = orientation == 0 ? targetWidget.mHorizontalRun : targetWidget.mVerticalRun;
        ConstraintAnchor.Type targetType = anchor.mTarget.mType;
        switch (AnonymousClass1.$SwitchMap$androidx$constraintlayout$core$widgets$ConstraintAnchor$Type[targetType.ordinal()]) {
            case 1:
            case 3:
                DependencyNode target = run.start;
                return target;
            case 2:
            case 5:
                DependencyNode target2 = run.end;
                return target2;
            case 4:
            default:
                return null;
        }
    }

    protected final void addTarget(DependencyNode node, DependencyNode target, int margin) {
        node.mTargets.add(target);
        node.mMargin = margin;
        target.mDependencies.add(node);
    }

    protected final void addTarget(DependencyNode node, DependencyNode target, int marginFactor, DimensionDependency dimensionDependency) {
        node.mTargets.add(target);
        node.mTargets.add(this.mDimension);
        node.mMarginFactor = marginFactor;
        node.mMarginDependency = dimensionDependency;
        target.mDependencies.add(node);
        dimensionDependency.mDependencies.add(node);
    }

    public long getWrapDimension() {
        if (this.mDimension.resolved) {
            return this.mDimension.value;
        }
        return 0L;
    }

    public boolean isResolved() {
        return this.mResolved;
    }
}
