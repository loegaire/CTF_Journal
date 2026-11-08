package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.ConstraintAnchor;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.Helper;
import androidx.constraintlayout.core.widgets.analyzer.DependencyNode;
import androidx.constraintlayout.core.widgets.analyzer.WidgetRun;

/* loaded from: classes.dex */
public class HorizontalWidgetRun extends WidgetRun {
    private static int[] sTempDimensions = new int[2];

    public HorizontalWidgetRun(ConstraintWidget widget) {
        super(widget);
        this.start.mType = DependencyNode.Type.LEFT;
        this.end.mType = DependencyNode.Type.RIGHT;
        this.orientation = 0;
    }

    public String toString() {
        return "HorizontalRun " + this.mWidget.getDebugName();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void clear() {
        this.mRunGroup = null;
        this.start.clear();
        this.end.clear();
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
        this.mDimension.resolved = false;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    boolean supportsWrapComputation() {
        return this.mDimensionBehavior != ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT || this.mWidget.mMatchConstraintDefaultWidth == 0;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void apply() {
        ConstraintWidget parent;
        ConstraintWidget parent2;
        if (this.mWidget.measured) {
            this.mDimension.resolve(this.mWidget.getWidth());
        }
        if (!this.mDimension.resolved) {
            this.mDimensionBehavior = this.mWidget.getHorizontalDimensionBehaviour();
            if (this.mDimensionBehavior != ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
                if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_PARENT && (parent2 = this.mWidget.getParent()) != null && (parent2.getHorizontalDimensionBehaviour() == ConstraintWidget.DimensionBehaviour.FIXED || parent2.getHorizontalDimensionBehaviour() == ConstraintWidget.DimensionBehaviour.MATCH_PARENT)) {
                    int resolvedDimension = (parent2.getWidth() - this.mWidget.mLeft.getMargin()) - this.mWidget.mRight.getMargin();
                    addTarget(this.start, parent2.mHorizontalRun.start, this.mWidget.mLeft.getMargin());
                    addTarget(this.end, parent2.mHorizontalRun.end, -this.mWidget.mRight.getMargin());
                    this.mDimension.resolve(resolvedDimension);
                    return;
                }
                if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.FIXED) {
                    this.mDimension.resolve(this.mWidget.getWidth());
                }
            }
        } else if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_PARENT && (parent = this.mWidget.getParent()) != null && (parent.getHorizontalDimensionBehaviour() == ConstraintWidget.DimensionBehaviour.FIXED || parent.getHorizontalDimensionBehaviour() == ConstraintWidget.DimensionBehaviour.MATCH_PARENT)) {
            addTarget(this.start, parent.mHorizontalRun.start, this.mWidget.mLeft.getMargin());
            addTarget(this.end, parent.mHorizontalRun.end, -this.mWidget.mRight.getMargin());
            return;
        }
        if (this.mDimension.resolved && this.mWidget.measured) {
            if (this.mWidget.mListAnchors[0].mTarget != null && this.mWidget.mListAnchors[1].mTarget != null) {
                if (this.mWidget.isInHorizontalChain()) {
                    this.start.mMargin = this.mWidget.mListAnchors[0].getMargin();
                    this.end.mMargin = -this.mWidget.mListAnchors[1].getMargin();
                    return;
                }
                DependencyNode startTarget = getTarget(this.mWidget.mListAnchors[0]);
                if (startTarget != null) {
                    addTarget(this.start, startTarget, this.mWidget.mListAnchors[0].getMargin());
                }
                DependencyNode endTarget = getTarget(this.mWidget.mListAnchors[1]);
                if (endTarget != null) {
                    addTarget(this.end, endTarget, -this.mWidget.mListAnchors[1].getMargin());
                }
                this.start.delegateToWidgetRun = true;
                this.end.delegateToWidgetRun = true;
                return;
            }
            if (this.mWidget.mListAnchors[0].mTarget != null) {
                DependencyNode target = getTarget(this.mWidget.mListAnchors[0]);
                if (target != null) {
                    addTarget(this.start, target, this.mWidget.mListAnchors[0].getMargin());
                    addTarget(this.end, this.start, this.mDimension.value);
                    return;
                }
                return;
            }
            if (this.mWidget.mListAnchors[1].mTarget != null) {
                DependencyNode target2 = getTarget(this.mWidget.mListAnchors[1]);
                if (target2 != null) {
                    addTarget(this.end, target2, -this.mWidget.mListAnchors[1].getMargin());
                    addTarget(this.start, this.end, -this.mDimension.value);
                    return;
                }
                return;
            }
            if (!(this.mWidget instanceof Helper) && this.mWidget.getParent() != null && this.mWidget.getAnchor(ConstraintAnchor.Type.CENTER).mTarget == null) {
                DependencyNode left = this.mWidget.getParent().mHorizontalRun.start;
                addTarget(this.start, left, this.mWidget.getX());
                addTarget(this.end, this.start, this.mDimension.value);
                return;
            }
            return;
        }
        if (this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
            switch (this.mWidget.mMatchConstraintDefaultWidth) {
                case 2:
                    ConstraintWidget parent3 = this.mWidget.getParent();
                    if (parent3 != null) {
                        DependencyNode targetDimension = parent3.mVerticalRun.mDimension;
                        this.mDimension.mTargets.add(targetDimension);
                        targetDimension.mDependencies.add(this.mDimension);
                        this.mDimension.delegateToWidgetRun = true;
                        this.mDimension.mDependencies.add(this.start);
                        this.mDimension.mDependencies.add(this.end);
                        break;
                    }
                    break;
                case 3:
                    if (this.mWidget.mMatchConstraintDefaultHeight == 3) {
                        this.start.updateDelegate = this;
                        this.end.updateDelegate = this;
                        this.mWidget.mVerticalRun.start.updateDelegate = this;
                        this.mWidget.mVerticalRun.end.updateDelegate = this;
                        this.mDimension.updateDelegate = this;
                        if (this.mWidget.isInVerticalChain()) {
                            this.mDimension.mTargets.add(this.mWidget.mVerticalRun.mDimension);
                            this.mWidget.mVerticalRun.mDimension.mDependencies.add(this.mDimension);
                            this.mWidget.mVerticalRun.mDimension.updateDelegate = this;
                            this.mDimension.mTargets.add(this.mWidget.mVerticalRun.start);
                            this.mDimension.mTargets.add(this.mWidget.mVerticalRun.end);
                            this.mWidget.mVerticalRun.start.mDependencies.add(this.mDimension);
                            this.mWidget.mVerticalRun.end.mDependencies.add(this.mDimension);
                            break;
                        } else if (this.mWidget.isInHorizontalChain()) {
                            this.mWidget.mVerticalRun.mDimension.mTargets.add(this.mDimension);
                            this.mDimension.mDependencies.add(this.mWidget.mVerticalRun.mDimension);
                            break;
                        } else {
                            this.mWidget.mVerticalRun.mDimension.mTargets.add(this.mDimension);
                            break;
                        }
                    } else {
                        DependencyNode targetDimension2 = this.mWidget.mVerticalRun.mDimension;
                        this.mDimension.mTargets.add(targetDimension2);
                        targetDimension2.mDependencies.add(this.mDimension);
                        this.mWidget.mVerticalRun.start.mDependencies.add(this.mDimension);
                        this.mWidget.mVerticalRun.end.mDependencies.add(this.mDimension);
                        this.mDimension.delegateToWidgetRun = true;
                        this.mDimension.mDependencies.add(this.start);
                        this.mDimension.mDependencies.add(this.end);
                        this.start.mTargets.add(this.mDimension);
                        this.end.mTargets.add(this.mDimension);
                        break;
                    }
            }
        }
        if (this.mWidget.mListAnchors[0].mTarget != null && this.mWidget.mListAnchors[1].mTarget != null) {
            if (this.mWidget.isInHorizontalChain()) {
                this.start.mMargin = this.mWidget.mListAnchors[0].getMargin();
                this.end.mMargin = -this.mWidget.mListAnchors[1].getMargin();
                return;
            }
            DependencyNode startTarget2 = getTarget(this.mWidget.mListAnchors[0]);
            DependencyNode endTarget2 = getTarget(this.mWidget.mListAnchors[1]);
            if (startTarget2 != null) {
                startTarget2.addDependency(this);
            }
            if (endTarget2 != null) {
                endTarget2.addDependency(this);
            }
            this.mRunType = WidgetRun.RunType.CENTER;
            return;
        }
        if (this.mWidget.mListAnchors[0].mTarget != null) {
            DependencyNode target3 = getTarget(this.mWidget.mListAnchors[0]);
            if (target3 != null) {
                addTarget(this.start, target3, this.mWidget.mListAnchors[0].getMargin());
                addTarget(this.end, this.start, 1, this.mDimension);
                return;
            }
            return;
        }
        if (this.mWidget.mListAnchors[1].mTarget != null) {
            DependencyNode target4 = getTarget(this.mWidget.mListAnchors[1]);
            if (target4 != null) {
                addTarget(this.end, target4, -this.mWidget.mListAnchors[1].getMargin());
                addTarget(this.start, this.end, -1, this.mDimension);
                return;
            }
            return;
        }
        if (!(this.mWidget instanceof Helper) && this.mWidget.getParent() != null) {
            DependencyNode left2 = this.mWidget.getParent().mHorizontalRun.start;
            addTarget(this.start, left2, this.mWidget.getX());
            addTarget(this.end, this.start, 1, this.mDimension);
        }
    }

