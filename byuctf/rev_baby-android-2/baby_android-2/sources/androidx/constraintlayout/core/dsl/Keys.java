package androidx.constraintlayout.core.dsl;

import java.util.Arrays;

/* loaded from: classes.dex */
public class Keys {
    protected String unpack(String[] str) {
        StringBuilder ret = new StringBuilder("[");
        int i = 0;
        while (i < str.length) {
            ret.append(i == 0 ? "'" : ",'");
            ret.append(str[i]);
            ret.append("'");
            i++;
        }
        ret.append("]");
        return ret.toString();
    }

    protected void append(StringBuilder builder, String name, int value) {
        if (value != Integer.MIN_VALUE) {
            builder.append(name);
            builder.append(":'").append(value).append("',\n");
        }
    }

    protected void append(StringBuilder builder, String name, String value) {
        if (value != null) {
            builder.append(name);
            builder.append(":'").append(value).append("',\n");
        }
    }

    protected void append(StringBuilder builder, String name, float value) {
        if (Float.isNaN(value)) {
            return;
        }
        builder.append(name);
        builder.append(":").append(value).append(",\n");
    }

    protected void append(StringBuilder builder, String name, String[] array) {
        if (array != null) {
            builder.append(name);
            builder.append(":").append(unpack(array)).append(",\n");
        }
    }

    protected void append(StringBuilder builder, String name, float[] array) {
        if (array != null) {
            builder.append(name);
            builder.append("percentWidth:").append(Arrays.toString(array)).append(",\n");
        }
    }
}
