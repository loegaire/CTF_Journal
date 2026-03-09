package androidx.constraintlayout.core.dsl;

import androidx.constraintlayout.core.motion.utils.TypedValues;

/* loaded from: classes.dex */
public class KeyCycles extends KeyAttributes {
    private float[] mWaveOffset;
    private float[] mWavePeriod;
    private float[] mWavePhase;
    private Wave mWaveShape;

    public enum Wave {
        SIN,
        SQUARE,
        TRIANGLE,
        SAW,
        REVERSE_SAW,
        COS
    }

    KeyCycles(int numOfFrames, String... targets) {
        super(numOfFrames, targets);
        this.mWaveShape = null;
        this.mWavePeriod = null;
        this.mWaveOffset = null;
        this.mWavePhase = null;
        this.TYPE = TypedValues.CycleType.NAME;
    }

    public Wave getWaveShape() {
        return this.mWaveShape;
    }

    public void setWaveShape(Wave waveShape) {
        this.mWaveShape = waveShape;
    }

    public float[] getWavePeriod() {
        return this.mWavePeriod;
    }

    public void setWavePeriod(float... wavePeriod) {
        this.mWavePeriod = wavePeriod;
    }

    public float[] getWaveOffset() {
        return this.mWaveOffset;
    }

    public void setWaveOffset(float... waveOffset) {
        this.mWaveOffset = waveOffset;
    }

    public float[] getWavePhase() {
        return this.mWavePhase;
    }

    public void setWavePhase(float... wavePhase) {
        this.mWavePhase = wavePhase;
    }

    @Override // androidx.constraintlayout.core.dsl.KeyAttributes
    protected void attributesToString(StringBuilder builder) {
        super.attributesToString(builder);
        if (this.mWaveShape != null) {
            builder.append("shape:'").append(this.mWaveShape).append("',\n");
        }
        append(builder, TypedValues.CycleType.S_WAVE_PERIOD, this.mWavePeriod);
        append(builder, TypedValues.CycleType.S_WAVE_OFFSET, this.mWaveOffset);
        append(builder, TypedValues.CycleType.S_WAVE_PHASE, this.mWavePhase);
    }
}
