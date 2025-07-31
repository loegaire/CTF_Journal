package androidx.core.os;

import java.util.Locale;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
interface LocaleListInterface {
    Locale get(int i);

    Locale getFirstMatch(String[] strArr);

    Object getLocaleList();

    int indexOf(Locale locale);

    boolean isEmpty();

    int size();

    String toLanguageTags();
}
