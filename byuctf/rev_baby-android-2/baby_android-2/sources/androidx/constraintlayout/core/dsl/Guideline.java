package androidx.constraintlayout.core.dsl;

import androidx.constraintlayout.core.dsl.Helper;

/* loaded from: classes.dex */
public abstract class Guideline extends Helper {
    private int mEnd;
    private float mPercent;
    private int mStart;

    Guideline(String name) {
        super(name, new Helper.HelperType(""));
        this.mStart = Integer.MIN_VALUE;
        this.mEnd = Integer.MIN_VALUE;
        this.mPercent = Float.NaN;
    }

    public int getStart() {
        return this.mStart;
    }

    public void setStart(int start) {
        this.mStart = start;
        this.configMap.put("start", String.valueOf(this.mStart));
    }

    public int getEnd() {
        return this.mEnd;
    }

    public void setEnd(int end) {
        this.mEnd = end;
        this.configMap.put("end", String.valueOf(this.mEnd));
    }

    public float getPercent() {
        return this.mPercent;
    }

    public void setPercent(float percent) {
        this.mPercent = percent;
        this.configMap.put("percent", String.valueOf(this.mPercent));
    }
}
