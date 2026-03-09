package androidx.constraintlayout.core.state.helpers;

import androidx.constraintlayout.core.state.HelperReference;
import androidx.constraintlayout.core.state.State;
import androidx.constraintlayout.core.widgets.Flow;
import androidx.constraintlayout.core.widgets.HelperWidget;
import java.util.HashMap;

/* loaded from: classes.dex */
public class FlowReference extends HelperReference {
    protected float mFirstHorizontalBias;
    protected int mFirstHorizontalStyle;
    protected float mFirstVerticalBias;
    protected int mFirstVerticalStyle;
    protected Flow mFlow;
    protected int mHorizontalAlign;
    protected int mHorizontalGap;
    protected int mHorizontalStyle;
    protected float mLastHorizontalBias;
    protected int mLastHorizontalStyle;
    protected float mLastVerticalBias;
    protected int mLastVerticalStyle;
    protected HashMap<String, Float> mMapPostMargin;
    protected HashMap<String, Float> mMapPreMargin;
    protected HashMap<String, Float> mMapWeights;
    protected int mMaxElementsWrap;
    protected int mOrientation;
    protected int mPaddingBottom;
    protected int mPaddingLeft;
    protected int mPaddingRight;
    protected int mPaddingTop;
    protected int mVerticalAlign;
    protected int mVerticalGap;
    protected int mVerticalStyle;
    protected int mWrapMode;

    public FlowReference(State state, State.Helper type) {
        super(state, type);
        this.mWrapMode = 0;
        this.mVerticalStyle = -1;
        this.mFirstVerticalStyle = -1;
        this.mLastVerticalStyle = -1;
        this.mHorizontalStyle = -1;
        this.mFirstHorizontalStyle = -1;
        this.mLastHorizontalStyle = -1;
        this.mVerticalAlign = 2;
        this.mHorizontalAlign = 2;
        this.mVerticalGap = 0;
        this.mHorizontalGap = 0;
        this.mPaddingLeft = 0;
        this.mPaddingRight = 0;
        this.mPaddingTop = 0;
        this.mPaddingBottom = 0;
        this.mMaxElementsWrap = -1;
        this.mOrientation = 0;
        this.mFirstVerticalBias = 0.5f;
        this.mLastVerticalBias = 0.5f;
        this.mFirstHorizontalBias = 0.5f;
        this.mLastHorizontalBias = 0.5f;
        if (type == State.Helper.VERTICAL_FLOW) {
            this.mOrientation = 1;
        }
    }

    public void addFlowElement(String id, float weight, float preMargin, float postMargin) {
        super.add(id);
        if (!Float.isNaN(weight)) {
            if (this.mMapWeights == null) {
                this.mMapWeights = new HashMap<>();
            }
            this.mMapWeights.put(id, Float.valueOf(weight));
        }
        if (!Float.isNaN(preMargin)) {
            if (this.mMapPreMargin == null) {
                this.mMapPreMargin = new HashMap<>();
            }
            this.mMapPreMargin.put(id, Float.valueOf(preMargin));
        }
        if (!Float.isNaN(postMargin)) {
            if (this.mMapPostMargin == null) {
                this.mMapPostMargin = new HashMap<>();
            }
            this.mMapPostMargin.put(id, Float.valueOf(postMargin));
        }
    }

    protected float getWeight(String id) {
        HashMap<String, Float> hashMap = this.mMapWeights;
        if (hashMap != null && hashMap.containsKey(id)) {
            return this.mMapWeights.get(id).floatValue();
        }
        return -1.0f;
    }

    protected float getPostMargin(String id) {
        HashMap<String, Float> hashMap = this.mMapPreMargin;
        if (hashMap != null && hashMap.containsKey(id)) {
            return this.mMapPreMargin.get(id).floatValue();
        }
        return 0.0f;
    }

    protected float getPreMargin(String id) {
        HashMap<String, Float> hashMap = this.mMapPostMargin;
        if (hashMap != null && hashMap.containsKey(id)) {
            return this.mMapPostMargin.get(id).floatValue();
        }
        return 0.0f;
    }

