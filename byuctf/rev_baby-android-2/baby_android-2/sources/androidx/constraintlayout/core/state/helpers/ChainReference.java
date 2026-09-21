package androidx.constraintlayout.core.state.helpers;

import androidx.constraintlayout.core.state.HelperReference;
import androidx.constraintlayout.core.state.State;
import java.util.HashMap;

/* loaded from: classes.dex */
public class ChainReference extends HelperReference {
    protected float mBias;
    private HashMap<String, Float> mMapPostGoneMargin;

    @Deprecated
    protected HashMap<String, Float> mMapPostMargin;
    private HashMap<String, Float> mMapPreGoneMargin;

    @Deprecated
    protected HashMap<String, Float> mMapPreMargin;

    @Deprecated
    protected HashMap<String, Float> mMapWeights;
    protected State.Chain mStyle;

    public ChainReference(State state, State.Helper type) {
        super(state, type);
        this.mBias = 0.5f;
        this.mMapWeights = new HashMap<>();
        this.mMapPreMargin = new HashMap<>();
        this.mMapPostMargin = new HashMap<>();
        this.mStyle = State.Chain.SPREAD;
    }

    public State.Chain getStyle() {
        return State.Chain.SPREAD;
    }

    public ChainReference style(State.Chain style) {
        this.mStyle = style;
        return this;
    }

    public void addChainElement(String id, float weight, float preMargin, float postMargin) {
        addChainElement(id, weight, preMargin, postMargin, 0.0f, 0.0f);
    }

    public void addChainElement(Object id, float weight, float preMargin, float postMargin, float preGoneMargin, float postGoneMargin) {
        super.add(id);
        String idString = id.toString();
        if (!Float.isNaN(weight)) {
            this.mMapWeights.put(idString, Float.valueOf(weight));
        }
        if (!Float.isNaN(preMargin)) {
            this.mMapPreMargin.put(idString, Float.valueOf(preMargin));
        }
        if (!Float.isNaN(postMargin)) {
            this.mMapPostMargin.put(idString, Float.valueOf(postMargin));
        }
        if (!Float.isNaN(preGoneMargin)) {
            if (this.mMapPreGoneMargin == null) {
                this.mMapPreGoneMargin = new HashMap<>();
            }
            this.mMapPreGoneMargin.put(idString, Float.valueOf(preGoneMargin));
        }
        if (!Float.isNaN(postGoneMargin)) {
            if (this.mMapPostGoneMargin == null) {
                this.mMapPostGoneMargin = new HashMap<>();
            }
            this.mMapPostGoneMargin.put(idString, Float.valueOf(postGoneMargin));
        }
    }

    protected float getWeight(String id) {
        if (this.mMapWeights.containsKey(id)) {
            return this.mMapWeights.get(id).floatValue();
        }
        return -1.0f;
    }

    protected float getPostMargin(String id) {
        if (this.mMapPostMargin.containsKey(id)) {
            return this.mMapPostMargin.get(id).floatValue();
        }
        return 0.0f;
    }

    protected float getPreMargin(String id) {
        if (this.mMapPreMargin.containsKey(id)) {
            return this.mMapPreMargin.get(id).floatValue();
        }
        return 0.0f;
    }

    float getPostGoneMargin(String id) {
        HashMap<String, Float> hashMap = this.mMapPostGoneMargin;
        if (hashMap != null && hashMap.containsKey(id)) {
            return this.mMapPostGoneMargin.get(id).floatValue();
        }
        return 0.0f;
    }

    float getPreGoneMargin(String id) {
        HashMap<String, Float> hashMap = this.mMapPreGoneMargin;
        if (hashMap != null && hashMap.containsKey(id)) {
            return this.mMapPreGoneMargin.get(id).floatValue();
        }
        return 0.0f;
    }

    public float getBias() {
        return this.mBias;
    }

    @Override // androidx.constraintlayout.core.state.ConstraintReference
    public ChainReference bias(float bias) {
        this.mBias = bias;
        return this;
    }
}
