package androidx.constraintlayout.core;

import androidx.constraintlayout.core.ArrayRow;
import java.util.Arrays;
import java.util.Comparator;

/* loaded from: classes.dex */
public class PriorityGoalRow extends ArrayRow {
    private static final boolean DEBUG = false;
    private static final float EPSILON = 1.0E-4f;
    static final int NOT_FOUND = -1;
    GoalVariableAccessor mAccessor;
    private SolverVariable[] mArrayGoals;
    Cache mCache;
    private int mNumGoals;
    private SolverVariable[] mSortArray;
    private int mTableSize;

    class GoalVariableAccessor {
        PriorityGoalRow mRow;
        SolverVariable mVariable;

        GoalVariableAccessor(PriorityGoalRow row) {
            this.mRow = row;
        }

        public void init(SolverVariable variable) {
            this.mVariable = variable;
        }

        public boolean addToGoal(SolverVariable other, float value) {
            if (this.mVariable.inGoal) {
                boolean empty = true;
                for (int i = 0; i < 9; i++) {
                    float[] fArr = this.mVariable.mGoalStrengthVector;
                    fArr[i] = fArr[i] + (other.mGoalStrengthVector[i] * value);
                    if (Math.abs(this.mVariable.mGoalStrengthVector[i]) < 1.0E-4f) {
                        this.mVariable.mGoalStrengthVector[i] = 0.0f;
                    } else {
                        empty = false;
                    }
                }
                if (empty) {
                    PriorityGoalRow.this.removeGoal(this.mVariable);
                    return false;
                }
                return false;
            }
            for (int i2 = 0; i2 < 9; i2++) {
                float strength = other.mGoalStrengthVector[i2];
                if (strength != 0.0f) {
                    float v = value * strength;
                    if (Math.abs(v) < 1.0E-4f) {
                        v = 0.0f;
                    }
                    this.mVariable.mGoalStrengthVector[i2] = v;
                } else {
                    this.mVariable.mGoalStrengthVector[i2] = 0.0f;
                }
            }
            return true;
        }

        public void add(SolverVariable other) {
            for (int i = 0; i < 9; i++) {
                float[] fArr = this.mVariable.mGoalStrengthVector;
                fArr[i] = fArr[i] + other.mGoalStrengthVector[i];
                float value = this.mVariable.mGoalStrengthVector[i];
                if (Math.abs(value) < 1.0E-4f) {
                    this.mVariable.mGoalStrengthVector[i] = 0.0f;
                }
            }
        }

        public final boolean isNegative() {
            for (int i = 8; i >= 0; i--) {
                float value = this.mVariable.mGoalStrengthVector[i];
                if (value > 0.0f) {
                    return false;
                }
                if (value < 0.0f) {
                    return true;
                }
            }
            return false;
        }

        public final boolean isSmallerThan(SolverVariable other) {
            for (int i = 8; i >= 0; i--) {
                float comparedValue = other.mGoalStrengthVector[i];
                float value = this.mVariable.mGoalStrengthVector[i];
                if (value != comparedValue) {
                    return value < comparedValue;
                }
            }
            return false;
        }

        public final boolean isNull() {
            for (int i = 0; i < 9; i++) {
                if (this.mVariable.mGoalStrengthVector[i] != 0.0f) {
                    return false;
                }
            }
            return true;
        }

        public void reset() {
            Arrays.fill(this.mVariable.mGoalStrengthVector, 0.0f);
        }

        public String toString() {
            String result = "[ ";
            if (this.mVariable != null) {
                for (int i = 0; i < 9; i++) {
                    result = result + this.mVariable.mGoalStrengthVector[i] + " ";
                }
            }
            return result + "] " + this.mVariable;
        }
    }

    @Override // androidx.constraintlayout.core.ArrayRow, androidx.constraintlayout.core.LinearSystem.Row
    public void clear() {
        this.mNumGoals = 0;
        this.mConstantValue = 0.0f;
    }

    public PriorityGoalRow(Cache cache) {
        super(cache);
        this.mTableSize = 128;
        this.mArrayGoals = new SolverVariable[128];
        this.mSortArray = new SolverVariable[128];
        this.mNumGoals = 0;
        this.mAccessor = new GoalVariableAccessor(this);
        this.mCache = cache;
    }

    @Override // androidx.constraintlayout.core.ArrayRow, androidx.constraintlayout.core.LinearSystem.Row
    public boolean isEmpty() {
        return this.mNumGoals == 0;
    }

