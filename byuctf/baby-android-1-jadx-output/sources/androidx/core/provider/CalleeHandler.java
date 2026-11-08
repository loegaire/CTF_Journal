package androidx.core.provider;

import android.os.Handler;
import android.os.Looper;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
class CalleeHandler {
    private CalleeHandler() {
    }

    static Handler create() {
        if (Looper.myLooper() == null) {
            Handler handler = new Handler(Looper.getMainLooper());
            return handler;
        }
        Handler handler2 = new Handler();
        return handler2;
    }
}
