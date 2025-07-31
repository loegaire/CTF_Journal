package androidx.constraintlayout.core.motion.utils;

import androidx.constraintlayout.core.motion.CustomAttribute;
import androidx.constraintlayout.core.motion.CustomVariable;
import java.util.Arrays;

/* loaded from: classes.dex */
public class KeyFrameArray {

    public static class CustomArray {
        private static final int EMPTY = 999;
        int mCount;
        int[] mKeys = new int[TypedValues.TYPE_TARGET];
        CustomAttribute[] mValues = new CustomAttribute[TypedValues.TYPE_TARGET];

        public CustomArray() {
            clear();
        }

        public void clear() {
            Arrays.fill(this.mKeys, EMPTY);
            Arrays.fill(this.mValues, (Object) null);
            this.mCount = 0;
        }

        public void dump() {
            System.out.println("V: " + Arrays.toString(Arrays.copyOf(this.mKeys, this.mCount)));
            System.out.print("K: [");
            int i = 0;
            while (i < this.mCount) {
                System.out.print((i == 0 ? "" : ", ") + valueAt(i));
                i++;
            }
            System.out.println("]");
        }

        public int size() {
            return this.mCount;
        }

        public CustomAttribute valueAt(int i) {
            return this.mValues[this.mKeys[i]];
        }

        public int keyAt(int i) {
            return this.mKeys[i];
        }

        public void append(int position, CustomAttribute value) {
            if (this.mValues[position] != null) {
                remove(position);
            }
            this.mValues[position] = value;
            int[] iArr = this.mKeys;
            int i = this.mCount;
            this.mCount = i + 1;
            iArr[i] = position;
            Arrays.sort(iArr);
        }

        public void remove(int position) {
            this.mValues[position] = null;
            int j = 0;
            int i = 0;
            while (true) {
                int i2 = this.mCount;
                if (i < i2) {
                    int[] iArr = this.mKeys;
                    if (position == iArr[i]) {
                        iArr[i] = EMPTY;
                        j++;
                    }
                    if (i != j) {
                        iArr[i] = iArr[j];
                    }
                    j++;
                    i++;
                } else {
                    this.mCount = i2 - 1;
                    return;
                }
            }
        }
    }

    public static class CustomVar {
        private static final int EMPTY = 999;
        int mCount;
        int[] mKeys = new int[TypedValues.TYPE_TARGET];
        CustomVariable[] mValues = new CustomVariable[TypedValues.TYPE_TARGET];

        public CustomVar() {
            clear();
        }

        public void clear() {
            Arrays.fill(this.mKeys, EMPTY);
            Arrays.fill(this.mValues, (Object) null);
            this.mCount = 0;
        }

        public void dump() {
            System.out.println("V: " + Arrays.toString(Arrays.copyOf(this.mKeys, this.mCount)));
            System.out.print("K: [");
            int i = 0;
            while (i < this.mCount) {
                System.out.print((i == 0 ? "" : ", ") + valueAt(i));
                i++;
            }
            System.out.println("]");
        }

        public int size() {
            return this.mCount;
        }

        public CustomVariable valueAt(int i) {
            return this.mValues[this.mKeys[i]];
        }

        public int keyAt(int i) {
            return this.mKeys[i];
        }

        public void append(int position, CustomVariable value) {
            if (this.mValues[position] != null) {
                remove(position);
            }
            this.mValues[position] = value;
            int[] iArr = this.mKeys;
            int i = this.mCount;
            this.mCount = i + 1;
            iArr[i] = position;
            Arrays.sort(iArr);
        }

        public void remove(int position) {
            this.mValues[position] = null;
            int j = 0;
            int i = 0;
            while (true) {
                int i2 = this.mCount;
                if (i < i2) {
                    int[] iArr = this.mKeys;
                    if (position == iArr[i]) {
                        iArr[i] = EMPTY;
                        j++;
                    }
                    if (i != j) {
                        iArr[i] = iArr[j];
                    }
                    j++;
                    i++;
                } else {
                    this.mCount = i2 - 1;
                    return;
                }
            }
        }
    }

    static class FloatArray {
        private static final int EMPTY = 999;
        int mCount;
        int[] mKeys = new int[TypedValues.TYPE_TARGET];
        float[][] mValues = new float[TypedValues.TYPE_TARGET][];

        FloatArray() {
            clear();
        }

        public void clear() {
            Arrays.fill(this.mKeys, EMPTY);
            Arrays.fill(this.mValues, (Object) null);
            this.mCount = 0;
        }

        public void dump() {
            System.out.println("V: " + Arrays.toString(Arrays.copyOf(this.mKeys, this.mCount)));
            System.out.print("K: [");
            int i = 0;
            while (i < this.mCount) {
                System.out.print((i == 0 ? "" : ", ") + Arrays.toString(valueAt(i)));
                i++;
            }
            System.out.println("]");
        }

        public int size() {
            return this.mCount;
        }

        public float[] valueAt(int i) {
            return this.mValues[this.mKeys[i]];
        }

        public int keyAt(int i) {
            return this.mKeys[i];
        }

        public void append(int position, float[] value) {
            if (this.mValues[position] != null) {
                remove(position);
            }
            this.mValues[position] = value;
            int[] iArr = this.mKeys;
            int i = this.mCount;
            this.mCount = i + 1;
            iArr[i] = position;
            Arrays.sort(iArr);
        }

        public void remove(int position) {
            this.mValues[position] = null;
            int j = 0;
            int i = 0;
            while (true) {
                int i2 = this.mCount;
                if (i < i2) {
                    int[] iArr = this.mKeys;
                    if (position == iArr[i]) {
                        iArr[i] = EMPTY;
                        j++;
                    }
                    if (i != j) {
                        iArr[i] = iArr[j];
                    }
                    j++;
                    i++;
                } else {
                    this.mCount = i2 - 1;
                    return;
                }
            }
        }
    }
}