    public int getWrapMode() {
        return this.mWrapMode;
    }

    public void setWrapMode(int wrap) {
        this.mWrapMode = wrap;
    }

    public int getPaddingLeft() {
        return this.mPaddingLeft;
    }

    public void setPaddingLeft(int padding) {
        this.mPaddingLeft = padding;
    }

    public int getPaddingTop() {
        return this.mPaddingTop;
    }

    public void setPaddingTop(int padding) {
        this.mPaddingTop = padding;
    }

    public int getPaddingRight() {
        return this.mPaddingRight;
    }

    public void setPaddingRight(int padding) {
        this.mPaddingRight = padding;
    }

    public int getPaddingBottom() {
        return this.mPaddingBottom;
    }

    public void setPaddingBottom(int padding) {
        this.mPaddingBottom = padding;
    }

    public int getVerticalStyle() {
        return this.mVerticalStyle;
    }

    public void setVerticalStyle(int verticalStyle) {
        this.mVerticalStyle = verticalStyle;
    }

    public int getFirstVerticalStyle() {
        return this.mFirstVerticalStyle;
    }

    public void setFirstVerticalStyle(int firstVerticalStyle) {
        this.mFirstVerticalStyle = firstVerticalStyle;
    }

    public int getLastVerticalStyle() {
        return this.mLastVerticalStyle;
    }

    public void setLastVerticalStyle(int lastVerticalStyle) {
        this.mLastVerticalStyle = lastVerticalStyle;
    }

    public int getHorizontalStyle() {
        return this.mHorizontalStyle;
    }

    public void setHorizontalStyle(int horizontalStyle) {
        this.mHorizontalStyle = horizontalStyle;
    }

    public int getFirstHorizontalStyle() {
        return this.mFirstHorizontalStyle;
    }

    public void setFirstHorizontalStyle(int firstHorizontalStyle) {
        this.mFirstHorizontalStyle = firstHorizontalStyle;
    }

    public int getLastHorizontalStyle() {
        return this.mLastHorizontalStyle;
    }

    public void setLastHorizontalStyle(int lastHorizontalStyle) {
        this.mLastHorizontalStyle = lastHorizontalStyle;
    }

    public int getVerticalAlign() {
        return this.mVerticalAlign;
    }

    public void setVerticalAlign(int verticalAlign) {
        this.mVerticalAlign = verticalAlign;
    }

    public int getHorizontalAlign() {
        return this.mHorizontalAlign;
    }

    public void setHorizontalAlign(int horizontalAlign) {
        this.mHorizontalAlign = horizontalAlign;
    }

    public int getVerticalGap() {
        return this.mVerticalGap;
    }

    public void setVerticalGap(int verticalGap) {
        this.mVerticalGap = verticalGap;
    }

    public int getHorizontalGap() {
        return this.mHorizontalGap;
    }

    public void setHorizontalGap(int horizontalGap) {
        this.mHorizontalGap = horizontalGap;
    }

    public int getMaxElementsWrap() {
        return this.mMaxElementsWrap;
    }

    public void setMaxElementsWrap(int maxElementsWrap) {
        this.mMaxElementsWrap = maxElementsWrap;
    }

    public int getOrientation() {
        return this.mOrientation;
    }

    public void setOrientation(int mOrientation) {
        this.mOrientation = mOrientation;
    }

    public float getVerticalBias() {
        return this.mVerticalBias;
    }

    public float getFirstVerticalBias() {
        return this.mFirstVerticalBias;
    }

    public void setFirstVerticalBias(float firstVerticalBias) {
        this.mFirstVerticalBias = firstVerticalBias;
    }

    public float getLastVerticalBias() {
        return this.mLastVerticalBias;
    }

    public void setLastVerticalBias(float lastVerticalBias) {
        this.mLastVerticalBias = lastVerticalBias;
    }

    public float getHorizontalBias() {
        return this.mHorizontalBias;
    }

    public float getFirstHorizontalBias() {
        return this.mFirstHorizontalBias;
    }

    public void setFirstHorizontalBias(float firstHorizontalBias) {
        this.mFirstHorizontalBias = firstHorizontalBias;
    }

