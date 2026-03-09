package androidx.constraintlayout.core.motion;

import androidx.constraintlayout.core.motion.utils.Easing;
import androidx.constraintlayout.core.motion.utils.Rect;
import androidx.constraintlayout.core.motion.utils.SplineSet;
import androidx.constraintlayout.core.motion.utils.Utils;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Set;

/* loaded from: classes.dex */
class MotionConstrainedPoint implements Comparable<MotionConstrainedPoint> {
    static final int CARTESIAN = 2;
    public static final boolean DEBUG = false;
    static final int PERPENDICULAR = 1;
    public static final String TAG = "MotionPaths";
    static String[] sNames = {"position", "x", "y", "width", "height", "pathRotate"};
    private float mHeight;
    private Easing mKeyFrameEasing;
    private float mPosition;
    int mVisibility;
    private float mWidth;
    private float mX;
    private float mY;
    private float mAlpha = 1.0f;
    int mVisibilityMode = 0;
    private boolean mApplyElevation = false;
    private float mElevation = 0.0f;
    private float mRotation = 0.0f;
    private float mRotationX = 0.0f;
    public float rotationY = 0.0f;
    private float mScaleX = 1.0f;
    private float mScaleY = 1.0f;
    private float mPivotX = Float.NaN;
    private float mPivotY = Float.NaN;
    private float mTranslationX = 0.0f;
    private float mTranslationY = 0.0f;
    private float mTranslationZ = 0.0f;
    private int mDrawPath = 0;
    private float mPathRotate = Float.NaN;
    private float mProgress = Float.NaN;
    private int mAnimateRelativeTo = -1;
    LinkedHashMap<String, CustomVariable> mCustomVariable = new LinkedHashMap<>();
    int mMode = 0;
    double[] mTempValue = new double[18];
    double[] mTempDelta = new double[18];

    MotionConstrainedPoint() {
    }

    private boolean diff(float a, float b) {
        return (Float.isNaN(a) || Float.isNaN(b)) ? Float.isNaN(a) != Float.isNaN(b) : Math.abs(a - b) > 1.0E-6f;
    }

    void different(MotionConstrainedPoint points, HashSet<String> keySet) {
        if (diff(this.mAlpha, points.mAlpha)) {
            keySet.add("alpha");
        }
        if (diff(this.mElevation, points.mElevation)) {
            keySet.add("translationZ");
        }
        int i = this.mVisibility;
        int i2 = points.mVisibility;
        if (i != i2 && this.mVisibilityMode == 0 && (i == 4 || i2 == 4)) {
            keySet.add("alpha");
        }
        if (diff(this.mRotation, points.mRotation)) {
            keySet.add("rotationZ");
        }
        if (!Float.isNaN(this.mPathRotate) || !Float.isNaN(points.mPathRotate)) {
            keySet.add("pathRotate");
        }
        if (!Float.isNaN(this.mProgress) || !Float.isNaN(points.mProgress)) {
            keySet.add("progress");
        }
        if (diff(this.mRotationX, points.mRotationX)) {
            keySet.add("rotationX");
        }
        if (diff(this.rotationY, points.rotationY)) {
            keySet.add("rotationY");
        }
        if (diff(this.mPivotX, points.mPivotX)) {
            keySet.add("pivotX");
        }
        if (diff(this.mPivotY, points.mPivotY)) {
            keySet.add("pivotY");
        }
        if (diff(this.mScaleX, points.mScaleX)) {
            keySet.add("scaleX");
        }
        if (diff(this.mScaleY, points.mScaleY)) {
            keySet.add("scaleY");
        }
        if (diff(this.mTranslationX, points.mTranslationX)) {
            keySet.add("translationX");
        }
        if (diff(this.mTranslationY, points.mTranslationY)) {
            keySet.add("translationY");
        }
        if (diff(this.mTranslationZ, points.mTranslationZ)) {
            keySet.add("translationZ");
        }
        if (diff(this.mElevation, points.mElevation)) {
            keySet.add("elevation");
        }
    }

