package androidx.transition;

import android.view.ViewGroup;
import java.lang.reflect.Method;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
class ViewGroupUtils {
    private static Method sGetChildDrawingOrderMethod;
    private static boolean sGetChildDrawingOrderMethodFetched;
    private static boolean sTryHiddenSuppressLayout = true;

    static void suppressLayout(ViewGroup group, boolean suppress) {
        Api29Impl.suppressLayout(group, suppress);
    }

    private static void hiddenSuppressLayout(ViewGroup group, boolean suppress) {
        if (sTryHiddenSuppressLayout) {
            try {
                Api29Impl.suppressLayout(group, suppress);
            } catch (NoSuchMethodError e) {
                sTryHiddenSuppressLayout = false;
            }
        }
    }

    static int getChildDrawingOrder(ViewGroup viewGroup, int i) {
        return Api29Impl.getChildDrawingOrder(viewGroup, i);
    }

    private ViewGroupUtils() {
    }

    static class Api29Impl {
        private Api29Impl() {
        }

        static void suppressLayout(ViewGroup viewGroup, boolean suppress) {
            viewGroup.suppressLayout(suppress);
        }

        static int getChildDrawingOrder(ViewGroup viewGroup, int drawingPosition) {
            return viewGroup.getChildDrawingOrder(drawingPosition);
        }
    }
}
