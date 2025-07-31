package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.ConstraintAnchor;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public class ChainRun extends WidgetRun {
    private int mChainStyle;
    ArrayList<WidgetRun> mWidgets;

    public ChainRun(ConstraintWidget widget, int orientation) {
        super(widget);
        this.mWidgets = new ArrayList<>();
        this.orientation = orientation;
        build();
    }

    public String toString() {
        StringBuilder log = new StringBuilder("ChainRun ");
        log.append(this.orientation == 0 ? "horizontal : " : "vertical : ");
        Iterator<WidgetRun> it = this.mWidgets.iterator();
        while (it.hasNext()) {
            WidgetRun run = it.next();
            log.append("<");
            log.append(run);
            log.append("> ");
        }
        return log.toString();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    boolean supportsWrapComputation() {
        int count = this.mWidgets.size();
        for (int i = 0; i < count; i++) {
            WidgetRun run = this.mWidgets.get(i);
            if (!run.supportsWrapComputation()) {
                return false;
            }
        }
        return true;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    public long getWrapDimension() {
        int count = this.mWidgets.size();
        long wrapDimension = 0;
        for (int i = 0; i < count; i++) {
            WidgetRun run = this.mWidgets.get(i);
            wrapDimension = wrapDimension + run.start.mMargin + run.getWrapDimension() + run.end.mMargin;
        }
        return wrapDimension;
    }

    private void build() {
        ConstraintWidget current = this.mWidget;
        ConstraintWidget previous = current.getPreviousChainMember(this.orientation);
        while (previous != null) {
            current = previous;
            previous = current.getPreviousChainMember(this.orientation);
        }
        this.mWidget = current;
        this.mWidgets.add(current.getRun(this.orientation));
        ConstraintWidget next = current.getNextChainMember(this.orientation);
        while (next != null) {
            ConstraintWidget current2 = next;
            this.mWidgets.add(current2.getRun(this.orientation));
            next = current2.getNextChainMember(this.orientation);
        }
        Iterator<WidgetRun> it = this.mWidgets.iterator();
        while (it.hasNext()) {
            WidgetRun run = it.next();
            if (this.orientation == 0) {
                run.mWidget.horizontalChainRun = this;
            } else if (this.orientation == 1) {
                run.mWidget.verticalChainRun = this;
            }
        }
        boolean isInRtl = this.orientation == 0 && ((ConstraintWidgetContainer) this.mWidget.getParent()).isRtl();
        if (isInRtl && this.mWidgets.size() > 1) {
            ArrayList<WidgetRun> arrayList = this.mWidgets;
            this.mWidget = arrayList.get(arrayList.size() - 1).mWidget;
        }
        this.mChainStyle = this.orientation == 0 ? this.mWidget.getHorizontalChainStyle() : this.mWidget.getVerticalChainStyle();
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void clear() {
        this.mRunGroup = null;
        Iterator<WidgetRun> it = this.mWidgets.iterator();
        while (it.hasNext()) {
            WidgetRun run = it.next();
            run.clear();
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void reset() {
        this.start.resolved = false;
        this.end.resolved = false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:294:0x0454, code lost:
    
        r6 = r6 - r15;
     */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00e4  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x00f7  */
    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun, androidx.constraintlayout.core.widgets.analyzer.Dependency
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void update(androidx.constraintlayout.core.widgets.analyzer.Dependency r28) {
        /*
            Method dump skipped, instructions count: 1161
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.constraintlayout.core.widgets.analyzer.ChainRun.update(androidx.constraintlayout.core.widgets.analyzer.Dependency):void");
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    public void applyToWidget() {
        for (int i = 0; i < this.mWidgets.size(); i++) {
            WidgetRun run = this.mWidgets.get(i);
            run.applyToWidget();
        }
    }

    private ConstraintWidget getFirstVisibleWidget() {
        for (int i = 0; i < this.mWidgets.size(); i++) {
            WidgetRun run = this.mWidgets.get(i);
            if (run.mWidget.getVisibility() != 8) {
                return run.mWidget;
            }
        }
        return null;
    }

    private ConstraintWidget getLastVisibleWidget() {
        for (int i = this.mWidgets.size() - 1; i >= 0; i--) {
            WidgetRun run = this.mWidgets.get(i);
            if (run.mWidget.getVisibility() != 8) {
                return run.mWidget;
            }
        }
        return null;
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.WidgetRun
    void apply() {
        Iterator<WidgetRun> it = this.mWidgets.iterator();
        while (it.hasNext()) {
            WidgetRun run = it.next();
            run.apply();
        }
        int count = this.mWidgets.size();
        if (count < 1) {
            return;
        }
        ConstraintWidget firstWidget = this.mWidgets.get(0).mWidget;
        ConstraintWidget lastWidget = this.mWidgets.get(count - 1).mWidget;
        if (this.orientation == 0) {
            ConstraintAnchor startAnchor = firstWidget.mLeft;
            ConstraintAnchor endAnchor = lastWidget.mRight;
            DependencyNode startTarget = getTarget(startAnchor, 0);
            int startMargin = startAnchor.getMargin();
            ConstraintWidget firstVisibleWidget = getFirstVisibleWidget();
            if (firstVisibleWidget != null) {
                startMargin = firstVisibleWidget.mLeft.getMargin();
            }
            if (startTarget != null) {
                addTarget(this.start, startTarget, startMargin);
            }
            DependencyNode endTarget = getTarget(endAnchor, 0);
            int endMargin = endAnchor.getMargin();
            ConstraintWidget lastVisibleWidget = getLastVisibleWidget();
            if (lastVisibleWidget != null) {
                endMargin = lastVisibleWidget.mRight.getMargin();
            }
            if (endTarget != null) {
                addTarget(this.end, endTarget, -endMargin);
            }
        } else {
            ConstraintAnchor startAnchor2 = firstWidget.mTop;
            ConstraintAnchor endAnchor2 = lastWidget.mBottom;
            DependencyNode startTarget2 = getTarget(startAnchor2, 1);
            int startMargin2 = startAnchor2.getMargin();
            ConstraintWidget firstVisibleWidget2 = getFirstVisibleWidget();
            if (firstVisibleWidget2 != null) {
                startMargin2 = firstVisibleWidget2.mTop.getMargin();
            }
            if (startTarget2 != null) {
                addTarget(this.start, startTarget2, startMargin2);
            }
            DependencyNode endTarget2 = getTarget(endAnchor2, 1);
            int endMargin2 = endAnchor2.getMargin();
            ConstraintWidget lastVisibleWidget2 = getLastVisibleWidget();
            if (lastVisibleWidget2 != null) {
                endMargin2 = lastVisibleWidget2.mBottom.getMargin();
            }
            if (endTarget2 != null) {
                addTarget(this.end, endTarget2, -endMargin2);
            }
        }
        this.start.updateDelegate = this;
        this.end.updateDelegate = this;
    }
}
