package androidx.constraintlayout.core.state.helpers;

import androidx.constraintlayout.core.state.ConstraintReference;
import androidx.constraintlayout.core.state.State;
import java.util.Iterator;

/* loaded from: classes.dex */
public class VerticalChainReference extends ChainReference {
    public VerticalChainReference(State state) {
        super(state, State.Helper.VERTICAL_CHAIN);
    }

    @Override // androidx.constraintlayout.core.state.HelperReference, androidx.constraintlayout.core.state.ConstraintReference, androidx.constraintlayout.core.state.Reference
    public void apply() {
        ConstraintReference first = null;
        ConstraintReference previous = null;
        Iterator<Object> it = this.mReferences.iterator();
        while (it.hasNext()) {
            this.mHelperState.constraints(it.next()).clearVertical();
        }
        Iterator<Object> it2 = this.mReferences.iterator();
        while (it2.hasNext()) {
            Object key = it2.next();
            ConstraintReference reference = this.mHelperState.constraints(key);
            if (first == null) {
                first = reference;
                if (this.mTopToTop != null) {
                    first.topToTop(this.mTopToTop).margin(this.mMarginTop).marginGone(this.mMarginTopGone);
                } else if (this.mTopToBottom != null) {
                    first.topToBottom(this.mTopToBottom).margin(this.mMarginTop).marginGone(this.mMarginTopGone);
                } else {
                    String refKey = reference.getKey().toString();
                    first.topToTop(State.PARENT).margin(Float.valueOf(getPreMargin(refKey))).marginGone(Float.valueOf(getPreGoneMargin(refKey)));
                }
            }
            if (previous != null) {
                String preKey = previous.getKey().toString();
                String refKey2 = reference.getKey().toString();
                previous.bottomToTop(reference.getKey()).margin(Float.valueOf(getPostMargin(preKey))).marginGone(Float.valueOf(getPostGoneMargin(preKey)));
                reference.topToBottom(previous.getKey()).margin(Float.valueOf(getPreMargin(refKey2))).marginGone(Float.valueOf(getPreGoneMargin(refKey2)));
            }
            float weight = getWeight(key.toString());
            if (weight != -1.0f) {
                reference.setVerticalChainWeight(weight);
            }
            previous = reference;
        }
        if (previous != null) {
            if (this.mBottomToTop != null) {
                previous.bottomToTop(this.mBottomToTop).margin(this.mMarginBottom).marginGone(this.mMarginBottomGone);
            } else if (this.mBottomToBottom != null) {
                previous.bottomToBottom(this.mBottomToBottom).margin(this.mMarginBottom).marginGone(this.mMarginBottomGone);
            } else {
                String preKey2 = previous.getKey().toString();
                previous.bottomToBottom(State.PARENT).margin(Float.valueOf(getPostMargin(preKey2))).marginGone(Float.valueOf(getPostGoneMargin(preKey2)));
            }
        }
        if (first == null) {
        }
        if (this.mBias != 0.5f) {
            first.verticalBias(this.mBias);
        }
        switch (AnonymousClass1.$SwitchMap$androidx$constraintlayout$core$state$State$Chain[this.mStyle.ordinal()]) {
            case 1:
                first.setVerticalChainStyle(0);
                break;
            case 2:
                first.setVerticalChainStyle(1);
                break;
            case 3:
                first.setVerticalChainStyle(2);
                break;
        }
    }

    /* renamed from: androidx.constraintlayout.core.state.helpers.VerticalChainReference$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$androidx$constraintlayout$core$state$State$Chain;

        static {
            int[] iArr = new int[State.Chain.values().length];
            $SwitchMap$androidx$constraintlayout$core$state$State$Chain = iArr;
            try {
                iArr[State.Chain.SPREAD.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$state$State$Chain[State.Chain.SPREAD_INSIDE.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$androidx$constraintlayout$core$state$State$Chain[State.Chain.PACKED.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }
}
