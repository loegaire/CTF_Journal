package androidx.constraintlayout.core.widgets.analyzer;

import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public class DependencyNode implements Dependency {
    int mMargin;
    WidgetRun mRun;
    public int value;
    public Dependency updateDelegate = null;
    public boolean delegateToWidgetRun = false;
    public boolean readyToSolve = false;
    Type mType = Type.UNKNOWN;
    int mMarginFactor = 1;
    DimensionDependency mMarginDependency = null;
    public boolean resolved = false;
    List<Dependency> mDependencies = new ArrayList();
    List<DependencyNode> mTargets = new ArrayList();

    enum Type {
        UNKNOWN,
        HORIZONTAL_DIMENSION,
        VERTICAL_DIMENSION,
        LEFT,
        RIGHT,
        TOP,
        BOTTOM,
        BASELINE
    }

    public DependencyNode(WidgetRun run) {
        this.mRun = run;
    }

    public String toString() {
        return this.mRun.mWidget.getDebugName() + ":" + this.mType + "(" + (this.resolved ? Integer.valueOf(this.value) : "unresolved") + ") <t=" + this.mTargets.size() + ":d=" + this.mDependencies.size() + ">";
    }

    public void resolve(int value) {
        if (this.resolved) {
            return;
        }
        this.resolved = true;
        this.value = value;
        for (Dependency node : this.mDependencies) {
            node.update(node);
        }
    }

    @Override // androidx.constraintlayout.core.widgets.analyzer.Dependency
    public void update(Dependency node) {
        for (DependencyNode target : this.mTargets) {
            if (!target.resolved) {
                return;
            }
        }
        this.readyToSolve = true;
        Dependency dependency = this.updateDelegate;
        if (dependency != null) {
            dependency.update(this);
        }
        if (this.delegateToWidgetRun) {
            this.mRun.update(this);
            return;
        }
        DependencyNode target2 = null;
        int numTargets = 0;
        for (DependencyNode t : this.mTargets) {
            if (!(t instanceof DimensionDependency)) {
                target2 = t;
                numTargets++;
            }
        }
        if (target2 != null && numTargets == 1 && target2.resolved) {
            DimensionDependency dimensionDependency = this.mMarginDependency;
            if (dimensionDependency != null) {
                if (dimensionDependency.resolved) {
                    this.mMargin = this.mMarginFactor * this.mMarginDependency.value;
                } else {
                    return;
                }
            }
            resolve(target2.value + this.mMargin);
        }
        Dependency dependency2 = this.updateDelegate;
        if (dependency2 != null) {
            dependency2.update(this);
        }
    }

    public void addDependency(Dependency dependency) {
        this.mDependencies.add(dependency);
        if (this.resolved) {
            dependency.update(dependency);
        }
    }

    public String name() {
        String definition;
        String definition2 = this.mRun.mWidget.getDebugName();
        if (this.mType == Type.LEFT || this.mType == Type.RIGHT) {
            definition = definition2 + "_HORIZONTAL";
        } else {
            definition = definition2 + "_VERTICAL";
        }
        return definition + ":" + this.mType.name();
    }

    public void clear() {
        this.mTargets.clear();
        this.mDependencies.clear();
        this.resolved = false;
        this.value = 0;
        this.readyToSolve = false;
        this.delegateToWidgetRun = false;
    }
}
