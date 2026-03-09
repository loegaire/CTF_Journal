package androidx.constraintlayout.core;

import androidx.constraintlayout.core.ArrayRow;
import java.util.Arrays;

/* loaded from: classes.dex */
public class SolverVariableValues implements ArrayRow.ArrayRowVariables {
    private static final boolean DEBUG = false;
    private static final boolean HASH = true;
    private static float sEpsilon = 0.001f;
    protected final Cache mCache;
    private final ArrayRow mRow;
    private final int mNone = -1;
    private int mSize = 16;
    private int mHashSize = 16;
    int[] mKeys = new int[16];
    int[] mNextKeys = new int[16];
    int[] mVariables = new int[16];
    float[] mValues = new float[16];
    int[] mPrevious = new int[16];
    int[] mNext = new int[16];
    int mCount = 0;
    int mHead = -1;

    SolverVariableValues(ArrayRow row, Cache cache) {
        this.mRow = row;
        this.mCache = cache;
        clear();
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public int getCurrentSize() {
        return this.mCount;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public SolverVariable getVariable(int index) {
        int count = this.mCount;
        if (count == 0) {
            return null;
        }
        int j = this.mHead;
        for (int i = 0; i < count; i++) {
            if (i == index && j != -1) {
                return this.mCache.mIndexedVariables[this.mVariables[j]];
            }
            j = this.mNext[j];
            if (j == -1) {
                break;
            }
        }
        return null;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public float getVariableValue(int index) {
        int count = this.mCount;
        int j = this.mHead;
        for (int i = 0; i < count; i++) {
            if (i == index) {
                return this.mValues[j];
            }
            j = this.mNext[j];
            if (j == -1) {
                return 0.0f;
            }
        }
        return 0.0f;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public boolean contains(SolverVariable variable) {
        if (indexOf(variable) != -1) {
            return HASH;
        }
        return false;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public int indexOf(SolverVariable variable) {
        int i;
        if (this.mCount == 0 || variable == null) {
            return -1;
        }
        int id = variable.id;
        int key = this.mKeys[id % this.mHashSize];
        if (key == -1) {
            return -1;
        }
        if (this.mVariables[key] == id) {
            return key;
        }
        while (true) {
            int[] iArr = this.mNextKeys;
            i = iArr[key];
            if (i == -1 || this.mVariables[i] == id) {
                break;
            }
            key = iArr[key];
        }
        if (i != -1 && this.mVariables[i] == id) {
            return i;
        }
        return -1;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public float get(SolverVariable variable) {
        int index = indexOf(variable);
        if (index != -1) {
            return this.mValues[index];
        }
        return 0.0f;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public void display() {
        int count = this.mCount;
        System.out.print("{ ");
        for (int i = 0; i < count; i++) {
            SolverVariable v = getVariable(i);
            if (v != null) {
                System.out.print(v + " = " + getVariableValue(i) + " ");
            }
        }
        System.out.println(" }");
    }

    public String toString() {
        String str;
        String str2;
        String str3 = hashCode() + " { ";
        int count = this.mCount;
        for (int i = 0; i < count; i++) {
            SolverVariable v = getVariable(i);
            if (v != null) {
                String str4 = str3 + v + " = " + getVariableValue(i) + " ";
                int index = indexOf(v);
                String str5 = str4 + "[p: ";
                if (this.mPrevious[index] != -1) {
                    str = str5 + this.mCache.mIndexedVariables[this.mVariables[this.mPrevious[index]]];
                } else {
                    str = str5 + "none";
                }
                String str6 = str + ", n: ";
                if (this.mNext[index] != -1) {
                    str2 = str6 + this.mCache.mIndexedVariables[this.mVariables[this.mNext[index]]];
                } else {
                    str2 = str6 + "none";
                }
                str3 = str2 + "]";
            }
        }
        return str3 + " }";
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public void clear() {
        int count = this.mCount;
        for (int i = 0; i < count; i++) {
            SolverVariable v = getVariable(i);
            if (v != null) {
                v.removeFromRow(this.mRow);
            }
        }
        for (int i2 = 0; i2 < this.mSize; i2++) {
            this.mVariables[i2] = -1;
            this.mNextKeys[i2] = -1;
        }
        for (int i3 = 0; i3 < this.mHashSize; i3++) {
            this.mKeys[i3] = -1;
        }
        this.mCount = 0;
        this.mHead = -1;
    }

    private void increaseSize() {
        int size = this.mSize * 2;
        this.mVariables = Arrays.copyOf(this.mVariables, size);
        this.mValues = Arrays.copyOf(this.mValues, size);
        this.mPrevious = Arrays.copyOf(this.mPrevious, size);
        this.mNext = Arrays.copyOf(this.mNext, size);
        this.mNextKeys = Arrays.copyOf(this.mNextKeys, size);
        for (int i = this.mSize; i < size; i++) {
            this.mVariables[i] = -1;
            this.mNextKeys[i] = -1;
        }
        this.mSize = size;
    }

    private void addToHashMap(SolverVariable variable, int index) {
        int[] iArr;
        int hash = variable.id % this.mHashSize;
        int[] iArr2 = this.mKeys;
        int key = iArr2[hash];
        if (key == -1) {
            iArr2[hash] = index;
        } else {
            while (true) {
                iArr = this.mNextKeys;
                if (iArr[key] == -1) {
                    break;
                } else {
                    key = iArr[key];
                }
            }
            iArr[key] = index;
        }
        this.mNextKeys[index] = -1;
    }

    private void displayHash() {
        for (int i = 0; i < this.mHashSize; i++) {
            if (this.mKeys[i] != -1) {
                String str = hashCode() + " hash [" + i + "] => ";
                int key = this.mKeys[i];
                boolean done = false;
                while (!done) {
                    str = str + " " + this.mVariables[key];
                    int[] iArr = this.mNextKeys;
                    if (iArr[key] != -1) {
                        key = iArr[key];
                    } else {
                        done = HASH;
                    }
                }
                System.out.println(str);
            }
        }
    }

    private void removeFromHashMap(SolverVariable variable) {
        int[] iArr;
        int hash = variable.id % this.mHashSize;
        int key = this.mKeys[hash];
        if (key == -1) {
            return;
        }
        int id = variable.id;
        if (this.mVariables[key] == id) {
            int[] iArr2 = this.mKeys;
            int[] iArr3 = this.mNextKeys;
            iArr2[hash] = iArr3[key];
            iArr3[key] = -1;
            return;
        }
        while (true) {
            iArr = this.mNextKeys;
            int i = iArr[key];
            if (i == -1 || this.mVariables[i] == id) {
                break;
            } else {
                key = iArr[key];
            }
        }
        int currentKey = iArr[key];
        if (currentKey != -1 && this.mVariables[currentKey] == id) {
            iArr[key] = iArr[currentKey];
            iArr[currentKey] = -1;
        }
    }

    private void addVariable(int index, SolverVariable variable, float value) {
        this.mVariables[index] = variable.id;
        this.mValues[index] = value;
        this.mPrevious[index] = -1;
        this.mNext[index] = -1;
        variable.addToRow(this.mRow);
        variable.usageInRowCount++;
        this.mCount++;
    }

    private int findEmptySlot() {
        for (int i = 0; i < this.mSize; i++) {
            if (this.mVariables[i] == -1) {
                return i;
            }
        }
        return -1;
    }

    private void insertVariable(int index, SolverVariable variable, float value) {
        int availableSlot = findEmptySlot();
        addVariable(availableSlot, variable, value);
        if (index == -1) {
            this.mPrevious[availableSlot] = -1;
            if (this.mCount <= 0) {
                this.mNext[availableSlot] = -1;
            } else {
                this.mNext[availableSlot] = this.mHead;
                this.mHead = availableSlot;
            }
        } else {
            this.mPrevious[availableSlot] = index;
            int[] iArr = this.mNext;
            iArr[availableSlot] = iArr[index];
            iArr[index] = availableSlot;
        }
        int i = this.mNext[availableSlot];
        if (i != -1) {
            this.mPrevious[i] = availableSlot;
        }
        addToHashMap(variable, availableSlot);
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public void put(SolverVariable variable, float value) {
        float f = sEpsilon;
        if (value > (-f) && value < f) {
            remove(variable, HASH);
            return;
        }
        if (this.mCount == 0) {
            addVariable(0, variable, value);
            addToHashMap(variable, 0);
            this.mHead = 0;
            return;
        }
        int index = indexOf(variable);
        if (index != -1) {
            this.mValues[index] = value;
            return;
        }
        if (this.mCount + 1 >= this.mSize) {
            increaseSize();
        }
        int count = this.mCount;
        int previousItem = -1;
        int j = this.mHead;
        for (int i = 0; i < count; i++) {
            if (this.mVariables[j] == variable.id) {
                this.mValues[j] = value;
                return;
            }
            if (this.mVariables[j] < variable.id) {
                previousItem = j;
            }
            j = this.mNext[j];
            if (j == -1) {
                break;
            }
        }
        insertVariable(previousItem, variable, value);
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public int sizeInBytes() {
        return 0;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public float remove(SolverVariable v, boolean removeFromDefinition) {
        int index = indexOf(v);
        if (index == -1) {
            return 0.0f;
        }
        removeFromHashMap(v);
        float value = this.mValues[index];
        if (this.mHead == index) {
            this.mHead = this.mNext[index];
        }
        this.mVariables[index] = -1;
        int[] iArr = this.mPrevious;
        int i = iArr[index];
        if (i != -1) {
            int[] iArr2 = this.mNext;
            iArr2[i] = iArr2[index];
        }
        int i2 = this.mNext[index];
        if (i2 != -1) {
            iArr[i2] = iArr[index];
        }
        this.mCount--;
        v.usageInRowCount--;
        if (removeFromDefinition) {
            v.removeFromRow(this.mRow);
        }
        return value;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public void add(SolverVariable v, float value, boolean removeFromDefinition) {
        float f = sEpsilon;
        if (value > (-f) && value < f) {
            return;
        }
        int index = indexOf(v);
        if (index == -1) {
            put(v, value);
            return;
        }
        float[] fArr = this.mValues;
        float f2 = fArr[index] + value;
        fArr[index] = f2;
        float f3 = sEpsilon;
        if (f2 > (-f3) && f2 < f3) {
            fArr[index] = 0.0f;
            remove(v, removeFromDefinition);
        }
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public float use(ArrayRow definition, boolean removeFromDefinition) {
        float value = get(definition.mVariable);
        remove(definition.mVariable, removeFromDefinition);
        SolverVariableValues localDef = (SolverVariableValues) definition.variables;
        int definitionSize = localDef.getCurrentSize();
        int i = localDef.mHead;
        int j = 0;
        int i2 = 0;
        while (j < definitionSize) {
            if (localDef.mVariables[i2] != -1) {
                float definitionValue = localDef.mValues[i2];
                SolverVariable definitionVariable = this.mCache.mIndexedVariables[localDef.mVariables[i2]];
                add(definitionVariable, definitionValue * value, removeFromDefinition);
                j++;
            }
            i2++;
        }
        return value;
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public void invert() {
        int count = this.mCount;
        int j = this.mHead;
        for (int i = 0; i < count; i++) {
            float[] fArr = this.mValues;
            fArr[j] = fArr[j] * (-1.0f);
            j = this.mNext[j];
            if (j == -1) {
                return;
            }
        }
    }

    @Override // androidx.constraintlayout.core.ArrayRow.ArrayRowVariables
    public void divideByAmount(float amount) {
        int count = this.mCount;
        int j = this.mHead;
        for (int i = 0; i < count; i++) {
            float[] fArr = this.mValues;
            fArr[j] = fArr[j] / amount;
            j = this.mNext[j];
            if (j == -1) {
                return;
            }
        }
    }
}
