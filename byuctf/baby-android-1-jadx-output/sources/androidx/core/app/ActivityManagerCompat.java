package androidx.core.app;

import android.app.ActivityManager;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public final class ActivityManagerCompat {
    private ActivityManagerCompat() {
    }

    public static boolean isLowRamDevice(ActivityManager activityManager) {
        return activityManager.isLowRamDevice();
    }
}
