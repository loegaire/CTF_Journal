package androidx.constraintlayout.core.dsl;

import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes.dex */
public class Ref {
    private String mId;
    private float mPostMargin;
    private float mPreMargin;
    private float mWeight;

    Ref(String id) {
        this.mWeight = Float.NaN;
        this.mPreMargin = Float.NaN;
        this.mPostMargin = Float.NaN;
        this.mId = id;
    }

    Ref(String id, float weight) {
        this.mWeight = Float.NaN;
        this.mPreMargin = Float.NaN;
        this.mPostMargin = Float.NaN;
        this.mId = id;
        this.mWeight = weight;
    }

    Ref(String id, float weight, float preMargin) {
        this.mWeight = Float.NaN;
        this.mPreMargin = Float.NaN;
        this.mPostMargin = Float.NaN;
        this.mId = id;
        this.mWeight = weight;
        this.mPreMargin = preMargin;
    }

    Ref(String id, float weight, float preMargin, float postMargin) {
        this.mWeight = Float.NaN;
        this.mPreMargin = Float.NaN;
        this.mPostMargin = Float.NaN;
        this.mId = id;
        this.mWeight = weight;
        this.mPreMargin = preMargin;
        this.mPostMargin = postMargin;
    }

    public String getId() {
        return this.mId;
    }

    public void setId(String id) {
        this.mId = id;
    }

    public float getWeight() {
        return this.mWeight;
    }

    public void setWeight(float weight) {
        this.mWeight = weight;
    }

    public float getPreMargin() {
        return this.mPreMargin;
    }

    public void setPreMargin(float preMargin) {
        this.mPreMargin = preMargin;
    }

    public float getPostMargin() {
        return this.mPostMargin;
    }

    public void setPostMargin(float postMargin) {
        this.mPostMargin = postMargin;
    }

    public static float parseFloat(Object obj) {
        try {
            float val = Float.parseFloat(obj.toString());
            return val;
        } catch (Exception e) {
            return Float.NaN;
        }
    }

    public static Ref parseStringToRef(String str) {
        String[] values = str.replaceAll("[\\[\\]\\']", "").split(",");
        if (values.length == 0) {
            return null;
        }
        Object[] arr = new Object[4];
        for (int i = 0; i < values.length && i < 4; i++) {
            arr[i] = values[i];
        }
        return new Ref(arr[0].toString().replace("'", ""), parseFloat(arr[1]), parseFloat(arr[2]), parseFloat(arr[3]));
    }

    public static void addStringToReferences(String str, ArrayList<Ref> refs) {
        if (str == null || str.length() == 0) {
            return;
        }
        Object[] arr = new Object[4];
        StringBuilder builder = new StringBuilder();
        int squareBrackets = 0;
        int varCount = 0;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            switch (ch) {
                case ' ':
                case '\'':
                    break;
                case ',':
                    if (varCount < 3) {
                        arr[varCount] = builder.toString();
                        builder.setLength(0);
                        varCount++;
                    }
                    if (squareBrackets == 1 && arr[0] != null) {
                        refs.add(new Ref(arr[0].toString()));
                        varCount = 0;
                        arr[0] = null;
                        break;
                    }
                    break;
                case '[':
                    squareBrackets++;
                    break;
                case ']':
                    if (squareBrackets > 0) {
                        squareBrackets--;
                        arr[varCount] = builder.toString();
                        builder.setLength(0);
                        if (arr[0] != null) {
                            refs.add(new Ref(arr[0].toString(), parseFloat(arr[1]), parseFloat(arr[2]), parseFloat(arr[3])));
                            varCount = 0;
                            Arrays.fill(arr, (Object) null);
                            break;
                        } else {
                            break;
                        }
                    } else {
                        break;
                    }
                default:
                    builder.append(ch);
                    break;
            }
        }
    }

    public String toString() {
        String str = this.mId;
        if (str == null || str.length() == 0) {
            return "";
        }
        StringBuilder ret = new StringBuilder();
        boolean isArray = false;
        if (!Float.isNaN(this.mWeight) || !Float.isNaN(this.mPreMargin) || !Float.isNaN(this.mPostMargin)) {
            isArray = true;
        }
        if (isArray) {
            ret.append("[");
        }
        ret.append("'").append(this.mId).append("'");
        if (!Float.isNaN(this.mPostMargin)) {
            ret.append(",").append(!Float.isNaN(this.mWeight) ? this.mWeight : 0.0f).append(",");
            ret.append(Float.isNaN(this.mPreMargin) ? 0.0f : this.mPreMargin).append(",");
            ret.append(this.mPostMargin);
        } else if (!Float.isNaN(this.mPreMargin)) {
            ret.append(",").append(Float.isNaN(this.mWeight) ? 0.0f : this.mWeight).append(",");
            ret.append(this.mPreMargin);
        } else if (!Float.isNaN(this.mWeight)) {
            ret.append(",").append(this.mWeight);
        }
        if (isArray) {
            ret.append("]");
        }
        ret.append(",");
        return ret.toString();
    }
}
