package androidx.core.widget;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public interface TintableCompoundDrawablesView {
    ColorStateList getSupportCompoundDrawablesTintList();

    PorterDuff.Mode getSupportCompoundDrawablesTintMode();

    void setSupportCompoundDrawablesTintList(ColorStateList colorStateList);

    void setSupportCompoundDrawablesTintMode(PorterDuff.Mode mode);
}
