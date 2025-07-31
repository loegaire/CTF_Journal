package androidx.constraintlayout.core.state;

import androidx.constraintlayout.core.motion.CustomVariable;
import androidx.constraintlayout.core.motion.Motion;
import androidx.constraintlayout.core.motion.MotionWidget;
import androidx.constraintlayout.core.motion.key.MotionKeyAttributes;
import androidx.constraintlayout.core.motion.key.MotionKeyCycle;
import androidx.constraintlayout.core.motion.key.MotionKeyPosition;
import androidx.constraintlayout.core.motion.utils.Easing;
import androidx.constraintlayout.core.motion.utils.KeyCache;
import androidx.constraintlayout.core.motion.utils.SpringStopEngine;
import androidx.constraintlayout.core.motion.utils.StopEngine;
import androidx.constraintlayout.core.motion.utils.StopLogicEngine;
import androidx.constraintlayout.core.motion.utils.TypedBundle;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes.dex */
public class Transition implements TypedValues {
    static final int ANTICIPATE = 6;
    static final int BOUNCE = 4;
    private static final boolean DEBUG = false;
    static final int EASE_IN = 1;
    static final int EASE_IN_OUT = 0;
    static final int EASE_OUT = 2;
    public static final int END = 1;
    public static final int INTERPOLATED = 2;
    private static final int INTERPOLATOR_REFERENCE_ID = -2;
    static final int LINEAR = 3;
    static final int OVERSHOOT = 5;
    private static final int SPLINE_STRING = -1;
    public static final int START = 0;
    int mParentEndHeight;
    int mParentEndWidth;
    int mParentInterpolateHeight;
    int mParentInterpolatedWidth;
    int mParentStartHeight;
    int mParentStartWidth;
    final CorePixelDp mToPixel;
    boolean mWrap;
    private HashMap<Integer, HashMap<String, KeyPosition>> mKeyPositions = new HashMap<>();
    private HashMap<String, WidgetState> mState = new HashMap<>();
    private TypedBundle mBundle = new TypedBundle();
    private int mDefaultInterpolator = 0;
    private String mDefaultInterpolatorString = null;
    private Easing mEasing = null;
    private int mAutoTransition = 0;
    private int mDuration = 400;
    private float mStagger = 0.0f;
    private OnSwipe mOnSwipe = null;

    public Transition(CorePixelDp dpToPixel) {
        this.mToPixel = dpToPixel;
    }

    OnSwipe createOnSwipe() {
        OnSwipe onSwipe = new OnSwipe();
        this.mOnSwipe = onSwipe;
        return onSwipe;
    }

    public boolean hasOnSwipe() {
        return this.mOnSwipe != null;
    }

