package androidx.constraintlayout.core.dsl;

/* loaded from: classes.dex */
public class OnSwipe {
    public static final int FLAG_DISABLE_POST_SCROLL = 1;
    public static final int FLAG_DISABLE_SCROLL = 2;
    private Mode mAutoCompleteMode;
    private Drag mDragDirection;
    private float mDragScale;
    private float mDragThreshold;
    private String mLimitBoundsTo;
    private float mMaxAcceleration;
    private float mMaxVelocity;
    private TouchUp mOnTouchUp;
    private String mRotationCenterId;
    private Boundary mSpringBoundary;
    private float mSpringDamping;
    private float mSpringMass;
    private float mSpringStiffness;
    private float mSpringStopThreshold;
    private String mTouchAnchorId;
    private Side mTouchAnchorSide;

    public enum Boundary {
        OVERSHOOT,
        BOUNCE_START,
        BOUNCE_END,
        BOUNCE_BOTH
    }

    public enum Drag {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        START,
        END,
        CLOCKWISE,
        ANTICLOCKWISE
    }

    public enum Mode {
        VELOCITY,
        SPRING
    }

    public enum Side {
        TOP,
        LEFT,
        RIGHT,
        BOTTOM,
        MIDDLE,
        START,
        END
    }

    public enum TouchUp {
        AUTOCOMPLETE,
        TO_START,
        NEVER_COMPLETE_END,
        TO_END,
        STOP,
        DECELERATE,
        DECELERATE_COMPLETE,
        NEVER_COMPLETE_START
    }

    public OnSwipe() {
        this.mDragDirection = null;
        this.mTouchAnchorSide = null;
        this.mTouchAnchorId = null;
        this.mLimitBoundsTo = null;
        this.mOnTouchUp = null;
        this.mRotationCenterId = null;
        this.mMaxVelocity = Float.NaN;
        this.mMaxAcceleration = Float.NaN;
        this.mDragScale = Float.NaN;
        this.mDragThreshold = Float.NaN;
        this.mSpringDamping = Float.NaN;
        this.mSpringMass = Float.NaN;
        this.mSpringStiffness = Float.NaN;
        this.mSpringStopThreshold = Float.NaN;
        this.mSpringBoundary = null;
        this.mAutoCompleteMode = null;
    }

    public OnSwipe(String anchor, Side side, Drag dragDirection) {
        this.mDragDirection = null;
        this.mTouchAnchorSide = null;
        this.mTouchAnchorId = null;
        this.mLimitBoundsTo = null;
        this.mOnTouchUp = null;
        this.mRotationCenterId = null;
        this.mMaxVelocity = Float.NaN;
        this.mMaxAcceleration = Float.NaN;
        this.mDragScale = Float.NaN;
        this.mDragThreshold = Float.NaN;
        this.mSpringDamping = Float.NaN;
        this.mSpringMass = Float.NaN;
        this.mSpringStiffness = Float.NaN;
        this.mSpringStopThreshold = Float.NaN;
        this.mSpringBoundary = null;
        this.mAutoCompleteMode = null;
        this.mTouchAnchorId = anchor;
        this.mTouchAnchorSide = side;
        this.mDragDirection = dragDirection;
    }

    public OnSwipe setTouchAnchorId(String id) {
        this.mTouchAnchorId = id;
        return this;
    }

    public String getTouchAnchorId() {
        return this.mTouchAnchorId;
    }

    public OnSwipe setTouchAnchorSide(Side side) {
        this.mTouchAnchorSide = side;
        return this;
    }

    public Side getTouchAnchorSide() {
        return this.mTouchAnchorSide;
    }

    public OnSwipe setDragDirection(Drag dragDirection) {
        this.mDragDirection = dragDirection;
        return this;
    }

    public Drag getDragDirection() {
        return this.mDragDirection;
    }

    public OnSwipe setMaxVelocity(int maxVelocity) {
        this.mMaxVelocity = maxVelocity;
        return this;
    }

    public float getMaxVelocity() {
        return this.mMaxVelocity;
    }

    public OnSwipe setMaxAcceleration(int maxAcceleration) {
        this.mMaxAcceleration = maxAcceleration;
        return this;
    }

    public float getMaxAcceleration() {
        return this.mMaxAcceleration;
    }

    public OnSwipe setDragScale(int dragScale) {
        this.mDragScale = dragScale;
        return this;
    }

    public float getDragScale() {
        return this.mDragScale;
    }

    public OnSwipe setDragThreshold(int dragThreshold) {
        this.mDragThreshold = dragThreshold;
        return this;
    }

