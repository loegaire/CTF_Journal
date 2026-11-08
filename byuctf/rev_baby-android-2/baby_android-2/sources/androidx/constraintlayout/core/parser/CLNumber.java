package androidx.constraintlayout.core.parser;

/* loaded from: classes.dex */
public class CLNumber extends CLElement {
    float mValue;

    public CLNumber(char[] content) {
        super(content);
        this.mValue = Float.NaN;
    }

    public CLNumber(float value) {
        super(null);
        this.mValue = Float.NaN;
        this.mValue = value;
    }

    public static CLElement allocate(char[] content) {
        return new CLNumber(content);
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    protected String toJSON() {
        float value = getFloat();
        int intValue = (int) value;
        if (intValue == value) {
            return "" + intValue;
        }
        return "" + value;
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    protected String toFormattedJSON(int indent, int forceIndent) {
        StringBuilder json = new StringBuilder();
        addIndent(json, indent);
        float value = getFloat();
        int intValue = (int) value;
        if (intValue == value) {
            json.append(intValue);
        } else {
            json.append(value);
        }
        return json.toString();
    }

    public boolean isInt() {
        float value = getFloat();
        int intValue = (int) value;
        return ((float) intValue) == value;
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    public int getInt() {
        if (Float.isNaN(this.mValue) && hasContent()) {
            this.mValue = Integer.parseInt(content());
        }
        return (int) this.mValue;
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    public float getFloat() {
        if (Float.isNaN(this.mValue) && hasContent()) {
            this.mValue = Float.parseFloat(content());
        }
        return this.mValue;
    }

    public void putValue(float value) {
        this.mValue = value;
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof CLNumber)) {
            return false;
        }
        float thisFloat = getFloat();
        float otherFloat = ((CLNumber) obj).getFloat();
        return (Float.isNaN(thisFloat) && Float.isNaN(otherFloat)) || thisFloat == otherFloat;
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    public int hashCode() {
        int result = super.hashCode();
        int i = result * 31;
        float f = this.mValue;
        int result2 = i + (f != 0.0f ? Float.floatToIntBits(f) : 0);
        return result2;
    }
}