    private void computeInsetRatio(int[] dimensions, int x1, int x2, int y1, int y2, float ratio, int side) {
        int dx = x2 - x1;
        int dy = y2 - y1;
        switch (side) {
            case -1:
                int candidateX1 = (int) ((dy * ratio) + 0.5f);
                int candidateY2 = (int) ((dx / ratio) + 0.5f);
                if (candidateX1 <= dx && dy <= dy) {
                    dimensions[0] = candidateX1;
                    dimensions[1] = dy;
                    break;
                } else if (dx <= dx && candidateY2 <= dy) {
                    dimensions[0] = dx;
                    dimensions[1] = candidateY2;
                    break;
                }
                break;
            case 0:
                int horizontalSide = (int) ((dy * ratio) + 0.5f);
                dimensions[0] = horizontalSide;
                dimensions[1] = dy;
                break;
            case 1:
                int verticalSide = (int) ((dx * ratio) + 0.5f);
                dimensions[0] = dx;
                dimensions[1] = verticalSide;
                break;
        }
    }

    /* renamed from: androidx.constraintlayout.core.widgets.analyzer.HorizontalWidgetRun$1, reason: invalid class name */
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
                updateRunCenter(dependency, this.mWidget.mLeft, this.mWidget.mRight, 0);
                return;
        }
        if (!this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT) {
            switch (this.mWidget.mMatchConstraintDefaultWidth) {
                case 2:
                    ConstraintWidget parent = this.mWidget.getParent();
                    if (parent != null && parent.mHorizontalRun.mDimension.resolved) {
                        float percent = this.mWidget.mMatchConstraintPercentWidth;
                        int targetDimensionValue = parent.mHorizontalRun.mDimension.value;
                        int size = (int) ((targetDimensionValue * percent) + 0.5f);
                        this.mDimension.resolve(size);
                        break;
                    }
                    break;
                case 3:
                    if (this.mWidget.mMatchConstraintDefaultHeight == 0 || this.mWidget.mMatchConstraintDefaultHeight == 3) {
                        DependencyNode secondStart = this.mWidget.mVerticalRun.start;
                        DependencyNode secondEnd = this.mWidget.mVerticalRun.end;
                        boolean s1 = this.mWidget.mLeft.mTarget != null;
                        boolean s2 = this.mWidget.mTop.mTarget != null;
                        boolean e1 = this.mWidget.mRight.mTarget != null;
                        boolean e2 = this.mWidget.mBottom.mTarget != null;
                        int definedSide = this.mWidget.getDimensionRatioSide();
                        if (s1 && s2 && e1 && e2) {
                            float ratio = this.mWidget.getDimensionRatio();
                            if (secondStart.resolved && secondEnd.resolved) {
                                if (!this.start.readyToSolve || !this.end.readyToSolve) {
                                    return;
                                }
                                computeInsetRatio(sTempDimensions, this.start.mTargets.get(0).value + this.start.mMargin, this.end.mTargets.get(0).value - this.end.mMargin, secondStart.value + secondStart.mMargin, secondEnd.value - secondEnd.mMargin, ratio, definedSide);
                                this.mDimension.resolve(sTempDimensions[0]);
                                this.mWidget.mVerticalRun.mDimension.resolve(sTempDimensions[1]);
                                return;
                            }
                            if (this.start.resolved && this.end.resolved) {
                                if (!secondStart.readyToSolve || !secondEnd.readyToSolve) {
                                    return;
                                }
                                computeInsetRatio(sTempDimensions, this.start.value + this.start.mMargin, this.end.value - this.end.mMargin, secondStart.mTargets.get(0).value + secondStart.mMargin, secondEnd.mTargets.get(0).value - secondEnd.mMargin, ratio, definedSide);
                                this.mDimension.resolve(sTempDimensions[0]);
                                this.mWidget.mVerticalRun.mDimension.resolve(sTempDimensions[1]);
                            }
                            if (!this.start.readyToSolve || !this.end.readyToSolve || !secondStart.readyToSolve || !secondEnd.readyToSolve) {
                                return;
                            }
                            computeInsetRatio(sTempDimensions, this.start.mTargets.get(0).value + this.start.mMargin, this.end.mTargets.get(0).value - this.end.mMargin, secondStart.mTargets.get(0).value + secondStart.mMargin, secondEnd.mTargets.get(0).value - secondEnd.mMargin, ratio, definedSide);
                            this.mDimension.resolve(sTempDimensions[0]);
                            this.mWidget.mVerticalRun.mDimension.resolve(sTempDimensions[1]);
                            break;
                        } else if (s1 && e1) {
                            if (!this.start.readyToSolve || !this.end.readyToSolve) {
                                return;
                            }
                            float ratio2 = this.mWidget.getDimensionRatio();
                            int x1 = this.start.mTargets.get(0).value + this.start.mMargin;
                            int x2 = this.end.mTargets.get(0).value - this.end.mMargin;
                            switch (definedSide) {
                                case -1:
                                case 0:
                                    int ldx = getLimitedDimension(x2 - x1, 0);
                                    int dy = (int) ((ldx * ratio2) + 0.5f);
                                    int ldy = getLimitedDimension(dy, 1);
                                    if (dy != ldy) {
                                        ldx = (int) ((ldy / ratio2) + 0.5f);
                                    }
                                    this.mDimension.resolve(ldx);
                                    this.mWidget.mVerticalRun.mDimension.resolve(ldy);
                                    break;
                                case 1:
                                    int ldx2 = getLimitedDimension(x2 - x1, 0);
                                    int dy2 = (int) ((ldx2 / ratio2) + 0.5f);
                                    int ldy2 = getLimitedDimension(dy2, 1);
                                    if (dy2 != ldy2) {
                                        ldx2 = (int) ((ldy2 * ratio2) + 0.5f);
                                    }
                                    this.mDimension.resolve(ldx2);
                                    this.mWidget.mVerticalRun.mDimension.resolve(ldy2);
                                    break;
                            }
                        } else if (s2 && e2) {
                            if (!secondStart.readyToSolve || !secondEnd.readyToSolve) {
                                return;
                            }
                            float ratio3 = this.mWidget.getDimensionRatio();
                            int y1 = secondStart.mTargets.get(0).value + secondStart.mMargin;
                            int y2 = secondEnd.mTargets.get(0).value - secondEnd.mMargin;
                            switch (definedSide) {
                                case -1:
                                case 1:
                                    int dy3 = y2 - y1;
                                    int ldy3 = getLimitedDimension(dy3, 1);
                                    int dx = (int) ((ldy3 / ratio3) + 0.5f);
                                    int ldx3 = getLimitedDimension(dx, 0);
                                    if (dx != ldx3) {
                                        ldy3 = (int) ((ldx3 * ratio3) + 0.5f);
                                    }
                                    this.mDimension.resolve(ldx3);
                                    this.mWidget.mVerticalRun.mDimension.resolve(ldy3);
                                    break;
                                case 0:
                                    int dy4 = y2 - y1;
                                    int ldy4 = getLimitedDimension(dy4, 1);
                                    int dx2 = (int) ((ldy4 * ratio3) + 0.5f);
                                    int ldx4 = getLimitedDimension(dx2, 0);
                                    if (dx2 != ldx4) {
                                        ldy4 = (int) ((ldx4 / ratio3) + 0.5f);
                                    }
                                    this.mDimension.resolve(ldx4);
                                    this.mWidget.mVerticalRun.mDimension.resolve(ldy4);
                                    break;
                            }
                        }
                    } else {
                        int size2 = 0;
                        int ratioSide = this.mWidget.getDimensionRatioSide();
                        switch (ratioSide) {
                            case -1:
                                size2 = (int) ((this.mWidget.mVerticalRun.mDimension.value * this.mWidget.getDimensionRatio()) + 0.5f);
                                break;
                            case 0:
                                size2 = (int) ((this.mWidget.mVerticalRun.mDimension.value / this.mWidget.getDimensionRatio()) + 0.5f);
                                break;
                            case 1:
                                size2 = (int) ((this.mWidget.mVerticalRun.mDimension.value * this.mWidget.getDimensionRatio()) + 0.5f);
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
        if (!this.mDimension.resolved && this.mDimensionBehavior == ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT && this.mWidget.mMatchConstraintDefaultWidth == 0 && !this.mWidget.isInHorizontalChain()) {
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
            int value = Math.min(availableSpace, this.mDimension.wrapValue);
            int max = this.mWidget.mMatchConstraintMaxWidth;
            int min = this.mWidget.mMatchConstraintMinWidth;
            int value2 = Math.max(min, value);
            if (max > 0) {
                value2 = Math.min(max, value2);
            }
            this.mDimension.resolve(value2);
        }
        if (!this.mDimension.resolved) {
            return;
        }
        DependencyNode startTarget3 = this.start.mTargets.get(0);
        DependencyNode endTarget3 = this.end.mTargets.get(0);
        int startPos3 = startTarget3.value + this.start.mMargin;
        int endPos3 = endTarget3.value + this.end.mMargin;
        float bias = this.mWidget.getHorizontalBiasPercent();
        if (startTarget3 == endTarget3) {
            startPos3 = startTarget3.value;
            endPos3 = endTarget3.value;
            bias = 0.5f;
        }
        int distance2 = (endPos3 - startPos3) - this.mDimension.value;
        this.start.resolve((int) (startPos3 + 0.5f + (distance2 * bias)));
        this.end.resolve(this.start.value + this.mDimension.value);
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    public void applyToWidget() {
        if (this.start.resolved) {
            this.mWidget.setX(this.start.value);
        }
    }
}
