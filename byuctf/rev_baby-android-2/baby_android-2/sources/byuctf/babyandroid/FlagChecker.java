package byuctf.babyandroid;

/* loaded from: classes4.dex */
public class FlagChecker {
    public static native boolean check(String str);

    static {
        System.loadLibrary("babyandroid");
    }
}
