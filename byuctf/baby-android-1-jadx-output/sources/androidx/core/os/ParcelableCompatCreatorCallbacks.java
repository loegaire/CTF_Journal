package androidx.core.os;

import android.os.Parcel;

@Deprecated
/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public interface ParcelableCompatCreatorCallbacks<T> {
    T createFromParcel(Parcel parcel, ClassLoader classLoader);

    T[] newArray(int i);
}
