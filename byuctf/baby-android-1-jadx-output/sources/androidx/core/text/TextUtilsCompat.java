package androidx.core.text;

import android.text.TextUtils;
import java.util.Locale;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public final class TextUtilsCompat {
    public static String htmlEncode(String s) {
        return TextUtils.htmlEncode(s);
    }

    public static int getLayoutDirectionFromLocale(Locale locale) {
        return TextUtils.getLayoutDirectionFromLocale(locale);
    }

    private TextUtilsCompat() {
    }
}
