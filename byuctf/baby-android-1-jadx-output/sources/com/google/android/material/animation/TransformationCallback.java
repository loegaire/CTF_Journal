package com.google.android.material.animation;

import android.view.View;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public interface TransformationCallback<T extends View> {
    void onScaleChanged(T t);

    void onTranslationChanged(T t);
}
