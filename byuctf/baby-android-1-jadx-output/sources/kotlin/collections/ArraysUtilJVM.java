package kotlin.collections;

import java.util.Arrays;
import java.util.List;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
class ArraysUtilJVM {
    ArraysUtilJVM() {
    }

    static <T> List<T> asList(T[] array) {
        return Arrays.asList(array);
    }
}
