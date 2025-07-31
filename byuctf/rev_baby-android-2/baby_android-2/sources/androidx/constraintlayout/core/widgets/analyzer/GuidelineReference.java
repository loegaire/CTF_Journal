package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.Guideline;

/* loaded from: classes.dex */
class GuidelineReference extends WidgetRun {
    GuidelineReference(ConstraintWidget widget) {
        super(widget);
        widget.mHorizontalRun.clear();
        widget.mVerticalRun.clear();
        this.orientation = ((Guideline) widget).getOrientation();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void clear() {
        this.start.clear();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void reset() {
        this.start.resolved = false;
        this.end.resolved = false;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    boolean supportsWrapComputation() {
        return false;
    }

    private void addDependency(DependencyNode node) {
        this.start.mDependencies.add(node);
        node.mTargets.add(this.start);
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun, androidx.constraintlayout.core.widgets.analyzer.Dependency
    public void update(Dependency dependency) {
        if (!this.start.readyToSolve || this.start.resolved) {
            return;
        }
        DependencyNode startTarget = this.start.mTargets.get(0);
        Guideline guideline = (Guideline) this.mWidget;
        int startPos = (int) ((startTarget.value * guideline.getRelativePercent()) + 0.5f);
        this.start.resolve(startPos);
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void apply() {
        Guideline guideline = (Guideline) this.mWidget;
        int relativeBegin = guideline.getRelativeBegin();
        int relativeEnd = guideline.getRelativeEnd();
        guideline.getRelativePercent();
        if (guideline.getOrientation() == 1) {
            if (relativeBegin != -1) {
                this.start.mTargets.add(this.mWidget.mParent.mHorizontalRun.start);
                this.mWidget.mParent.mHorizontalRun.start.mDependencies.add(this.start);
                this.start.mMargin = relativeBegin;
            } else if (relativeEnd != -1) {
                this.start.mTargets.add(this.mWidget.mParent.mHorizontalRun.end);
                this.mWidget.mParent.mHorizontalRun.end.mDependencies.add(this.start);
                this.start.mMargin = -relativeEnd;
            } else {
                this.start.delegateToWidgetRun = true;
                this.start.mTargets.add(this.mWidget.mParent.mHorizontalRun.end);
                this.mWidget.mParent.mHorizontalRun.end.mDependencies.add(this.start);
            }
            addDependency(this.mWidget.mHorizontalRun.start);
            addDependency(this.mWidget.mHorizontalRun.end);
            return;
        }
        if (relativeBegin != -1) {
            this.start.mTargets.add(this.mWidget.mParent.mVerticalRun.start);
            this.mWidget.mParent.mVerticalRun.start.mDependencies.add(this.start);
            this.start.mMargin = relativeBegin;
        } else if (relativeEnd != -1) {
            this.start.mTargets.add(this.mWidget.mParent.mVerticalRun.end);
            this.mWidget.mParent.mVerticalRun.end.mDependencies.add(this.start);
            this.start.mMargin = -relativeEnd;
        } else {
            this.start.delegateToWidgetRun = true;
            this.start.mTargets.add(this.mWidget.mParent.mVerticalRun.end);
            this.mWidget.mParent.mVerticalRun.end.mDependencies.add(this.start);
        }
        addDependency(this.mWidget.mVerticalRun.start);
        addDependency(this.mWidget.mVerticalRun.end);
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    public void applyToWidget() {
        Guideline guideline = (Guideline) this.mWidget;
        if (guideline.getOrientation() == 1) {
            this.mWidget.setX(this.start.value);
        } else {
            this.mWidget.setY(this.start.value);
        }
    }
}
