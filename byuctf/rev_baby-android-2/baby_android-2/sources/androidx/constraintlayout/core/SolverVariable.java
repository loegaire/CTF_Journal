package androidx.constraintlayout.core;

import java.util.Arrays;
import java.util.HashSet;

/* loaded from: classes.dex */
public class SolverVariable implements Comparable<SolverVariable> {
    private static final boolean DO_NOT_USE = false;
    private static final boolean INTERNAL_DEBUG = false;
    static final int MAX_STRENGTH = 9;
    public static final int STRENGTH_BARRIER = 6;
    public static final int STRENGTH_CENTERING = 7;
    public static final int STRENGTH_EQUALITY = 5;
    public static final int STRENGTH_FIXED = 8;
    public static final int STRENGTH_HIGH = 3;
    public static final int STRENGTH_HIGHEST = 4;
    public static final int STRENGTH_LOW = 1;
    public static final int STRENGTH_MEDIUM = 2;
    public static final int STRENGTH_NONE = 0;
    private static final boolean VAR_USE_HASH = false;
    public float computedValue;
    public int id;
    public boolean inGoal;
    public boolean isFinalValue;
    ArrayRow[] mClientEquations;
    int mClientEquationsCount;
    int mDefinitionId;
    float[] mGoalStrengthVector;
    HashSet<ArrayRow> mInRows;
    boolean mIsSynonym;
    private String mName;
    float[] mStrengthVector;
    int mSynonym;
    float mSynonymDelta;
    Type mType;
    public int strength;
    public int usageInRowCount;
    private static int sUniqueSlackId = 1;
    private static int sUniqueErrorId = 1;
    private static int sUniqueUnrestrictedId = 1;
    private static int sUniqueConstantId = 1;
    private static int sUniqueId = 1;

    public enum Type {
        UNRESTRICTED,
        CONSTANT,
        SLACK,
        ERROR,
        UNKNOWN
    }

    static void increaseErrorId() {
        sUniqueErrorId++;
    }

    private static String getUniqueName(Type type, String prefix) {
        if (prefix != null) {
            return prefix + sUniqueErrorId;
        }
        switch (type) {
            case UNRESTRICTED:
                StringBuilder append = new StringBuilder().append("U");
                int i = sUniqueUnrestrictedId + 1;
                sUniqueUnrestrictedId = i;
                return append.append(i).toString();
            case CONSTANT:
                StringBuilder append2 = new StringBuilder().append("C");
                int i2 = sUniqueConstantId + 1;
                sUniqueConstantId = i2;
                return append2.append(i2).toString();
            case SLACK:
                StringBuilder append3 = new StringBuilder().append("S");
                int i3 = sUniqueSlackId + 1;
                sUniqueSlackId = i3;
                return append3.append(i3).toString();
            case ERROR:
                StringBuilder append4 = new StringBuilder().append("e");
                int i4 = sUniqueErrorId + 1;
                sUniqueErrorId = i4;
                return append4.append(i4).toString();
            case UNKNOWN:
                StringBuilder append5 = new StringBuilder().append("V");
                int i5 = sUniqueId + 1;
                sUniqueId = i5;
                return append5.append(i5).toString();
            default:
                throw new AssertionError(type.name());
        }
    }

    public SolverVariable(String name, Type type) {
        this.id = -1;
        this.mDefinitionId = -1;
        this.strength = 0;
        this.isFinalValue = false;
        this.mStrengthVector = new float[9];
        this.mGoalStrengthVector = new float[9];
        this.mClientEquations = new ArrayRow[16];
        this.mClientEquationsCount = 0;
        this.usageInRowCount = 0;
        this.mIsSynonym = false;
        this.mSynonym = -1;
        this.mSynonymDelta = 0.0f;
        this.mInRows = null;
        this.mName = name;
        this.mType = type;
    }

    public SolverVariable(Type type, String prefix) {
        this.id = -1;
        this.mDefinitionId = -1;
        this.strength = 0;
        this.isFinalValue = false;
        this.mStrengthVector = new float[9];
        this.mGoalStrengthVector = new float[9];
        this.mClientEquations = new ArrayRow[16];
        this.mClientEquationsCount = 0;
        this.usageInRowCount = 0;
        this.mIsSynonym = false;
        this.mSynonym = -1;
        this.mSynonymDelta = 0.0f;
        this.mInRows = null;
        this.mType = type;
    }

    void clearStrengths() {
        for (int i = 0; i < 9; i++) {
            this.mStrengthVector[i] = 0.0f;
        }
    }