    @Override // androidx.constraintlayout.core.ArrayRow, androidx.constraintlayout.core.LinearSystem.Row
    public SolverVariable getPivotCandidate(LinearSystem system, boolean[] avoid) {
        int pivot = -1;
        for (int i = 0; i < this.mNumGoals; i++) {
            SolverVariable variable = this.mArrayGoals[i];
            if (!avoid[variable.id]) {
                this.mAccessor.init(variable);
                if (pivot == -1) {
                    if (this.mAccessor.isNegative()) {
                        pivot = i;
                    }
                } else if (this.mAccessor.isSmallerThan(this.mArrayGoals[pivot])) {
                    pivot = i;
                }
            }
        }
        if (pivot == -1) {
            return null;
        }
        return this.mArrayGoals[pivot];
    }

    @Override // androidx.constraintlayout.core.ArrayRow, androidx.constraintlayout.core.LinearSystem.Row
    public void addError(SolverVariable error) {
        this.mAccessor.init(error);
        this.mAccessor.reset();
        error.mGoalStrengthVector[error.strength] = 1.0f;
        addToGoal(error);
    }

    private void addToGoal(SolverVariable variable) {
        int i;
        int i2 = this.mNumGoals + 1;
        SolverVariable[] solverVariableArr = this.mArrayGoals;
        if (i2 > solverVariableArr.length) {
            SolverVariable[] solverVariableArr2 = (SolverVariable[]) Arrays.copyOf(solverVariableArr, solverVariableArr.length * 2);
            this.mArrayGoals = solverVariableArr2;
            this.mSortArray = (SolverVariable[]) Arrays.copyOf(solverVariableArr2, solverVariableArr2.length * 2);
        }
        SolverVariable[] solverVariableArr3 = this.mArrayGoals;
        int i3 = this.mNumGoals;
        solverVariableArr3[i3] = variable;
        int i4 = i3 + 1;
        this.mNumGoals = i4;
        if (i4 > 1 && solverVariableArr3[i4 - 1].id > variable.id) {
            int i5 = 0;
            while (true) {
                i = this.mNumGoals;
                if (i5 >= i) {
                    break;
                }
                this.mSortArray[i5] = this.mArrayGoals[i5];
                i5++;
            }
            Arrays.sort(this.mSortArray, 0, i, new Comparator<SolverVariable>() { // from class: androidx.constraintlayout.core.PriorityGoalRow.1
                @Override // java.util.Comparator
                public int compare(SolverVariable variable1, SolverVariable variable2) {
                    return variable1.id - variable2.id;
                }
            });
            for (int i6 = 0; i6 < this.mNumGoals; i6++) {
                this.mArrayGoals[i6] = this.mSortArray[i6];
            }
        }
        variable.inGoal = true;
        variable.addToRow(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void removeGoal(SolverVariable variable) {
        for (int i = 0; i < this.mNumGoals; i++) {
            if (this.mArrayGoals[i] == variable) {
                int j = i;
                while (true) {
                    int i2 = this.mNumGoals;
                    if (j < i2 - 1) {
                        SolverVariable[] solverVariableArr = this.mArrayGoals;
                        solverVariableArr[j] = solverVariableArr[j + 1];
                        j++;
                    } else {
                        this.mNumGoals = i2 - 1;
                        variable.inGoal = false;
                        return;
                    }
                }
            }
        }
    }

    @Override // androidx.constraintlayout.core.ArrayRow, androidx.constraintlayout.core.LinearSystem.Row
    public void updateFromRow(LinearSystem system, ArrayRow definition, boolean removeFromDefinition) {
        SolverVariable goalVariable = definition.mVariable;
        if (goalVariable == null) {
            return;
        }
        ArrayRow.ArrayRowVariables rowVariables = definition.variables;
        int currentSize = rowVariables.getCurrentSize();
        for (int i = 0; i < currentSize; i++) {
            SolverVariable solverVariable = rowVariables.getVariable(i);
            float value = rowVariables.getVariableValue(i);
            this.mAccessor.init(solverVariable);
            if (this.mAccessor.addToGoal(goalVariable, value)) {
                addToGoal(solverVariable);
            }
            this.mConstantValue += definition.mConstantValue * value;
        }
        removeGoal(goalVariable);
    }

    @Override // androidx.constraintlayout.core.ArrayRow
    public String toString() {
        String result = " goal -> (" + this.mConstantValue + ") : ";
        for (int i = 0; i < this.mNumGoals; i++) {
            SolverVariable v = this.mArrayGoals[i];
            this.mAccessor.init(v);
            result = result + this.mAccessor + " ";
        }
        return result;
    }
}
