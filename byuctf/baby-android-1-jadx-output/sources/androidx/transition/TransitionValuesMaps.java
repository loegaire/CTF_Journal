package androidx.transition;

import android.util.SparseArray;
import android.view.View;
import androidx.collection.ArrayMap;
import androidx.collection.LongSparseArray;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
class TransitionValuesMaps {
    final ArrayMap<View, TransitionValues> mViewValues = new ArrayMap<>();
    final SparseArray<View> mIdValues = new SparseArray<>();
    final LongSparseArray<View> mItemIdValues = new LongSparseArray<>();
    final ArrayMap<String, View> mNameValues = new ArrayMap<>();

    TransitionValuesMaps() {
    }
}