    String strengthsToString() {
        String representation = this + "[";
        boolean negative = false;
        boolean empty = true;
        for (int j = 0; j < this.mStrengthVector.length; j++) {
            String representation2 = representation + this.mStrengthVector[j];
            float f = this.mStrengthVector[j];
            if (f > 0.0f) {
                negative = false;
            } else if (f < 0.0f) {
                negative = true;
            }
            if (f != 0.0f) {
                empty = false;
            }
            if (j < r4.length - 1) {
                representation = representation2 + ", ";
            } else {
                representation = representation2 + "] ";
            }
        }
        if (negative) {
            representation = representation + " (-)";
        }
        if (empty) {
            return representation + " (*)";
        }
        return representation;
    }

    public final void addToRow(ArrayRow row) {
        int i = 0;
        while (true) {
            int i2 = this.mClientEquationsCount;
            if (i < i2) {
                if (this.mClientEquations[i] != row) {
                    i++;
                } else {
                    return;
                }
            } else {
                ArrayRow[] arrayRowArr = this.mClientEquations;
                if (i2 >= arrayRowArr.length) {
                    this.mClientEquations = (ArrayRow[]) Arrays.copyOf(arrayRowArr, arrayRowArr.length * 2);
                }
                ArrayRow[] arrayRowArr2 = this.mClientEquations;
                int i3 = this.mClientEquationsCount;
                arrayRowArr2[i3] = row;
                this.mClientEquationsCount = i3 + 1;
                return;
            }
        }
    }

    public final void removeFromRow(ArrayRow row) {
        int count = this.mClientEquationsCount;
        for (int i = 0; i < count; i++) {
            if (this.mClientEquations[i] == row) {
                for (int j = i; j < count - 1; j++) {
                    ArrayRow[] arrayRowArr = this.mClientEquations;
                    arrayRowArr[j] = arrayRowArr[j + 1];
                }
                int j2 = this.mClientEquationsCount;
                this.mClientEquationsCount = j2 - 1;
                return;
            }
        }
    }

    public final void updateReferencesWithNewDefinition(LinearSystem system, ArrayRow definition) {
        int count = this.mClientEquationsCount;
        for (int i = 0; i < count; i++) {
            this.mClientEquations[i].updateFromRow(system, definition, false);
        }
        this.mClientEquationsCount = 0;
    }

    public void setFinalValue(LinearSystem system, float value) {
        this.computedValue = value;
        this.isFinalValue = true;
        this.mIsSynonym = false;
        this.mSynonym = -1;
        this.mSynonymDelta = 0.0f;
        int count = this.mClientEquationsCount;
        this.mDefinitionId = -1;
        for (int i = 0; i < count; i++) {
            this.mClientEquations[i].updateFromFinalVariable(system, this, false);
        }
        this.mClientEquationsCount = 0;
    }

    public void setSynonym(LinearSystem system, SolverVariable synonymVariable, float value) {
        this.mIsSynonym = true;
        this.mSynonym = synonymVariable.id;
        this.mSynonymDelta = value;
        int count = this.mClientEquationsCount;
        this.mDefinitionId = -1;
        for (int i = 0; i < count; i++) {
            this.mClientEquations[i].updateFromSynonymVariable(system, this, false);
        }
        this.mClientEquationsCount = 0;
        system.displayReadableRows();
    }

    public void reset() {
        this.mName = null;
        this.mType = Type.UNKNOWN;
        this.strength = 0;
        this.id = -1;
        this.mDefinitionId = -1;
        this.computedValue = 0.0f;
        this.isFinalValue = false;
        this.mIsSynonym = false;
        this.mSynonym = -1;
        this.mSynonymDelta = 0.0f;
        int count = this.mClientEquationsCount;
        for (int i = 0; i < count; i++) {
            this.mClientEquations[i] = null;
        }
        this.mClientEquationsCount = 0;
        this.usageInRowCount = 0;
        this.inGoal = false;
        Arrays.fill(this.mGoalStrengthVector, 0.0f);
    }

    public String getName() {
        return this.mName;
    }

    public void setName(String name) {
        this.mName = name;
    }

    public void setType(Type type, String prefix) {
        this.mType = type;
    }

    @Override // java.lang.Comparable
    public int compareTo(SolverVariable v) {
        return this.id - v.id;
    }

    public String toString() {
        if (this.mName != null) {
            String result = "" + this.mName;
            return result;
        }
        String result2 = "" + this.id;
        return result2;
    }
}