    void different(MotionConstrainedPoint points, boolean[] mask, String[] custom) {
        int c = 0 + 1;
        mask[0] = mask[0] | diff(this.mPosition, points.mPosition);
        int c2 = c + 1;
        mask[c] = mask[c] | diff(this.mX, points.mX);
        int c3 = c2 + 1;
        mask[c2] = mask[c2] | diff(this.mY, points.mY);
        int c4 = c3 + 1;
        mask[c3] = mask[c3] | diff(this.mWidth, points.mWidth);
        int i = c4 + 1;
        mask[c4] = mask[c4] | diff(this.mHeight, points.mHeight);
    }

    void fillStandard(double[] data, int[] toUse) {
        float[] set = {this.mPosition, this.mX, this.mY, this.mWidth, this.mHeight, this.mAlpha, this.mElevation, this.mRotation, this.mRotationX, this.rotationY, this.mScaleX, this.mScaleY, this.mPivotX, this.mPivotY, this.mTranslationX, this.mTranslationY, this.mTranslationZ, this.mPathRotate};
        int c = 0;
        for (int i = 0; i < toUse.length; i++) {
            if (toUse[i] < set.length) {
                data[c] = set[toUse[i]];
                c++;
            }
        }
    }

    boolean hasCustomData(String name) {
        return this.mCustomVariable.containsKey(name);
    }

    int getCustomDataCount(String name) {
        return this.mCustomVariable.get(name).numberOfInterpolatedValues();
    }

    int getCustomData(String name, double[] value, int offset) {
        CustomVariable a = this.mCustomVariable.get(name);
        if (a.numberOfInterpolatedValues() == 1) {
            value[offset] = a.getValueToInterpolate();
            return 1;
        }
        int n = a.numberOfInterpolatedValues();
        float[] f = new float[n];
        a.getValuesToInterpolate(f);
        int i = 0;
        while (i < n) {
            value[offset] = f[i];
            i++;
            offset++;
        }
        return n;
    }

    void setBounds(float x, float y, float w, float h) {
        this.mX = x;
        this.mY = y;
        this.mWidth = w;
        this.mHeight = h;
    }

    @Override // java.lang.Comparable
    public int compareTo(MotionConstrainedPoint o) {
        return Float.compare(this.mPosition, o.mPosition);
    }