    public float getDragThreshold() {
        return this.mDragThreshold;
    }

    public OnSwipe setOnTouchUp(TouchUp mode) {
        this.mOnTouchUp = mode;
        return this;
    }

    public TouchUp getOnTouchUp() {
        return this.mOnTouchUp;
    }

    public OnSwipe setLimitBoundsTo(String id) {
        this.mLimitBoundsTo = id;
        return this;
    }

    public String getLimitBoundsTo() {
        return this.mLimitBoundsTo;
    }

    public OnSwipe setRotateCenter(String rotationCenterId) {
        this.mRotationCenterId = rotationCenterId;
        return this;
    }

    public String getRotationCenterId() {
        return this.mRotationCenterId;
    }

    public float getSpringDamping() {
        return this.mSpringDamping;
    }

    public OnSwipe setSpringDamping(float springDamping) {
        this.mSpringDamping = springDamping;
        return this;
    }

    public float getSpringMass() {
        return this.mSpringMass;
    }

    public OnSwipe setSpringMass(float springMass) {
        this.mSpringMass = springMass;
        return this;
    }

    public float getSpringStiffness() {
        return this.mSpringStiffness;
    }

    public OnSwipe setSpringStiffness(float springStiffness) {
        this.mSpringStiffness = springStiffness;
        return this;
    }

    public float getSpringStopThreshold() {
        return this.mSpringStopThreshold;
    }

    public OnSwipe setSpringStopThreshold(float springStopThreshold) {
        this.mSpringStopThreshold = springStopThreshold;
        return this;
    }

    public Boundary getSpringBoundary() {
        return this.mSpringBoundary;
    }

    public OnSwipe setSpringBoundary(Boundary springBoundary) {
        this.mSpringBoundary = springBoundary;
        return this;
    }

    public Mode getAutoCompleteMode() {
        return this.mAutoCompleteMode;
    }

    public void setAutoCompleteMode(Mode autoCompleteMode) {
        this.mAutoCompleteMode = autoCompleteMode;
    }

    public String toString() {
        StringBuilder ret = new StringBuilder();
        ret.append("OnSwipe:{\n");
        if (this.mTouchAnchorId != null) {
            ret.append("anchor:'").append(this.mTouchAnchorId).append("',\n");
        }
        if (this.mDragDirection != null) {
            ret.append("direction:'").append(this.mDragDirection.toString().toLowerCase()).append("',\n");
        }
        if (this.mTouchAnchorSide != null) {
            ret.append("side:'").append(this.mTouchAnchorSide.toString().toLowerCase()).append("',\n");
        }
        if (!Float.isNaN(this.mDragScale)) {
            ret.append("scale:'").append(this.mDragScale).append("',\n");
        }
        if (!Float.isNaN(this.mDragThreshold)) {
            ret.append("threshold:'").append(this.mDragThreshold).append("',\n");
        }
        if (!Float.isNaN(this.mMaxVelocity)) {
            ret.append("maxVelocity:'").append(this.mMaxVelocity).append("',\n");
        }
        if (!Float.isNaN(this.mMaxAcceleration)) {
            ret.append("maxAccel:'").append(this.mMaxAcceleration).append("',\n");
        }
        if (this.mLimitBoundsTo != null) {
            ret.append("limitBounds:'").append(this.mLimitBoundsTo).append("',\n");
        }
        if (this.mAutoCompleteMode != null) {
            ret.append("mode:'").append(this.mAutoCompleteMode.toString().toLowerCase()).append("',\n");
        }
        if (this.mOnTouchUp != null) {
            ret.append("touchUp:'").append(this.mOnTouchUp.toString().toLowerCase()).append("',\n");
        }
        if (!Float.isNaN(this.mSpringMass)) {
            ret.append("springMass:'").append(this.mSpringMass).append("',\n");
        }
        if (!Float.isNaN(this.mSpringStiffness)) {
            ret.append("springStiffness:'").append(this.mSpringStiffness).append("',\n");
        }
        if (!Float.isNaN(this.mSpringDamping)) {
            ret.append("springDamping:'").append(this.mSpringDamping).append("',\n");
        }
        if (!Float.isNaN(this.mSpringStopThreshold)) {
            ret.append("stopThreshold:'").append(this.mSpringStopThreshold).append("',\n");
        }
        if (this.mSpringBoundary != null) {
            ret.append("springBoundary:'").append(this.mSpringBoundary).append("',\n");
        }
        if (this.mRotationCenterId != null) {
            ret.append("around:'").append(this.mRotationCenterId).append("',\n");
        }
        ret.append("},\n");
        return ret.toString();
    }
}
