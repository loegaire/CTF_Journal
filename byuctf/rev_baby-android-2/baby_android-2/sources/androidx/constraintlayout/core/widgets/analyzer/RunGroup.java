package androidx.constraintlayout.core.widgets.analyzer;

import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
class RunGroup {
    public static final int BASELINE = 2;
    public static final int END = 1;
    public static final int START = 0;
    public static int index;
    int mDirection;
    WidgetRun mFirstRun;
    int mGroupIndex;
    WidgetRun mLastRun;
    public int position = 0;
    public boolean dual = false;
    ArrayList<WidgetRun> mRuns = new ArrayList<>();

    RunGroup(WidgetRun run, int dir) {
        this.mFirstRun = null;
        this.mLastRun = null;
        this.mGroupIndex = 0;
        int i = index;
        this.mGroupIndex = i;
        index = i + 1;
        this.mFirstRun = run;
        this.mLastRun = run;
        this.mDirection = dir;
    }

    public void add(WidgetRun run) {
        this.mRuns.add(run);
        this.mLastRun = run;
    }

    private long traverseStart(DependencyNode node, long startPosition) {
        WidgetRun run = node.mRun;
        if (run instanceof HelperReferences) {
            return startPosition;
        }
        long position = startPosition;
        int count = node.mDependencies.size();
        for (int i = 0; i < count; i++) {
            Dependency dependency = node.mDependencies.get(i);
            if (dependency instanceof DependencyNode) {
                DependencyNode nextNode = (DependencyNode) dependency;
                if (nextNode.mRun != run) {
                    position = Math.max(position, traverseStart(nextNode, nextNode.mMargin + startPosition));
                }
            }
        }
        if (node == run.start) {
            long dimension = run.getWrapDimension();
            return Math.max(Math.max(position, traverseStart(run.end, startPosition + dimension)), (startPosition + dimension) - run.end.mMargin);
        }
        return position;
    }

    private long traverseEnd(DependencyNode node, long startPosition) {
        WidgetRun run = node.mRun;
        if (run instanceof HelperReferences) {
            return startPosition;
        }
        long position = startPosition;
        int count = node.mDependencies.size();
        for (int i = 0; i < count; i++) {
            Dependency dependency = node.mDependencies.get(i);
            if (dependency instanceof DependencyNode) {
                DependencyNode nextNode = (DependencyNode) dependency;
                if (nextNode.mRun != run) {
                    position = Math.min(position, traverseEnd(nextNode, nextNode.mMargin + startPosition));
                }
            }
        }
        if (node == run.end) {
            long dimension = run.getWrapDimension();
            return Math.min(Math.min(position, traverseEnd(run.start, startPosition - dimension)), (startPosition - dimension) - run.start.mMargin);
        }
        return position;
    }

