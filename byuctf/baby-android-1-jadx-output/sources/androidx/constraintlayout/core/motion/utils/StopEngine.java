package androidx.constraintlayout.core.motion.utils;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public interface StopEngine {
    String debug(String str, float f);

    float getInterpolation(float f);

    float getVelocity();

    float getVelocity(float f);

    boolean isStopped();
}
