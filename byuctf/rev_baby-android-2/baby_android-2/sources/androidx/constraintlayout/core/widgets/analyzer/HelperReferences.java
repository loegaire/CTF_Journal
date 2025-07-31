package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.Barrier;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.analyzer.DependencyNode;

/* loaded from: classes.dex */
class HelperReferences extends WidgetRun {
    HelperReferences(ConstraintWidget widget) {
        super(widget);
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void clear() {
        this.mRunGroup = null;
        this.start.clear();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void reset() {
        this.start.resolved = false;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    boolean supportsWrapComputation() {
        return false;
    }

    private void addDependency(DependencyNode node) {
        this.start.mDependencies.add(node);
        node.mTargets.add(this.start);
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void apply() {
        if (this.mWidget instanceof Barrier) {
            this.start.delegateToWidgetRun = true;
            Barrier barrier = (Barrier) this.mWidget;
            int type = barrier.getBarrierType();
            boolean allowsGoneWidget = barrier.getAllowsGoneWidget();
            switch (type) {
                case 0:
                    this.start.mType = DependencyNode.Type.LEFT;
                    for (int i = 0; i < barrier.mWidgetsCount; i++) {
                        ConstraintWidget refWidget = barrier.mWidgets[i];
                        if (allowsGoneWidget || refWidget.getVisibility() != 8) {
                            DependencyNode target = refWidget.mHorizontalRun.start;
                            target.mDependencies.add(this.start);
                            this.start.mTargets.add(target);
                        }
                    }
                    addDependency(this.mWidget.mHorizontalRun.start);
                    addDependency(this.mWidget.mHorizontalRun.end);
                    break;
                case 1:
                    this.start.mType = DependencyNode.Type.RIGHT;
                    for (int i2 = 0; i2 < barrier.mWidgetsCount; i2++) {
                        ConstraintWidget refWidget2 = barrier.mWidgets[i2];
                        if (allowsGoneWidget || refWidget2.getVisibility() != 8) {
                            DependencyNode target2 = refWidget2.mHorizontalRun.end;
                            target2.mDependencies.add(this.start);
                            this.start.mTargets.add(target2);
                        }
                    }
                    addDependency(this.mWidget.mHorizontalRun.start);
                    addDependency(this.mWidget.mHorizontalRun.end);
                    break;
                case 2:
                    this.start.mType = DependencyNode.Type.TOP;
                    for (int i3 = 0; i3 < barrier.mWidgetsCount; i3++) {
                        ConstraintWidget refwidget = barrier.mWidgets[i3];
                        if (allowsGoneWidget || refwidget.getVisibility() != 8) {
                            DependencyNode target3 = refwidget.mVerticalRun.start;
                            target3.mDependencies.add(this.start);
                            this.start.mTargets.add(target3);
                        }
                    }
                    addDependency(this.mWidget.mVerticalRun.start);
                    addDependency(this.mWidget.mVerticalRun.end);
                    break;
                case 3:
                    this.start.mType = DependencyNode.Type.BOTTOM;
                    for (int i4 = 0; i4 < barrier.mWidgetsCount; i4++) {
                        ConstraintWidget refwidget2 = barrier.mWidgets[i4];
                        if (allowsGoneWidget || refwidget2.getVisibility() != 8) {
                            DependencyNode target4 = refwidget2.mVerticalRun.end;
                            target4.mDependencies.add(this.start);
                            this.start.mTargets.add(target4);
                        }
                    }
                    addDependency(this.mWidget.mVerticalRun.start);
                    addDependency(this.mWidget.mVerticalRun.end);
                    break;
            }
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun, androidx.constraintlayout.core.widgets.analyzer.Dependency
    public void update(Dependency dependency) {
        Barrier barrier = (Barrier) this.mWidget;
        int type = barrier.getBarrierType();
        int min = -1;
        int max = 0;
        for (DependencyNode node : this.start.mTargets) {
            int value = node.value;
            if (min == -1 || value < min) {
                min = value;
            }
            if (max < value) {
                max = value;
            }
        }
        if (type == 0 || type == 2) {
            this.start.resolve(barrier.getMargin() + min);
        } else {
            this.start.resolve(barrier.getMargin() + max);
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    public void applyToWidget() {
        if (this.mWidget instanceof Barrier) {
            Barrier barrier = (Barrier) this.mWidget;
            int type = barrier.getBarrierType();
            if (type == 0 || type == 1) {
                this.mWidget.setX(this.start.value);
            } else {
                this.mWidget.setY(this.start.value);
            }
        }
    }
}