    static class OnSwipe {
        public static final int ANCHOR_SIDE_BOTTOM = 3;
        public static final int ANCHOR_SIDE_END = 6;
        public static final int ANCHOR_SIDE_LEFT = 1;
        public static final int ANCHOR_SIDE_MIDDLE = 4;
        public static final int ANCHOR_SIDE_RIGHT = 2;
        public static final int ANCHOR_SIDE_START = 5;
        public static final int ANCHOR_SIDE_TOP = 0;
        public static final int BOUNDARY_BOUNCE_BOTH = 3;
        public static final int BOUNDARY_BOUNCE_END = 2;
        public static final int BOUNDARY_BOUNCE_START = 1;
        public static final int BOUNDARY_OVERSHOOT = 0;
        public static final int DRAG_ANTICLOCKWISE = 7;
        public static final int DRAG_CLOCKWISE = 6;
        public static final int DRAG_DOWN = 1;
        public static final int DRAG_END = 5;
        public static final int DRAG_LEFT = 2;
        public static final int DRAG_RIGHT = 3;
        public static final int DRAG_START = 4;
        public static final int DRAG_UP = 0;
        public static final int MODE_CONTINUOUS_VELOCITY = 0;
        public static final int MODE_SPRING = 1;
        public static final int ON_UP_AUTOCOMPLETE = 0;
        public static final int ON_UP_AUTOCOMPLETE_TO_END = 2;
        public static final int ON_UP_AUTOCOMPLETE_TO_START = 1;
        public static final int ON_UP_DECELERATE = 4;
        public static final int ON_UP_DECELERATE_AND_COMPLETE = 5;
        public static final int ON_UP_NEVER_COMPLETE_TO_END = 7;
        public static final int ON_UP_NEVER_COMPLETE_TO_START = 6;
        public static final int ON_UP_STOP = 3;
        String mAnchorId;
        private int mAnchorSide;
        private StopEngine mEngine;
        String mLimitBoundsTo;
        private String mRotationCenterId;
        private long mStart;
        public static final String[] SIDES = {"top", "left", "right", "bottom", "middle", "start", "end"};
        private static final float[][] TOUCH_SIDES = {new float[]{0.5f, 0.0f}, new float[]{0.0f, 0.5f}, new float[]{1.0f, 0.5f}, new float[]{0.5f, 1.0f}, new float[]{0.5f, 0.5f}, new float[]{0.0f, 0.5f}, new float[]{1.0f, 0.5f}};
        public static final String[] DIRECTIONS = {"up", "down", "left", "right", "start", "end", "clockwise", "anticlockwise"};
        public static final String[] MODE = {"velocity", "spring"};
        public static final String[] TOUCH_UP = {"autocomplete", "toStart", "toEnd", "stop", "decelerate", "decelerateComplete", "neverCompleteStart", "neverCompleteEnd"};
        public static final String[] BOUNDARY = {"overshoot", "bounceStart", "bounceEnd", "bounceBoth"};
        private static final float[][] TOUCH_DIRECTION = {new float[]{0.0f, -1.0f}, new float[]{0.0f, 1.0f}, new float[]{-1.0f, 0.0f}, new float[]{1.0f, 0.0f}, new float[]{-1.0f, 0.0f}, new float[]{1.0f, 0.0f}};
        private boolean mDragVertical = true;
        private int mDragDirection = 0;
        private float mDragScale = 1.0f;
        private float mDragThreshold = 10.0f;
        private int mAutoCompleteMode = 0;
        private float mMaxVelocity = 4.0f;
        private float mMaxAcceleration = 1.2f;
        private int mOnTouchUp = 0;
        private float mSpringMass = 1.0f;
        private float mSpringStiffness = 400.0f;
        private float mSpringDamping = 10.0f;
        private float mSpringStopThreshold = 0.01f;
        private float mDestination = 0.0f;
        private int mSpringBoundary = 0;

        OnSwipe() {
        }

        float getScale() {
            return this.mDragScale;
        }

        float[] getDirection() {
            return TOUCH_DIRECTION[this.mDragDirection];
        }

        float[] getSide() {
            return TOUCH_SIDES[this.mAnchorSide];
        }

        void setAnchorId(String anchorId) {
            this.mAnchorId = anchorId;
        }

        void setAnchorSide(int anchorSide) {
            this.mAnchorSide = anchorSide;
        }

        void setRotationCenterId(String rotationCenterId) {
            this.mRotationCenterId = rotationCenterId;
        }

        void setLimitBoundsTo(String limitBoundsTo) {
            this.mLimitBoundsTo = limitBoundsTo;
        }

        void setDragDirection(int dragDirection) {
            this.mDragDirection = dragDirection;
            this.mDragVertical = dragDirection < 2;
        }

        void setDragScale(float dragScale) {
            if (Float.isNaN(dragScale)) {
                return;
            }
            this.mDragScale = dragScale;
        }

        void setDragThreshold(float dragThreshold) {
            if (Float.isNaN(dragThreshold)) {
                return;
            }
            this.mDragThreshold = dragThreshold;
        }

        void setAutoCompleteMode(int mAutoCompleteMode) {
            this.mAutoCompleteMode = mAutoCompleteMode;
        }

        void setMaxVelocity(float maxVelocity) {
            if (Float.isNaN(maxVelocity)) {
                return;
            }
            this.mMaxVelocity = maxVelocity;
        }

        void setMaxAcceleration(float maxAcceleration) {
            if (Float.isNaN(maxAcceleration)) {
                return;
            }
            this.mMaxAcceleration = maxAcceleration;
        }

        void setOnTouchUp(int onTouchUp) {
            this.mOnTouchUp = onTouchUp;
        }

        void setSpringMass(float mSpringMass) {
            if (Float.isNaN(mSpringMass)) {
                return;
            }
            this.mSpringMass = mSpringMass;
        }

        void setSpringStiffness(float mSpringStiffness) {
            if (Float.isNaN(mSpringStiffness)) {
                return;
            }
            this.mSpringStiffness = mSpringStiffness;
        }

        void setSpringDamping(float mSpringDamping) {
            if (Float.isNaN(mSpringDamping)) {
                return;
            }
            this.mSpringDamping = mSpringDamping;
        }

