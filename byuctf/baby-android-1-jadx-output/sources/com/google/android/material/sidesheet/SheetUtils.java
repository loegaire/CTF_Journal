package com.google.android.material.sidesheet;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
final class SheetUtils {
    private SheetUtils() {
    }

    static boolean isSwipeMostlyHorizontal(float xVelocity, float yVelocity) {
        return Math.abs(xVelocity) > Math.abs(yVelocity);
    }
}
