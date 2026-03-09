package androidx.appcompat.widget;

import android.graphics.Insets;
import android.graphics.Rect;
import android.util.Log;
import android.view.View;
import android.view.WindowInsets;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public class ViewUtils {
    static final boolean SDK_LEVEL_SUPPORTS_AUTOSIZE = true;
    private static final String TAG = "ViewUtils";
    private static Method sComputeFitSystemWindowsMethod;
    private static boolean sInitComputeFitSystemWindowsMethod;

    private ViewUtils() {
    }

    public static boolean isLayoutRtl(View view) {
        return view.getLayoutDirection() == 1;
    }

    public static void computeFitSystemWindows(View view, Rect inoutInsets, Rect outLocalInsets) {
        Api29Impl.computeFitSystemWindows(view, inoutInsets, outLocalInsets);
    }

    public static void makeOptionalFitsSystemWindows(View view) {
        try {
            Method method = view.getClass().getMethod("makeOptionalFitsSystemWindows", new Class[0]);
            if (!method.isAccessible()) {
                method.setAccessible(true);
            }
            method.invoke(view, new Object[0]);
        } catch (IllegalAccessException e) {
            Log.d(TAG, "Could not invoke makeOptionalFitsSystemWindows", e);
        } catch (NoSuchMethodException e2) {
            Log.d(TAG, "Could not find method makeOptionalFitsSystemWindows. Oh well...");
        } catch (InvocationTargetException e3) {
            Log.d(TAG, "Could not invoke makeOptionalFitsSystemWindows", e3);
        }
    }

    static class Api29Impl {
        private Api29Impl() {
        }

        static void computeFitSystemWindows(View view, Rect inoutInsets, Rect outLocalInsets) {
            WindowInsets in = new WindowInsets.Builder().setSystemWindowInsets(Insets.of(inoutInsets)).build();
            WindowInsets innerInsets = view.computeSystemWindowInsets(in, outLocalInsets);
            Insets systemWindowInsets = innerInsets.getSystemWindowInsets();
            inoutInsets.set(systemWindowInsets.left, systemWindowInsets.top, systemWindowInsets.right, systemWindowInsets.bottom);
        }
    }
}
