package androidx.transition;

import java.util.Arrays;

/* loaded from: classes.dex */
class VelocityTracker1D {
    private static final int ASSUME_POINTER_MOVE_STOPPED_MILLIS = 40;
    private static final int HISTORY_SIZE = 20;
    private static final int HORIZON_MILLIS = 100;
    private float[] mDataSamples = new float[20];
    private int mIndex = 0;
    private long[] mTimeSamples;

    VelocityTracker1D() {
        long[] jArr = new long[20];
        this.mTimeSamples = jArr;
        Arrays.fill(jArr, Long.MIN_VALUE);
    }

    public void addDataPoint(long timeMillis, float data) {
        int i = (this.mIndex + 1) % 20;
        this.mIndex = i;
        this.mTimeSamples[i] = timeMillis;
        this.mDataSamples[i] = data;
    }

    public void resetTracking() {
        this.mIndex = 0;
        Arrays.fill(this.mTimeSamples, Long.MIN_VALUE);
        Arrays.fill(this.mDataSamples, 0.0f);
    }

    float calculateVelocity() {
        int sampleCount;
        int index;
        int index2;
        int sampleCount2 = 0;
        int index3 = this.mIndex;
        float f = 0.0f;
        if (index3 == 0 && this.mTimeSamples[index3] == Long.MIN_VALUE) {
            return 0.0f;
        }
        long newestTime = this.mTimeSamples[index3];
        long previousTime = newestTime;
        do {
            long sampleTime = this.mTimeSamples[index3];
            if (sampleTime != Long.MIN_VALUE) {
                float age = newestTime - sampleTime;
                float delta = Math.abs(sampleTime - previousTime);
                previousTime = sampleTime;
                if (age > 100.0f || delta > 40.0f) {
                    break;
                }
                index3 = (index3 == 0 ? 20 : index3) - 1;
                sampleCount2++;
            } else {
                break;
            }
        } while (sampleCount2 < 20);
        if (sampleCount2 < 2) {
            return 0.0f;
        }
        if (sampleCount2 == 2) {
            int i = this.mIndex;
            int prevIndex = i == 0 ? 19 : i - 1;
            long[] jArr = this.mTimeSamples;
            float timeDiff = jArr[i] - jArr[prevIndex];
            if (timeDiff == 0.0f) {
                return 0.0f;
            }
            float[] fArr = this.mDataSamples;
            float dataDiff = fArr[i] - fArr[prevIndex];
            return (dataDiff / timeDiff) * 1000.0f;
        }
        float work = 0.0f;
        int i2 = this.mIndex;
        int startIndex = (((i2 - sampleCount2) + 20) + 1) % 20;
        int endIndex = ((i2 + 1) + 20) % 20;
        long previousTime2 = this.mTimeSamples[startIndex];
        float previousData = this.mDataSamples[startIndex];
        int i3 = (startIndex + 1) % 20;
        while (i3 != endIndex) {
            long time = this.mTimeSamples[i3];
            int i4 = i3;
            long timeDelta = time - previousTime2;
            if (timeDelta == f) {
                sampleCount = sampleCount2;
                index = index3;
                index2 = i4;
            } else {
                float data = this.mDataSamples[i4];
                float vPrev = kineticEnergyToVelocity(work);
                float dataPointsDelta = data - previousData;
                float vCurr = dataPointsDelta / timeDelta;
                work += (vCurr - vPrev) * Math.abs(vCurr);
                sampleCount = sampleCount2;
                int sampleCount3 = startIndex + 1;
                index = index3;
                index2 = i4;
                if (index2 == sampleCount3) {
                    work *= 0.5f;
                }
                previousTime2 = time;
                previousData = data;
            }
            i3 = (index2 + 1) % 20;
            sampleCount2 = sampleCount;
            index3 = index;
            f = 0.0f;
        }
        return kineticEnergyToVelocity(work) * 1000.0f;
    }

    private float kineticEnergyToVelocity(float kineticEnergy) {
        return (float) (Math.signum(kineticEnergy) * Math.sqrt(Math.abs(kineticEnergy) * 2.0f));
    }
}
