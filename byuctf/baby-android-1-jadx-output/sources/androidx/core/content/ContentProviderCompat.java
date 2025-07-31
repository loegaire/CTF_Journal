package androidx.core.content;

import android.content.ContentProvider;
import android.content.Context;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public final class ContentProviderCompat {
    private ContentProviderCompat() {
    }

    public static Context requireContext(ContentProvider provider) {
        Context ctx = provider.getContext();
        if (ctx == null) {
            throw new IllegalStateException("Cannot find context from the provider.");
        }
        return ctx;
    }
}
