package androidx.core.net;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public class ParseException extends RuntimeException {
    public final String response;

    ParseException(String response) {
        super(response);
        this.response = response;
    }
}
