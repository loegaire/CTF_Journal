package androidx.constraintlayout.core.dsl;

import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public class MotionScene {
    ArrayList<Transition> mTransitions = new ArrayList<>();
    ArrayList<ConstraintSet> mConstraintSets = new ArrayList<>();

    public void addTransition(Transition transition) {
        this.mTransitions.add(transition);
    }

    public void addConstraintSet(ConstraintSet constraintSet) {
        this.mConstraintSets.add(constraintSet);
    }

    public String toString() {
        StringBuilder ret = new StringBuilder("{\n");
        if (!this.mTransitions.isEmpty()) {
            ret.append("Transitions:{\n");
            Iterator<Transition> it = this.mTransitions.iterator();
            while (it.hasNext()) {
                Transition transition = it.next();
                ret.append(transition.toString());
            }
            ret.append("},\n");
        }
        if (!this.mConstraintSets.isEmpty()) {
            ret.append("ConstraintSets:{\n");
            Iterator<ConstraintSet> it2 = this.mConstraintSets.iterator();
            while (it2.hasNext()) {
                ConstraintSet constraintSet = it2.next();
                ret.append(constraintSet.toString());
            }
            ret.append("},\n");
        }
        ret.append("}\n");
        return ret.toString();
    }
}
