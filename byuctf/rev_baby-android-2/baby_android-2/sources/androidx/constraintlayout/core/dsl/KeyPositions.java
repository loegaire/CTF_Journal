package androidx.constraintlayout.core.dsl;

import androidx.constraintlayout.core.motion.utils.TypedValues;
import java.util.Arrays;

/* loaded from: classes.dex */
public class KeyPositions extends Keys {
    private int[] mFrames;
    private String[] mTarget;
    private String mTransitionEasing = null;
    private Type mPositionType = null;
    private float[] mPercentWidth = null;
    private float[] mPercentHeight = null;
    private float[] mPercentX = null;
    private float[] mPercentY = null;

    public enum Type {
        CARTESIAN,
        SCREEN,
        PATH
    }

    public KeyPositions(int numOfFrames, String... targets) {
        this.mTarget = null;
        this.mFrames = null;
        this.mTarget = targets;
        this.mFrames = new int[numOfFrames];
        float gap = 100.0f / (r0.length + 1);
        int i = 0;
        while (true) {
            int[] iArr = this.mFrames;
            if (i < iArr.length) {
                iArr[i] = (int) ((i * gap) + gap);
                i++;
            } else {
                return;
            }
        }
    }

    public String getTransitionEasing() {
        return this.mTransitionEasing;
    }

    public void setTransitionEasing(String transitionEasing) {
        this.mTransitionEasing = transitionEasing;
    }

    public int[] getFrames() {
        return this.mFrames;
    }

    public void setFrames(int... frames) {
        this.mFrames = frames;
    }

    public float[] getPercentWidth() {
        return this.mPercentWidth;
    }

    public void setPercentWidth(float... percentWidth) {
        this.mPercentWidth = percentWidth;
    }

    public float[] getPercentHeight() {
        return this.mPercentHeight;
    }

    public void setPercentHeight(float... percentHeight) {
        this.mPercentHeight = percentHeight;
    }

    public float[] getPercentX() {
        return this.mPercentX;
    }

    public void setPercentX(float... percentX) {
        this.mPercentX = percentX;
    }

    public float[] getPercentY() {
        return this.mPercentY;
    }

    public void setPercentY(float... percentY) {
        this.mPercentY = percentY;
    }

    public Type getPositionType() {
        return this.mPositionType;
    }

    public void setPositionType(Type positionType) {
        this.mPositionType = positionType;
    }

    public String[] getTarget() {
        return this.mTarget;
    }

    public String toString() {
        StringBuilder ret = new StringBuilder();
        ret.append("KeyPositions:{\n");
        append(ret, TypedValues.AttributesType.S_TARGET, this.mTarget);
        ret.append("frame:").append(Arrays.toString(this.mFrames)).append(",\n");
        if (this.mPositionType != null) {
            ret.append("type:'").append(this.mPositionType).append("',\n");
        }
        append(ret, "easing", this.mTransitionEasing);
        append(ret, "percentX", this.mPercentX);
        append(ret, "percentX", this.mPercentY);
        append(ret, "percentWidth", this.mPercentWidth);
        append(ret, "percentHeight", this.mPercentHeight);
        ret.append("},\n");
        return ret.toString();
    }
}