    public float getLastHorizontalBias() {
        return this.mLastHorizontalBias;
    }

    public void setLastHorizontalBias(float lastHorizontalBias) {
        this.mLastHorizontalBias = lastHorizontalBias;
    }

    @Override // androidx.constraintlayout.core.state.HelperReference
    public HelperWidget getHelperWidget() {
        if (this.mFlow == null) {
            this.mFlow = new Flow();
        }
        return this.mFlow;
    }

    @Override // androidx.constraintlayout.core.state.HelperReference
    public void setHelperWidget(HelperWidget widget) {
        if (widget instanceof Flow) {
            this.mFlow = (Flow) widget;
        } else {
            this.mFlow = null;
        }
    }

    @Override // androidx.constraintlayout.core.state.HelperReference, androidx.constraintlayout.core.state.ConstraintReference, androidx.constraintlayout.core.state.Reference
    public void apply() {
        getHelperWidget();
        setConstraintWidget(this.mFlow);
        this.mFlow.setOrientation(this.mOrientation);
        this.mFlow.setWrapMode(this.mWrapMode);
        int i = this.mMaxElementsWrap;
        if (i != -1) {
            this.mFlow.setMaxElementsWrap(i);
        }
        int i2 = this.mPaddingLeft;
        if (i2 != 0) {
            this.mFlow.setPaddingLeft(i2);
        }
        int i3 = this.mPaddingTop;
        if (i3 != 0) {
            this.mFlow.setPaddingTop(i3);
        }
        int i4 = this.mPaddingRight;
        if (i4 != 0) {
            this.mFlow.setPaddingRight(i4);
        }
        int i5 = this.mPaddingBottom;
        if (i5 != 0) {
            this.mFlow.setPaddingBottom(i5);
        }
        int i6 = this.mHorizontalGap;
        if (i6 != 0) {
            this.mFlow.setHorizontalGap(i6);
        }
        int i7 = this.mVerticalGap;
        if (i7 != 0) {
            this.mFlow.setVerticalGap(i7);
        }
        if (this.mHorizontalBias != 0.5f) {
            this.mFlow.setHorizontalBias(this.mHorizontalBias);
        }
        float f = this.mFirstHorizontalBias;
        if (f != 0.5f) {
            this.mFlow.setFirstHorizontalBias(f);
        }
        float f2 = this.mLastHorizontalBias;
        if (f2 != 0.5f) {
            this.mFlow.setLastHorizontalBias(f2);
        }
        if (this.mVerticalBias != 0.5f) {
            this.mFlow.setVerticalBias(this.mVerticalBias);
        }
        float f3 = this.mFirstVerticalBias;
        if (f3 != 0.5f) {
            this.mFlow.setFirstVerticalBias(f3);
        }
        float f4 = this.mLastVerticalBias;
        if (f4 != 0.5f) {
            this.mFlow.setLastVerticalBias(f4);
        }
        int i8 = this.mHorizontalAlign;
        if (i8 != 2) {
            this.mFlow.setHorizontalAlign(i8);
        }
        int i9 = this.mVerticalAlign;
        if (i9 != 2) {
            this.mFlow.setVerticalAlign(i9);
        }
        int i10 = this.mVerticalStyle;
        if (i10 != -1) {
            this.mFlow.setVerticalStyle(i10);
        }
        int i11 = this.mFirstVerticalStyle;
        if (i11 != -1) {
            this.mFlow.setFirstVerticalStyle(i11);
        }
        int i12 = this.mLastVerticalStyle;
        if (i12 != -1) {
            this.mFlow.setLastVerticalStyle(i12);
        }
        int i13 = this.mHorizontalStyle;
        if (i13 != -1) {
            this.mFlow.setHorizontalStyle(i13);
        }
        int i14 = this.mFirstHorizontalStyle;
        if (i14 != -1) {
            this.mFlow.setFirstHorizontalStyle(i14);
        }
        int i15 = this.mLastHorizontalStyle;
        if (i15 != -1) {
            this.mFlow.setLastHorizontalStyle(i15);
        }
        applyBase();
    }
}
