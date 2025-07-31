package androidx.constraintlayout.core.utils;

import java.lang.reflect.Array;
import java.util.Arrays;

/* loaded from: classes.dex */
public class GridEngine {
    private static final int DEFAULT_SIZE = 3;
    public static final int HORIZONTAL = 0;
    private static final int MAX_COLUMNS = 50;
    private static final int MAX_ROWS = 50;
    public static final int VERTICAL = 1;
    private int mColumns;
    private int mColumnsSet;
    private int[][] mConstraintMatrix;
    private int mNextAvailableIndex = 0;
    private int mNumWidgets;
    private int mOrientation;
    private boolean[][] mPositionMatrix;
    private int mRows;
    private int mRowsSet;
    private String mStrSkips;
    private String mStrSpans;

    public GridEngine() {
    }

    public GridEngine(int rows, int columns) {
        this.mRowsSet = rows;
        this.mColumnsSet = columns;
        if (rows > 50) {
            this.mRowsSet = 3;
        }
        if (columns > 50) {
            this.mColumnsSet = 3;
        }
        updateActualRowsAndColumns();
        initVariables();
    }

    public GridEngine(int rows, int columns, int numWidgets) {
        this.mRowsSet = rows;
        this.mColumnsSet = columns;
        this.mNumWidgets = numWidgets;
        if (rows > 50) {
            this.mRowsSet = 3;
        }
        if (columns > 50) {
            this.mColumnsSet = 3;
        }
        updateActualRowsAndColumns();
        int i = this.mRows;
        int i2 = this.mColumns;
        if (numWidgets > i * i2 || numWidgets < 1) {
            this.mNumWidgets = i * i2;
        }
        initVariables();
        fillConstraintMatrix(false);
    }