    public long computeWrapSize(ConstraintWidgetContainer container, int orientation) {
        long gap;
        WidgetRun widgetRun = this.mFirstRun;
        if (widgetRun instanceof ChainRun) {
            ChainRun chainRun = (ChainRun) widgetRun;
            if (chainRun.orientation != orientation) {
                return 0L;
            }
        } else if (orientation == 0) {
            if (!(widgetRun instanceof HorizontalWidgetRun)) {
                return 0L;
            }
        } else if (!(widgetRun instanceof VerticalWidgetRun)) {
            return 0L;
        }
        DependencyNode containerStart = orientation == 0 ? container.mHorizontalRun.start : container.mVerticalRun.start;
        DependencyNode containerEnd = orientation == 0 ? container.mHorizontalRun.end : container.mVerticalRun.end;
        boolean runWithStartTarget = this.mFirstRun.start.mTargets.contains(containerStart);
        boolean runWithEndTarget = this.mFirstRun.end.mTargets.contains(containerEnd);
        long dimension = this.mFirstRun.getWrapDimension();
        if (runWithStartTarget && runWithEndTarget) {
            long maxPosition = traverseStart(this.mFirstRun.start, 0L);
            long minPosition = traverseEnd(this.mFirstRun.end, 0L);
            long endGap = maxPosition - dimension;
            if (endGap >= (-this.mFirstRun.end.mMargin)) {
                endGap += this.mFirstRun.end.mMargin;
            }
            long j = (-minPosition) - dimension;
            long minPosition2 = this.mFirstRun.start.mMargin;
            long startGap = j - minPosition2;
            if (startGap >= this.mFirstRun.start.mMargin) {
                startGap -= this.mFirstRun.start.mMargin;
            }
            float bias = this.mFirstRun.mWidget.getBiasPercent(orientation);
            if (bias <= 0.0f) {
                gap = 0;
            } else {
                gap = (long) ((startGap / bias) + (endGap / (1.0f - bias)));
            }
            long runDimension = ((long) ((gap * bias) + 0.5f)) + dimension + ((long) ((gap * (1.0f - bias)) + 0.5f));
            long gap2 = this.mFirstRun.start.mMargin;
            return (gap2 + runDimension) - this.mFirstRun.end.mMargin;
        }
        if (runWithStartTarget) {
            long maxPosition2 = traverseStart(this.mFirstRun.start, this.mFirstRun.start.mMargin);
            long runDimension2 = this.mFirstRun.start.mMargin + dimension;
            return Math.max(maxPosition2, runDimension2);
        }
        if (runWithEndTarget) {
            long minPosition3 = traverseEnd(this.mFirstRun.end, this.mFirstRun.end.mMargin);
            long runDimension3 = (-this.mFirstRun.end.mMargin) + dimension;
            return Math.max(-minPosition3, runDimension3);
        }
        return (this.mFirstRun.start.mMargin + this.mFirstRun.getWrapDimension()) - this.mFirstRun.end.mMargin;
    }

    private boolean defineTerminalWidget(WidgetRun run, int orientation) {
        if (!run.mWidget.isTerminalWidget[orientation]) {
            return false;
        }
        for (Dependency dependency : run.start.mDependencies) {
            if (dependency instanceof DependencyNode) {
                DependencyNode node = (DependencyNode) dependency;
                if (node.mRun != run && node == node.mRun.start) {
                    if (run instanceof ChainRun) {
                        ChainRun chainRun = (ChainRun) run;
                        Iterator<WidgetRun> it = chainRun.mWidgets.iterator();
                        while (it.hasNext()) {
                            WidgetRun widgetChainRun = it.next();
                            defineTerminalWidget(widgetChainRun, orientation);
                        }
                    } else if (!(run instanceof HelperReferences)) {
                        run.mWidget.isTerminalWidget[orientation] = false;
                    }
                    defineTerminalWidget(node.mRun, orientation);
                }
            }
        }
        for (Dependency dependency2 : run.end.mDependencies) {
            if (dependency2 instanceof DependencyNode) {
                DependencyNode node2 = (DependencyNode) dependency2;
                if (node2.mRun != run && node2 == node2.mRun.start) {
                    if (run instanceof ChainRun) {
                        ChainRun chainRun2 = (ChainRun) run;
                        Iterator<WidgetRun> it2 = chainRun2.mWidgets.iterator();
                        while (it2.hasNext()) {
                            WidgetRun widgetChainRun2 = it2.next();
                            defineTerminalWidget(widgetChainRun2, orientation);
                        }
                    } else if (!(run instanceof HelperReferences)) {
                        run.mWidget.isTerminalWidget[orientation] = false;
                    }
                    defineTerminalWidget(node2.mRun, orientation);
                }
            }
        }
        return false;
    }

    public void defineTerminalWidgets(boolean horizontalCheck, boolean verticalCheck) {
        if (horizontalCheck) {
            WidgetRun widgetRun = this.mFirstRun;
            if (widgetRun instanceof HorizontalWidgetRun) {
                defineTerminalWidget(widgetRun, 0);
            }
        }
        if (verticalCheck) {
            WidgetRun widgetRun2 = this.mFirstRun;
            if (widgetRun2 instanceof VerticalWidgetRun) {
                defineTerminalWidget(widgetRun2, 1);
            }
        }
    }
}