        void setSpringStopThreshold(float mSpringStopThreshold) {
            if (Float.isNaN(mSpringStopThreshold)) {
                return;
            }
            this.mSpringStopThreshold = mSpringStopThreshold;
        }

        void setSpringBoundary(int mSpringBoundary) {
            this.mSpringBoundary = mSpringBoundary;
        }

        float getDestinationPosition(float currentPosition, float velocity, float duration) {
            float rest = (((Math.abs(velocity) * 0.5f) * velocity) / this.mMaxAcceleration) + currentPosition;
            switch (this.mOnTouchUp) {
                case 1:
                    if (currentPosition >= 1.0f) {
                    }
                    break;
                case 2:
                    if (currentPosition <= 0.0f) {
                    }
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    if (rest <= 0.2f || rest >= 0.8f) {
                        if (rest > 0.5f) {
                            break;
                        }
                    }
                    break;
                case 6:
                    break;
                case 7:
                    break;
                default:
                    if (rest > 0.5d) {
                        break;
                    }
                    break;
            }
            return 0.0f;
        }

        void config(float position, float velocity, long start, float duration) {
            SpringStopEngine sl;
            StopLogicEngine sl2;
            StopLogicEngine.Decelerate sld;
            this.mStart = start;
            float abs = Math.abs(velocity);
            float f = this.mMaxVelocity;
            if (abs > f) {
                velocity = f * Math.signum(velocity);
            }
            float destinationPosition = getDestinationPosition(position, velocity, duration);
            this.mDestination = destinationPosition;
            if (destinationPosition == position) {
                this.mEngine = null;
                return;
            }
            if (this.mOnTouchUp == 4 && this.mAutoCompleteMode == 0) {
                StopEngine stopEngine = this.mEngine;
                if (stopEngine instanceof StopLogicEngine.Decelerate) {
                    sld = (StopLogicEngine.Decelerate) stopEngine;
                } else {
                    sld = new StopLogicEngine.Decelerate();
                    this.mEngine = sld;
                }
                sld.config(position, this.mDestination, velocity);
                return;
            }
            if (this.mAutoCompleteMode == 0) {
                StopEngine stopEngine2 = this.mEngine;
                if (stopEngine2 instanceof StopLogicEngine) {
                    sl2 = (StopLogicEngine) stopEngine2;
                } else {
                    StopLogicEngine sl3 = new StopLogicEngine();
                    this.mEngine = sl3;
                    sl2 = sl3;
                }
                sl2.config(position, this.mDestination, velocity, duration, this.mMaxAcceleration, this.mMaxVelocity);
                return;
            }
            StopEngine stopEngine3 = this.mEngine;
            if (stopEngine3 instanceof SpringStopEngine) {
                sl = (SpringStopEngine) stopEngine3;
            } else {
                SpringStopEngine sl4 = new SpringStopEngine();
                this.mEngine = sl4;
                sl = sl4;
            }
            sl.springConfig(position, this.mDestination, velocity, this.mSpringMass, this.mSpringStiffness, this.mSpringDamping, this.mSpringStopThreshold, this.mSpringBoundary);
        }

        public float getTouchUpProgress(long currentTime) {
            float time = (currentTime - this.mStart) * 1.0E-9f;
            float pos = this.mEngine.getInterpolation(time);
            if (this.mEngine.isStopped()) {
                float pos2 = this.mDestination;
                return pos2;
            }
            return pos;
        }

        public void printInfo() {
            if (this.mAutoCompleteMode == 0) {
                System.out.println("velocity = " + this.mEngine.getVelocity());
                System.out.println("mMaxAcceleration = " + this.mMaxAcceleration);
                System.out.println("mMaxVelocity = " + this.mMaxVelocity);
            } else {
                System.out.println("mSpringMass          = " + this.mSpringMass);
                System.out.println("mSpringStiffness     = " + this.mSpringStiffness);
                System.out.println("mSpringDamping       = " + this.mSpringDamping);
                System.out.println("mSpringStopThreshold = " + this.mSpringStopThreshold);
                System.out.println("mSpringBoundary      = " + this.mSpringBoundary);
            }
        }

        public boolean isNotDone(float progress) {
            StopEngine stopEngine;
            return (this.mOnTouchUp == 3 || (stopEngine = this.mEngine) == null || stopEngine.isStopped()) ? false : true;
        }
    }

