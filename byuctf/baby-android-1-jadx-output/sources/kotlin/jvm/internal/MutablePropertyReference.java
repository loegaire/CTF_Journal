package kotlin.jvm.internal;

import kotlin.reflect.KMutableProperty;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public abstract class MutablePropertyReference extends PropertyReference implements KMutableProperty {
    public MutablePropertyReference() {
    }

    public MutablePropertyReference(Object receiver) {
        super(receiver);
    }

    public MutablePropertyReference(Object receiver, Class owner, String name, String signature, int flags) {
        super(receiver, owner, name, signature, flags);
    }
}
