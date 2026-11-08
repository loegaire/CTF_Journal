package com.google.android.material.carousel;

import android.graphics.RectF;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
interface Maskable {
    RectF getMaskRectF();

    @Deprecated
    float getMaskXPercentage();

    void setMaskRectF(RectF rectF);

    @Deprecated
    void setMaskXPercentage(float f);

    void setOnMaskChangedListener(OnMaskChangedListener onMaskChangedListener);
}
