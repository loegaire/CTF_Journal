package com.google.android.material.transition;

import android.graphics.RectF;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
interface FitModeEvaluator {
    void applyMask(RectF rectF, float f, FitModeResult fitModeResult);

    FitModeResult evaluate(float f, float f2, float f3, float f4, float f5, float f6, float f7);

    boolean shouldMaskStartBounds(FitModeResult fitModeResult);
}