    public void applyParameters(MotionWidget view) {
        this.mVisibility = view.getVisibility();
        this.mAlpha = view.getVisibility() != 4 ? 0.0f : view.getAlpha();
        this.mApplyElevation = false;
        this.mRotation = view.getRotationZ();
        this.mRotationX = view.getRotationX();
        this.rotationY = view.getRotationY();
        this.mScaleX = view.getScaleX();
        this.mScaleY = view.getScaleY();
        this.mPivotX = view.getPivotX();
        this.mPivotY = view.getPivotY();
        this.mTranslationX = view.getTranslationX();
        this.mTranslationY = view.getTranslationY();
        this.mTranslationZ = view.getTranslationZ();
        Set<String> at = view.getCustomAttributeNames();
        for (String s : at) {
            CustomVariable attr = view.getCustomAttribute(s);
            if (attr != null && attr.isContinuous()) {
                this.mCustomVariable.put(s, attr);
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public void addValues(HashMap<String, SplineSet> splines, int mFramePosition) {
        char c;
        for (String s : splines.keySet()) {
            SplineSet ViewSpline = splines.get(s);
            switch (s.hashCode()) {
                case -1249320806:
                    if (s.equals("rotationX")) {
                        c = 2;
                        break;
                    }
                    c = 65535;
                    break;
                case -1249320805:
                    if (s.equals("rotationY")) {
                        c = 3;
                        break;
                    }
                    c = 65535;
                    break;
                case -1249320804:
                    if (s.equals("rotationZ")) {
                        c = 1;
                        break;
                    }
                    c = 65535;
                    break;
                case -1225497657:
                    if (s.equals("translationX")) {
                        c = '\n';
                        break;
                    }
                    c = 65535;
                    break;
                case -1225497656:
                    if (s.equals("translationY")) {
                        c = 11;
                        break;
                    }
                    c = 65535;
                    break;
                case -1225497655:
                    if (s.equals("translationZ")) {
                        c = '\f';
                        break;
                    }
                    c = 65535;
                    break;
                case -1001078227:
                    if (s.equals("progress")) {
                        c = 7;
                        break;
                    }
                    c = 65535;
                    break;
                case -987906986:
                    if (s.equals("pivotX")) {
                        c = 4;
                        break;
                    }
                    c = 65535;
                    break;
                case -987906985:
                    if (s.equals("pivotY")) {
                        c = 5;
                        break;
                    }
                    c = 65535;
                    break;
                case -908189618:
                    if (s.equals("scaleX")) {
                        c = '\b';
                        break;
                    }
                    c = 65535;
                    break;
                case -908189617:
                    if (s.equals("scaleY")) {
                        c = '\t';
                        break;
                    }
                    c = 65535;
                    break;
                case 92909918:
                    if (s.equals("alpha")) {
                        c = 0;
                        break;
                    }
                    c = 65535;
                    break;
                case 803192288:
                    if (s.equals("pathRotate")) {
                        c = 6;
                        break;
                    }
                    c = 65535;
                    break;
                default:
                    c = 65535;
                    break;
            }
            switch (c) {
                case 0:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mAlpha) ? 1.0f : this.mAlpha);
                    break;
                case 1:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mRotation) ? 0.0f : this.mRotation);
                    break;
                case 2:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mRotationX) ? 0.0f : this.mRotationX);
                    break;
                case 3:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.rotationY) ? 0.0f : this.rotationY);
                    break;
                case 4:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mPivotX) ? 0.0f : this.mPivotX);
                    break;
                case 5:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mPivotY) ? 0.0f : this.mPivotY);
                    break;
                case 6:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mPathRotate) ? 0.0f : this.mPathRotate);
                    break;
                case 7:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mProgress) ? 0.0f : this.mProgress);
                    break;
                case '\b':
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mScaleX) ? 1.0f : this.mScaleX);
                    break;
                case '\t':
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mScaleY) ? 1.0f : this.mScaleY);
                    break;
                case '\n':
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mTranslationX) ? 0.0f : this.mTranslationX);
                    break;
                case 11:
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mTranslationY) ? 0.0f : this.mTranslationY);
                    break;
                case '\f':
                    ViewSpline.setPoint(mFramePosition, Float.isNaN(this.mTranslationZ) ? 0.0f : this.mTranslationZ);
                    break;
                default:
                    if (s.startsWith("CUSTOM")) {
                        String customName = s.split(",")[1];
                        if (this.mCustomVariable.containsKey(customName)) {
                            CustomVariable custom = this.mCustomVariable.get(customName);
                            if (ViewSpline instanceof SplineSet.CustomSpline) {
                                ((SplineSet.CustomSpline) ViewSpline).setPoint(mFramePosition, custom);
                                break;
                            } else {
                                Utils.loge("MotionPaths", s + " ViewSpline not a CustomSet frame = " + mFramePosition + ", value" + custom.getValueToInterpolate() + ViewSpline);
                                break;
                            }
                        } else {
                            break;
                        }
                    } else {
                        Utils.loge("MotionPaths", "UNKNOWN spline " + s);
                        break;
                    }
            }
        }
    }

    public void setState(MotionWidget view) {
        setBounds(view.getX(), view.getY(), view.getWidth(), view.getHeight());
        applyParameters(view);
    }

    public void setState(Rect rect, MotionWidget view, int rotation, float prevous) {
        setBounds(rect.left, rect.top, rect.width(), rect.height());
        applyParameters(view);
        this.mPivotX = Float.NaN;
        this.mPivotY = Float.NaN;
        switch (rotation) {
            case 1:
                this.mRotation = prevous - 90.0f;
                break;
            case 2:
                this.mRotation = 90.0f + prevous;
                break;
        }
    }
}
