package com.google.android.material.color;

import android.content.Context;
import android.os.Build;
import java.util.Map;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public interface ColorResourcesOverride {
    boolean applyIfPossible(Context context, Map<Integer, Integer> map);

    Context wrapContextIfPossible(Context context, Map<Integer, Integer> map);

    static ColorResourcesOverride getInstance() {
        if (30 <= Build.VERSION.SDK_INT && Build.VERSION.SDK_INT <= 33) {
            return ResourcesLoaderColorResourcesOverride.getInstance();
        }
        if (Build.VERSION.SDK_INT >= 34) {
            return ResourcesLoaderColorResourcesOverride.getInstance();
        }
        return null;
    }
}