    private void initVariables() {
        boolean[][] zArr = (boolean[][]) Array.newInstance((Class<?>) Boolean.TYPE, this.mRows, this.mColumns);
        this.mPositionMatrix = zArr;
        for (boolean[] row : zArr) {
            Arrays.fill(row, true);
        }
        int i = this.mNumWidgets;
        if (i > 0) {
            int[][] iArr = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, i, 4);
            this.mConstraintMatrix = iArr;
            for (int[] row2 : iArr) {
                Arrays.fill(row2, -1);
            }
        }
    }

    private int getRowByIndex(int index) {
        if (this.mOrientation == 1) {
            return index % this.mRows;
        }
        return index / this.mColumns;
    }

    private int getColByIndex(int index) {
        if (this.mOrientation == 1) {
            return index / this.mRows;
        }
        return index % this.mColumns;
    }

    private boolean isSpansValid(CharSequence str) {
        if (str == null) {
            return false;
        }
        return true;
    }

    private int[][] parseSpans(String str) {
        if (!isSpansValid(str)) {
            return null;
        }
        String[] spans = str.split(",");
        int[][] spanMatrix = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, spans.length, 3);
        for (int i = 0; i < spans.length; i++) {
            String[] indexAndSpan = spans[i].trim().split(":");
            String[] rowAndCol = indexAndSpan[1].split("x");
            spanMatrix[i][0] = Integer.parseInt(indexAndSpan[0]);
            spanMatrix[i][1] = Integer.parseInt(rowAndCol[0]);
            spanMatrix[i][2] = Integer.parseInt(rowAndCol[1]);
        }
        return spanMatrix;
    }

    private void fillConstraintMatrix(boolean isUpdate) {
        int[][] mSpans;
        int[][] mSkips;
        if (isUpdate) {
            for (int i = 0; i < this.mPositionMatrix.length; i++) {
                int j = 0;
                while (true) {
                    boolean[][] zArr = this.mPositionMatrix;
                    if (j < zArr[0].length) {
                        zArr[i][j] = true;
                        j++;
                    }
                }
            }
            for (int i2 = 0; i2 < this.mConstraintMatrix.length; i2++) {
                int j2 = 0;
                while (true) {
                    int[][] iArr = this.mConstraintMatrix;
                    if (j2 < iArr[0].length) {
                        iArr[i2][j2] = -1;
                        j2++;
                    }
                }
            }
        }
        this.mNextAvailableIndex = 0;
        String str = this.mStrSkips;
        if (str != null && !str.trim().isEmpty() && (mSkips = parseSpans(this.mStrSkips)) != null) {
            handleSkips(mSkips);
        }
        String str2 = this.mStrSpans;
        if (str2 != null && !str2.trim().isEmpty() && (mSpans = parseSpans(this.mStrSpans)) != null) {
            handleSpans(mSpans);
        }
        addAllConstraintPositions();
    }

    private int getNextPosition() {
        int position = 0;
        boolean positionFound = false;
        while (!positionFound) {
            int i = this.mNextAvailableIndex;
            if (i >= this.mRows * this.mColumns) {
                return -1;
            }
            position = this.mNextAvailableIndex;
            int row = getRowByIndex(i);
            int col = getColByIndex(this.mNextAvailableIndex);
            boolean[] zArr = this.mPositionMatrix[row];
            if (zArr[col]) {
                zArr[col] = false;
                positionFound = true;
            }
            this.mNextAvailableIndex++;
        }
        return position;
    }

    private void addConstraintPosition(int widgetId, int row, int column, int rowSpan, int columnSpan) {
        int[] iArr = this.mConstraintMatrix[widgetId];
        iArr[0] = column;
        iArr[1] = row;
        iArr[2] = (column + columnSpan) - 1;
        iArr[3] = (row + rowSpan) - 1;
    }

    private void handleSpans(int[][] spansMatrix) {
        for (int i = 0; i < spansMatrix.length; i++) {
            int row = getRowByIndex(spansMatrix[i][0]);
            int col = getColByIndex(spansMatrix[i][0]);
            if (!invalidatePositions(row, col, spansMatrix[i][1], spansMatrix[i][2])) {
                return;
            }
            addConstraintPosition(i, row, col, spansMatrix[i][1], spansMatrix[i][2]);
        }
    }

    private void handleSkips(int[][] skipsMatrix) {
        for (int i = 0; i < skipsMatrix.length; i++) {
            int row = getRowByIndex(skipsMatrix[i][0]);
            int col = getColByIndex(skipsMatrix[i][0]);
            if (!invalidatePositions(row, col, skipsMatrix[i][1], skipsMatrix[i][2])) {
                return;
            }
        }
    }

    private boolean invalidatePositions(int startRow, int startColumn, int rowSpan, int columnSpan) {
        for (int i = startRow; i < startRow + rowSpan; i++) {
            for (int j = startColumn; j < startColumn + columnSpan; j++) {
                boolean[][] zArr = this.mPositionMatrix;
                if (i < zArr.length && j < zArr[0].length) {
                    boolean[] zArr2 = zArr[i];
                    if (zArr2[j]) {
                        zArr2[j] = false;
                    }
                }
                return false;
            }
        }
        return true;
    }

    private void addAllConstraintPositions() {
        for (int i = 0; i < this.mNumWidgets; i++) {
            if (leftOfWidget(i) == -1) {
                int position = getNextPosition();
                int row = getRowByIndex(position);
                int col = getColByIndex(position);
                if (position == -1) {
                    return;
                } else {
                    addConstraintPosition(i, row, col, 1, 1);
                }
            }
        }
    }

    private void updateActualRowsAndColumns() {
        int i;
        int i2 = this.mRowsSet;
        if (i2 == 0 || (i = this.mColumnsSet) == 0) {
            int i3 = this.mColumnsSet;
            if (i3 > 0) {
                this.mColumns = i3;
                this.mRows = ((this.mNumWidgets + i3) - 1) / i3;
                return;
            } else if (i2 > 0) {
                this.mRows = i2;
                this.mColumns = ((this.mNumWidgets + i2) - 1) / i2;
                return;
            } else {
                int sqrt = (int) (Math.sqrt(this.mNumWidgets) + 1.5d);
                this.mRows = sqrt;
                this.mColumns = ((this.mNumWidgets + sqrt) - 1) / sqrt;
                return;
            }
        }
        this.mRows = i2;
        this.mColumns = i;
    }

    public void setup() {
        boolean[][] zArr;
        boolean isUpdate = true;
        int[][] iArr = this.mConstraintMatrix;
        if (iArr == null || iArr.length != this.mNumWidgets || (zArr = this.mPositionMatrix) == null || zArr.length != this.mRows || zArr[0].length != this.mColumns) {
            isUpdate = false;
        }
        if (!isUpdate) {
            initVariables();
        }
        fillConstraintMatrix(isUpdate);
    }

    public void setSpans(CharSequence spans) {
        String str = this.mStrSpans;
        if (str != null && str.equals(spans.toString())) {
            return;
        }
        this.mStrSpans = spans.toString();
    }

    public void setSkips(String skips) {
        String str = this.mStrSkips;
        if (str != null && str.equals(skips)) {
            return;
        }
        this.mStrSkips = skips;
    }

    public void setOrientation(int orientation) {
        if ((orientation != 0 && orientation != 1) || this.mOrientation == orientation) {
            return;
        }
        this.mOrientation = orientation;
    }

    public void setNumWidgets(int num) {
        if (num > this.mRows * this.mColumns) {
            return;
        }
        this.mNumWidgets = num;
    }

    public void setRows(int rows) {
        if (rows > 50 || this.mRowsSet == rows) {
            return;
        }
        this.mRowsSet = rows;
        updateActualRowsAndColumns();
    }

    public void setColumns(int columns) {
        if (columns > 50 || this.mColumnsSet == columns) {
            return;
        }
        this.mColumnsSet = columns;
        updateActualRowsAndColumns();
    }

    public int leftOfWidget(int i) {
        int[][] iArr = this.mConstraintMatrix;
        if (iArr == null || i >= iArr.length) {
            return 0;
        }
        return iArr[i][0];
    }

    public int topOfWidget(int i) {
        int[][] iArr = this.mConstraintMatrix;
        if (iArr == null || i >= iArr.length) {
            return 0;
        }
        return iArr[i][1];
    }

    public int rightOfWidget(int i) {
        int[][] iArr = this.mConstraintMatrix;
        if (iArr == null || i >= iArr.length) {
            return 0;
        }
        return iArr[i][2];
    }

    public int bottomOfWidget(int i) {
        int[][] iArr = this.mConstraintMatrix;
        if (iArr == null || i >= iArr.length) {
            return 0;
        }
        return iArr[i][3];
    }
}
