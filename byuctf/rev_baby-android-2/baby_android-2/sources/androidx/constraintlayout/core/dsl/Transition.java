package androidx.constraintlayout.core.dsl;

/* loaded from: classes.dex */
public class Transition {
    private String mConstraintSetEnd;
    private String mConstraintSetStart;
    private String mId;
    private OnSwipe mOnSwipe = null;
    final int UNSET = -1;
    private final int DEFAULT_DURATION = 400;
    private final float DEFAULT_STAGGER = 0.0f;
    private int mDefaultInterpolator = 0;
    private String mDefaultInterpolatorString = null;
    private int mDefaultInterpolatorID = -1;
    private int mDuration = 400;
    private float mStagger = 0.0f;
    private KeyFrames mKeyFrames = new KeyFrames();

    public void setOnSwipe(OnSwipe onSwipe) {
        this.mOnSwipe = onSwipe;
    }

    public void setKeyFrames(Keys keyFrames) {
        this.mKeyFrames.add(keyFrames);
    }

    public Transition(String from, String to) {
        this.mId = null;
        this.mConstraintSetEnd = null;
        this.mConstraintSetStart = null;
        this.mId = "default";
        this.mConstraintSetStart = from;
        this.mConstraintSetEnd = to;
    }

    public Transition(String id, String from, String to) {
        this.mId = null;
        this.mConstraintSetEnd = null;
        this.mConstraintSetStart = null;
        this.mId = id;
        this.mConstraintSetStart = from;
        this.mConstraintSetEnd = to;
    }

    String toJson() {
        return toString();
    }

    public void setId(String id) {
        this.mId = id;
    }

    public void setTo(String constraintSetEnd) {
        this.mConstraintSetEnd = constraintSetEnd;
    }

    public void setFrom(String constraintSetStart) {
        this.mConstraintSetStart = constraintSetStart;
    }

    public void setDuration(int duration) {
        this.mDuration = duration;
    }

    public void setStagger(float stagger) {
        this.mStagger = stagger;
    }

    public String toString() {
        String ret = this.mId + ":{\nfrom:'" + this.mConstraintSetStart + "',\nto:'" + this.mConstraintSetEnd + "',\n";
        if (this.mDuration != 400) {
            ret = ret + "duration:" + this.mDuration + ",\n";
        }
        if (this.mStagger != 0.0f) {
            ret = ret + "stagger:" + this.mStagger + ",\n";
        }
        if (this.mOnSwipe != null) {
            ret = ret + this.mOnSwipe.toString();
        }
        return (ret + this.mKeyFrames.toString()) + "},\n";
    }

    public String getId() {
        return this.mId;
    }
}