    public boolean isFirstDownAccepted(float posX, float posY) {
        OnSwipe onSwipe = this.mOnSwipe;
        if (onSwipe == null) {
            return false;
        }
        if (onSwipe.mLimitBoundsTo == null) {
            return true;
        }
        WidgetState targetWidget = this.mState.get(this.mOnSwipe.mLimitBoundsTo);
        if (targetWidget == null) {
            System.err.println("mLimitBoundsTo target is null");
            return false;
        }
        WidgetFrame frame = targetWidget.getFrame(2);
        return posX >= ((float) frame.left) && posX < ((float) frame.right) && posY >= ((float) frame.top) && posY < ((float) frame.bottom);
    }

    public float dragToProgress(float currentProgress, int baseW, int baseH, float dx, float dy) {
        Collection<WidgetState> widgets = this.mState.values();
        WidgetState childWidget = null;
        Iterator<WidgetState> it = widgets.iterator();
        if (it.hasNext()) {
            WidgetState widget = it.next();
            childWidget = widget;
        }
        OnSwipe onSwipe = this.mOnSwipe;
        if (onSwipe != null && childWidget != null) {
            if (onSwipe.mAnchorId != null) {
                WidgetState base = this.mState.get(this.mOnSwipe.mAnchorId);
                float[] dir = this.mOnSwipe.getDirection();
                float[] side = this.mOnSwipe.getSide();
                float[] motionDpDt = new float[2];
                base.interpolate(baseW, baseH, currentProgress, this);
                base.mMotionControl.getDpDt(currentProgress, side[0], side[1], motionDpDt);
                float drag = dir[0] != 0.0f ? (Math.abs(dir[0]) * dx) / motionDpDt[0] : (Math.abs(dir[1]) * dy) / motionDpDt[1];
                return this.mOnSwipe.getScale() * drag;
            }
            float[] dir2 = this.mOnSwipe.getDirection();
            float motionDpDtX = childWidget.mParentHeight;
            float motionDpDtY = childWidget.mParentHeight;
            float drag2 = dir2[0] != 0.0f ? (Math.abs(dir2[0]) * dx) / motionDpDtX : (Math.abs(dir2[1]) * dy) / motionDpDtY;
            return this.mOnSwipe.getScale() * drag2;
        }
        if (childWidget != null) {
            return (-dy) / childWidget.mParentHeight;
        }
        return 1.0f;
    }

    public void setTouchUp(float currentProgress, long currentTime, float velocityX, float velocityY) {
        OnSwipe onSwipe = this.mOnSwipe;
        if (onSwipe != null) {
            WidgetState base = this.mState.get(onSwipe.mAnchorId);
            float[] motionDpDt = new float[2];
            float[] dir = this.mOnSwipe.getDirection();
            float[] side = this.mOnSwipe.getSide();
            base.mMotionControl.getDpDt(currentProgress, side[0], side[1], motionDpDt);
            float movementInDir = (dir[0] * motionDpDt[0]) + (dir[1] * motionDpDt[1]);
            if (Math.abs(movementInDir) < 0.01d) {
                motionDpDt[0] = 0.01f;
                motionDpDt[1] = 0.01f;
            }
            float drag = dir[0] != 0.0f ? velocityX / motionDpDt[0] : velocityY / motionDpDt[1];
            this.mOnSwipe.config(currentProgress, drag * this.mOnSwipe.getScale(), currentTime, this.mDuration * 0.001f);
        }
    }

    public float getTouchUpProgress(long currentTime) {
        OnSwipe onSwipe = this.mOnSwipe;
        if (onSwipe != null) {
            return onSwipe.getTouchUpProgress(currentTime);
        }
        return 0.0f;
    }

    public boolean isTouchNotDone(float currentProgress) {
        return this.mOnSwipe.isNotDone(currentProgress);
    }

