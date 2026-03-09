package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ElementType.METHOD})
@Retention(RetentionPolicy.RUNTIME)
@Deprecated
/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public @interface OnLifecycleEvent {
    Lifecycle.Event value();
}