    public static Interpolator getInterpolator(int interpolator, final String interpolatorString) {
        switch (interpolator) {
            case -1:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda0
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$0(interpolatorString, f);
                    }
                };
            case 0:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda1
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$1(f);
                    }
                };
            case 1:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda2
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$2(f);
                    }
                };
            case 2:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda3
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$3(f);
                    }
                };
            case 3:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda4
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$4(f);
                    }
                };
            case 4:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda7
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$7(f);
                    }
                };
            case 5:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda6
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$6(f);
                    }
                };
            case 6:
                return new Interpolator() { // from class: androidx.constraintlayout.core.state.Transition$$ExternalSyntheticLambda5
                    @Override // androidx.constraintlayout.core.state.Interpolator
                    public final float getInterpolation(float f) {
                        return Transition.lambda$getInterpolator$5(f);
                    }
                };
            default:
                return null;
        }
    }

    static /* synthetic */ float lambda$getInterpolator$0(String interpolatorString, float v) {
        return (float) Easing.getInterpolator(interpolatorString).get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$1(float v) {
        return (float) Easing.getInterpolator("standard").get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$2(float v) {
        return (float) Easing.getInterpolator("accelerate").get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$3(float v) {
        return (float) Easing.getInterpolator("decelerate").get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$4(float v) {
        return (float) Easing.getInterpolator("linear").get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$5(float v) {
        return (float) Easing.getInterpolator("anticipate").get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$6(float v) {
        return (float) Easing.getInterpolator("overshoot").get(v);
    }

    static /* synthetic */ float lambda$getInterpolator$7(float v) {
        return (float) Easing.getInterpolator("spline(0.0, 0.2, 0.4, 0.6, 0.8 ,1.0, 0.8, 1.0, 0.9, 1.0)").get(v);
    }

    public KeyPosition findPreviousPosition(String target, int frameNumber) {
        KeyPosition keyPosition;
        while (frameNumber >= 0) {
            HashMap<String, KeyPosition> map = this.mKeyPositions.get(Integer.valueOf(frameNumber));
            if (map != null && (keyPosition = map.get(target)) != null) {
                return keyPosition;
            }
            frameNumber--;
        }
        return null;
    }

    public KeyPosition findNextPosition(String target, int frameNumber) {
        KeyPosition keyPosition;
        while (frameNumber <= 100) {
            HashMap<String, KeyPosition> map = this.mKeyPositions.get(Integer.valueOf(frameNumber));
            if (map != null && (keyPosition = map.get(target)) != null) {
                return keyPosition;
            }
            frameNumber++;
        }
        return null;
    }

    public int getNumberKeyPositions(WidgetFrame frame) {
        int numKeyPositions = 0;
        for (int frameNumber = 0; frameNumber <= 100; frameNumber++) {
            HashMap<String, KeyPosition> map = this.mKeyPositions.get(Integer.valueOf(frameNumber));
            if (map != null) {
                KeyPosition keyPosition = map.get(frame.widget.stringId);
                if (keyPosition != null) {
                    numKeyPositions++;
                }
            }
        }
        return numKeyPositions;
    }

    public Motion getMotion(String id) {
        return getWidgetState(id, null, 0).mMotionControl;
    }

    public void fillKeyPositions(WidgetFrame frame, float[] x, float[] y, float[] pos) {
        KeyPosition keyPosition;
        int numKeyPositions = 0;
        for (int frameNumber = 0; frameNumber <= 100; frameNumber++) {
            HashMap<String, KeyPosition> map = this.mKeyPositions.get(Integer.valueOf(frameNumber));
            if (map != null && (keyPosition = map.get(frame.widget.stringId)) != null) {
                x[numKeyPositions] = keyPosition.mX;
                y[numKeyPositions] = keyPosition.mY;
                pos[numKeyPositions] = keyPosition.mFrame;
                numKeyPositions++;
            }
        }
    }

    public boolean hasPositionKeyframes() {
        return this.mKeyPositions.size() > 0;
    }

    public void setTransitionProperties(TypedBundle bundle) {
        bundle.applyDelta(this.mBundle);
        bundle.applyDelta(this);
    }

    @Override // androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int id, int value) {
        return false;
    }

    @Override // androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int id, float value) {
        if (id == 706) {
            this.mStagger = value;
            return false;
        }
        return false;
    }

    @Override // androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int id, String value) {
        if (id == 705) {
            this.mDefaultInterpolatorString = value;
            this.mEasing = Easing.getInterpolator(value);
            return false;
        }
        return false;
    }

    @Override // androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int id, boolean value) {
        return false;
    }

    @Override // androidx.constraintlayout.core.motion.utils.TypedValues
    public int getId(String name) {
        return 0;
    }

    public boolean isEmpty() {
        return this.mState.isEmpty();
    }

    public void clear() {
        this.mState.clear();
    }

    void resetProperties() {
        this.mOnSwipe = null;
        this.mBundle.clear();
    }

    public boolean contains(String key) {
        return this.mState.containsKey(key);
    }

    public void addKeyPosition(String target, TypedBundle bundle) {
        getWidgetState(target, null, 0).setKeyPosition(bundle);
    }

    public void addKeyAttribute(String target, TypedBundle bundle) {
        getWidgetState(target, null, 0).setKeyAttribute(bundle);
    }

    public void addKeyAttribute(String target, TypedBundle bundle, CustomVariable[] custom) {
        getWidgetState(target, null, 0).setKeyAttribute(bundle, custom);
    }

    public void addKeyCycle(String target, TypedBundle bundle) {
        getWidgetState(target, null, 0).setKeyCycle(bundle);
    }

    public void addKeyPosition(String target, int frame, int type, float x, float y) {
        TypedBundle bundle = new TypedBundle();
        bundle.add(TypedValues.PositionType.TYPE_POSITION_TYPE, 2);
        bundle.add(100, frame);
        bundle.add(TypedValues.PositionType.TYPE_PERCENT_X, x);
        bundle.add(TypedValues.PositionType.TYPE_PERCENT_Y, y);
        getWidgetState(target, null, 0).setKeyPosition(bundle);
        KeyPosition keyPosition = new KeyPosition(target, frame, type, x, y);
        HashMap<String, KeyPosition> map = this.mKeyPositions.get(Integer.valueOf(frame));
        if (map == null) {
            map = new HashMap<>();
            this.mKeyPositions.put(Integer.valueOf(frame), map);
        }
        map.put(target, keyPosition);
    }

    public void addCustomFloat(int state, String widgetId, String property, float value) {
        WidgetState widgetState = getWidgetState(widgetId, null, state);
        WidgetFrame frame = widgetState.getFrame(state);
        frame.addCustomFloat(property, value);
    }

    public void addCustomColor(int state, String widgetId, String property, int color) {
        WidgetState widgetState = getWidgetState(widgetId, null, state);
        WidgetFrame frame = widgetState.getFrame(state);
        frame.addCustomColor(property, color);
    }

    private void calculateParentDimensions(float progress) {
        this.mParentInterpolatedWidth = (int) (this.mParentStartWidth + 0.5f + ((this.mParentEndWidth - r0) * progress));
        this.mParentInterpolateHeight = (int) (this.mParentStartHeight + 0.5f + ((this.mParentEndHeight - r0) * progress));
    }

    public int getInterpolatedWidth() {
        return this.mParentInterpolatedWidth;
    }

    public int getInterpolatedHeight() {
        return this.mParentInterpolateHeight;
    }

    public void updateFrom(ConstraintWidgetContainer container, int state) {
        boolean z = container.mListDimensionBehaviors[0] == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT;
        this.mWrap = z;
        this.mWrap = z | (container.mListDimensionBehaviors[1] == ConstraintWidget.DimensionBehaviour.WRAP_CONTENT);
        if (state == 0) {
            int width = container.getWidth();
            this.mParentStartWidth = width;
            this.mParentInterpolatedWidth = width;
            int height = container.getHeight();
            this.mParentStartHeight = height;
            this.mParentInterpolateHeight = height;
        } else {
            this.mParentEndWidth = container.getWidth();
            this.mParentEndHeight = container.getHeight();
        }
        ArrayList<ConstraintWidget> children = container.getChildren();
        int count = children.size();
        WidgetState[] states = new WidgetState[count];
        for (int i = 0; i < count; i++) {
            ConstraintWidget child = children.get(i);
            WidgetState widgetState = getWidgetState(child.stringId, null, state);
            states[i] = widgetState;
            widgetState.update(child, state);
            String id = widgetState.getPathRelativeId();
            if (id != null) {
                widgetState.setPathRelative(getWidgetState(id, null, state));
            }
        }
        calcStagger();
    }

    public void interpolate(int parentWidth, int parentHeight, float progress) {
        if (this.mWrap) {
            calculateParentDimensions(progress);
        }
        Easing easing = this.mEasing;
        if (easing != null) {
            progress = (float) easing.get(progress);
        }
        for (String key : this.mState.keySet()) {
            WidgetState widget = this.mState.get(key);
            widget.interpolate(parentWidth, parentHeight, progress, this);
        }
    }

    public WidgetFrame getStart(String id) {
        WidgetState widgetState = this.mState.get(id);
        if (widgetState == null) {
            return null;
        }
        return widgetState.mStart;
    }

    public WidgetFrame getEnd(String id) {
        WidgetState widgetState = this.mState.get(id);
        if (widgetState == null) {
            return null;
        }
        return widgetState.mEnd;
    }

    public WidgetFrame getInterpolated(String id) {
        WidgetState widgetState = this.mState.get(id);
        if (widgetState == null) {
            return null;
        }
        return widgetState.mInterpolated;
    }

    public float[] getPath(String id) {
        WidgetState widgetState = this.mState.get(id);
        int frames = 1000 / 16;
        float[] mPoints = new float[frames * 2];
        widgetState.mMotionControl.buildPath(mPoints, frames);
        return mPoints;
    }

    public int getKeyFrames(String id, float[] rectangles, int[] pathMode, int[] position) {
        WidgetState widgetState = this.mState.get(id);
        return widgetState.mMotionControl.buildKeyFrames(rectangles, pathMode, position);
    }

    private WidgetState getWidgetState(String widgetId) {
        return this.mState.get(widgetId);
    }

    public WidgetState getWidgetState(String widgetId, ConstraintWidget child, int transitionState) {
        WidgetState widgetState = this.mState.get(widgetId);
        if (widgetState == null) {
            widgetState = new WidgetState();
            this.mBundle.applyDelta(widgetState.mMotionControl);
            widgetState.mMotionWidgetStart.updateMotion(widgetState.mMotionControl);
            this.mState.put(widgetId, widgetState);
            if (child != null) {
                widgetState.update(child, transitionState);
            }
        }
        return widgetState;
    }

    public WidgetFrame getStart(ConstraintWidget child) {
        return getWidgetState(child.stringId, null, 0).mStart;
    }

    public WidgetFrame getEnd(ConstraintWidget child) {
        return getWidgetState(child.stringId, null, 1).mEnd;
    }

    public WidgetFrame getInterpolated(ConstraintWidget child) {
        return getWidgetState(child.stringId, null, 2).mInterpolated;
    }

    public Interpolator getInterpolator() {
        return getInterpolator(this.mDefaultInterpolator, this.mDefaultInterpolatorString);
    }

    public int getAutoTransition() {
        return this.mAutoTransition;
    }

    public static class WidgetState {
        Motion mMotionControl;
        boolean mNeedSetup = true;
        KeyCache mKeyCache = new KeyCache();
        int mParentHeight = -1;
        int mParentWidth = -1;
        WidgetFrame mStart = new WidgetFrame();
        WidgetFrame mEnd = new WidgetFrame();
        WidgetFrame mInterpolated = new WidgetFrame();
        MotionWidget mMotionWidgetStart = new MotionWidget(this.mStart);
        MotionWidget mMotionWidgetEnd = new MotionWidget(this.mEnd);
        MotionWidget mMotionWidgetInterpolated = new MotionWidget(this.mInterpolated);

        public WidgetState() {
            Motion motion = new Motion(this.mMotionWidgetStart);
            this.mMotionControl = motion;
            motion.setStart(this.mMotionWidgetStart);
            this.mMotionControl.setEnd(this.mMotionWidgetEnd);
        }

        public void setKeyPosition(TypedBundle prop) {
            MotionKeyPosition keyPosition = new MotionKeyPosition();
            prop.applyDelta(keyPosition);
            this.mMotionControl.addKey(keyPosition);
        }

        public void setKeyAttribute(TypedBundle prop) {
            MotionKeyAttributes keyAttributes = new MotionKeyAttributes();
            prop.applyDelta(keyAttributes);
            this.mMotionControl.addKey(keyAttributes);
        }

        public void setKeyAttribute(TypedBundle prop, CustomVariable[] custom) {
            MotionKeyAttributes keyAttributes = new MotionKeyAttributes();
            prop.applyDelta(keyAttributes);
            if (custom != null) {
                for (int i = 0; i < custom.length; i++) {
                    keyAttributes.mCustom.put(custom[i].getName(), custom[i]);
                }
            }
            this.mMotionControl.addKey(keyAttributes);
        }

        public void setKeyCycle(TypedBundle prop) {
            MotionKeyCycle keyAttributes = new MotionKeyCycle();
            prop.applyDelta(keyAttributes);
            this.mMotionControl.addKey(keyAttributes);
        }

        public void update(ConstraintWidget child, int state) {
            if (state == 0) {
                this.mStart.update(child);
                MotionWidget motionWidget = this.mMotionWidgetStart;
                motionWidget.updateMotion(motionWidget);
                this.mMotionControl.setStart(this.mMotionWidgetStart);
                this.mNeedSetup = true;
            } else if (state == 1) {
                this.mEnd.update(child);
                this.mMotionControl.setEnd(this.mMotionWidgetEnd);
                this.mNeedSetup = true;
            }
            this.mParentWidth = -1;
        }

        String getPathRelativeId() {
            return this.mMotionControl.getAnimateRelativeTo();
        }

        public WidgetFrame getFrame(int type) {
            if (type == 0) {
                return this.mStart;
            }
            if (type == 1) {
                return this.mEnd;
            }
            return this.mInterpolated;
        }

        public void interpolate(int parentWidth, int parentHeight, float progress, Transition transition) {
            this.mParentHeight = parentHeight;
            this.mParentWidth = parentWidth;
            if (this.mNeedSetup) {
                this.mMotionControl.setup(parentWidth, parentHeight, 1.0f, System.nanoTime());
                this.mNeedSetup = false;
            }
            WidgetFrame.interpolate(parentWidth, parentHeight, this.mInterpolated, this.mStart, this.mEnd, transition, progress);
            this.mInterpolated.interpolatedPos = progress;
            this.mMotionControl.interpolate(this.mMotionWidgetInterpolated, progress, System.nanoTime(), this.mKeyCache);
        }

        public void setPathRelative(WidgetState widgetState) {
            this.mMotionControl.setupRelative(widgetState.mMotionControl);
        }
    }

    static class KeyPosition {
        int mFrame;
        String mTarget;
        int mType;
        float mX;
        float mY;

        KeyPosition(String target, int frame, int type, float x, float y) {
            this.mTarget = target;
            this.mFrame = frame;
            this.mType = type;
            this.mX = x;
            this.mY = y;
        }
    }

    public void calcStagger() {
        float f = this.mStagger;
        if (f == 0.0f) {
            return;
        }
        boolean flip = ((double) f) < 0.0d;
        float stagger = Math.abs(f);
        float min = Float.MAX_VALUE;
        float max = -3.4028235E38f;
        boolean useMotionStagger = false;
        Iterator<String> it = this.mState.keySet().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            String widgetId = it.next();
            WidgetState widgetState = this.mState.get(widgetId);
            if (!Float.isNaN(widgetState.mMotionControl.getMotionStagger())) {
                useMotionStagger = true;
                break;
            }
        }
        if (useMotionStagger) {
            for (String widgetId2 : this.mState.keySet()) {
                WidgetState widgetState2 = this.mState.get(widgetId2);
                float widgetStagger = widgetState2.mMotionControl.getMotionStagger();
                if (!Float.isNaN(widgetStagger)) {
                    min = Math.min(min, widgetStagger);
                    max = Math.max(max, widgetStagger);
                }
            }
            for (String widgetId3 : this.mState.keySet()) {
                WidgetState widgetState3 = this.mState.get(widgetId3);
                Motion f2 = widgetState3.mMotionControl;
                float widgetStagger2 = f2.getMotionStagger();
                if (!Float.isNaN(widgetStagger2)) {
                    float scale = 1.0f / (1.0f - stagger);
                    float offset = stagger - (((widgetStagger2 - min) * stagger) / (max - min));
                    if (flip) {
                        offset = stagger - (((max - widgetStagger2) / (max - min)) * stagger);
                    }
                    f2.setStaggerScale(scale);
                    f2.setStaggerOffset(offset);
                }
            }
            return;
        }
        for (String widgetId4 : this.mState.keySet()) {
            WidgetState widgetState4 = this.mState.get(widgetId4);
            Motion f3 = widgetState4.mMotionControl;
            float x = f3.getFinalX();
            float y = f3.getFinalY();
            float widgetStagger3 = x + y;
            min = Math.min(min, widgetStagger3);
            max = Math.max(max, widgetStagger3);
        }
        for (String widgetId5 : this.mState.keySet()) {
            WidgetState widgetState5 = this.mState.get(widgetId5);
            Motion f4 = widgetState5.mMotionControl;
            float x2 = f4.getFinalX();
            float y2 = f4.getFinalY();
            float widgetStagger4 = x2 + y2;
            float offset2 = stagger - (((widgetStagger4 - min) * stagger) / (max - min));
            if (flip) {
                offset2 = stagger - (((max - widgetStagger4) / (max - min)) * stagger);
            }
            float scale2 = 1.0f / (1.0f - stagger);
            f4.setStaggerScale(scale2);
            f4.setStaggerOffset(offset2);
        }
    }
}
