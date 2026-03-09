package androidx.constraintlayout.core.utils;

import androidx.constraintlayout.core.LinearSystem;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.core.widgets.VirtualLayout;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Set;

/* loaded from: classes.dex */
public class GridCore extends VirtualLayout {
    private static final int DEFAULT_SIZE = 3;
    public static final int HORIZONTAL = 0;
    private static final int MAX_COLUMNS = 50;
    private static final int MAX_ROWS = 50;
    public static final int SPANS_RESPECT_WIDGET_ORDER = 2;
    public static final int SUB_GRID_BY_COL_ROW = 1;
    public static final int VERTICAL = 1;
    private ConstraintWidget[] mBoxWidgets;
    private String mColumnWeights;
    private int mColumns;
    private int mColumnsSet;
    private int[][] mConstraintMatrix;
    ConstraintWidgetContainer mContainer;
    private int mFlags;
    private float mHorizontalGaps;
    private int mOrientation;
    private boolean[][] mPositionMatrix;
    private String mRowWeights;
    private int mRows;
    private int mRowsSet;
    private String mSkips;
    private int[][] mSpanMatrix;
    private String mSpans;
    private float mVerticalGaps;
    private boolean mExtraSpaceHandled = false;
    private int mNextAvailableIndex = 0;
    Set<String> mSpanIds = new HashSet();
    private int mSpanIndex = 0;

    public GridCore() {
        updateActualRowsAndColumns();
        initMatrices();
    }

    public GridCore(int rows, int columns) {
        this.mRowsSet = rows;
        this.mColumnsSet = columns;
        if (rows > 50) {
            this.mRowsSet = 3;
        }
        if (columns > 50) {
            this.mColumnsSet = 3;
        }
        updateActualRowsAndColumns();
        initMatrices();
    }

    public ConstraintWidgetContainer getContainer() {
        return this.mContainer;
    }

    public void setContainer(ConstraintWidgetContainer container) {
        this.mContainer = container;
    }

    public void setSpans(CharSequence spans) {
        String str = this.mSpans;
        if (str != null && str.equals(spans.toString())) {
            return;
        }
        this.mExtraSpaceHandled = false;
        this.mSpans = spans.toString();
    }

    public void setSkips(String skips) {
        String str = this.mSkips;
        if (str != null && str.equals(skips)) {
            return;
        }
        this.mExtraSpaceHandled = false;
        this.mSkips = skips;
    }

    public float getHorizontalGaps() {
        return this.mHorizontalGaps;
    }

    public void setHorizontalGaps(float horizontalGaps) {
        if (horizontalGaps < 0.0f || this.mHorizontalGaps == horizontalGaps) {
            return;
        }
        this.mHorizontalGaps = horizontalGaps;
    }

    public float getVerticalGaps() {
        return this.mVerticalGaps;
    }

    public void setVerticalGaps(float verticalGaps) {
        if (verticalGaps < 0.0f || this.mVerticalGaps == verticalGaps) {
            return;
        }
        this.mVerticalGaps = verticalGaps;
    }

    public String getRowWeights() {
        return this.mRowWeights;
    }

    public void setRowWeights(String rowWeights) {
        String str = this.mRowWeights;
        if (str != null && str.equals(rowWeights)) {
            return;
        }
        this.mRowWeights = rowWeights;
    }

    public String getColumnWeights() {
        return this.mColumnWeights;
    }

    public void setColumnWeights(String columnWeights) {
        String str = this.mColumnWeights;
        if (str != null && str.equals(columnWeights)) {
            return;
        }
        this.mColumnWeights = columnWeights;
    }

    public int getOrientation() {
        return this.mOrientation;
    }

    public void setOrientation(int orientation) {
        if ((orientation != 0 && orientation != 1) || this.mOrientation == orientation) {
            return;
        }
        this.mOrientation = orientation;
    }

    public void setRows(int rows) {
        if (rows > 50 || this.mRowsSet == rows) {
            return;
        }
        this.mRowsSet = rows;
        updateActualRowsAndColumns();
        initVariables();
    }

    public void setColumns(int columns) {
        if (columns > 50 || this.mColumnsSet == columns) {
            return;
        }
        this.mColumnsSet = columns;
        updateActualRowsAndColumns();
        initVariables();
    }

    public int getFlags() {
        return this.mFlags;
    }

    public void setFlags(int flags) {
        this.mFlags = flags;
    }

    private void handleSpans(int[][] spansMatrix) {
        if (isSpansRespectWidgetOrder()) {
            return;
        }
        for (int i = 0; i < spansMatrix.length; i++) {
            int row = getRowByIndex(spansMatrix[i][0]);
            int col = getColByIndex(spansMatrix[i][0]);
            if (!invalidatePositions(row, col, spansMatrix[i][1], spansMatrix[i][2])) {
                return;
            }
            connectWidget(this.mWidgets[i], row, col, spansMatrix[i][1], spansMatrix[i][2]);
            this.mSpanIds.add(this.mWidgets[i].stringId);
        }
    }

    private void arrangeWidgets() {
        int[][] iArr;
        int i;
        for (int i2 = 0; i2 < this.mWidgetsCount; i2++) {
            if (!this.mSpanIds.contains(this.mWidgets[i2].stringId)) {
                int position = getNextPosition();
                int row = getRowByIndex(position);
                int col = getColByIndex(position);
                if (position == -1) {
                    return;
                }
                if (isSpansRespectWidgetOrder() && (iArr = this.mSpanMatrix) != null && (i = this.mSpanIndex) < iArr.length) {
                    int[] iArr2 = iArr[i];
                    if (iArr2[0] == position) {
                        this.mPositionMatrix[row][col] = true;
                        if (invalidatePositions(row, col, iArr2[1], iArr2[2])) {
                            ConstraintWidget constraintWidget = this.mWidgets[i2];
                            int[] iArr3 = this.mSpanMatrix[this.mSpanIndex];
                            connectWidget(constraintWidget, row, col, iArr3[1], iArr3[2]);
                            this.mSpanIndex++;
                        }
                    }
                }
                connectWidget(this.mWidgets[i2], row, col, 1, 1);
            }
        }
    }

    private void setupGrid(boolean isUpdate) {
        int[][] mSkips;
        if (this.mRows < 1 || this.mColumns < 1) {
            return;
        }
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
            this.mSpanIds.clear();
        }
        this.mNextAvailableIndex = 0;
        String str = this.mSkips;
        if (str != null && !str.trim().isEmpty() && (mSkips = parseSpans(this.mSkips, false)) != null) {
            handleSkips(mSkips);
        }
        String str2 = this.mSpans;
        if (str2 != null && !str2.trim().isEmpty()) {
            this.mSpanMatrix = parseSpans(this.mSpans, true);
        }
        createBoxes();
        int[][] iArr = this.mSpanMatrix;
        if (iArr != null) {
            handleSpans(iArr);
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

    private void handleSkips(int[][] skipsMatrix) {
        for (int[] matrix : skipsMatrix) {
            int row = getRowByIndex(matrix[0]);
            int col = getColByIndex(matrix[0]);
            if (!invalidatePositions(row, col, matrix[1], matrix[2])) {
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

    private float[] parseWeights(int size, String str) {
        if (str == null || str.trim().isEmpty()) {
            return null;
        }
        String[] values = str.split(",");
        float[] arr = new float[size];
        for (int i = 0; i < arr.length; i++) {
            if (i < values.length) {
                try {
                    arr[i] = Float.parseFloat(values[i]);
                } catch (Exception e) {
                    System.err.println("Error parsing `" + values[i] + "`: " + e.getMessage());
                    arr[i] = 1.0f;
                }
            } else {
                arr[i] = 1.0f;
            }
        }
        return arr;
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

    private void updateActualRowsAndColumns() {
        int i;
        int i2 = this.mRowsSet;
        if (i2 == 0 || (i = this.mColumnsSet) == 0) {
            int i3 = this.mColumnsSet;
            if (i3 > 0) {
                this.mColumns = i3;
                this.mRows = ((this.mWidgetsCount + this.mColumns) - 1) / this.mColumnsSet;
                return;
            } else {
                if (i2 > 0) {
                    this.mRows = i2;
                    int i4 = this.mWidgetsCount;
                    this.mColumns = ((i4 + r1) - 1) / this.mRowsSet;
                    return;
                }
                this.mRows = (int) (Math.sqrt(this.mWidgetsCount) + 1.5d);
                int i5 = this.mWidgetsCount;
                this.mColumns = ((i5 + r1) - 1) / this.mRows;
                return;
            }
        }
        this.mRows = i2;
        this.mColumns = i;
    }

    private ConstraintWidget makeNewWidget() {
        ConstraintWidget widget = new ConstraintWidget();
        widget.mListDimensionBehaviors[0] = ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT;
        widget.mListDimensionBehaviors[1] = ConstraintWidget.DimensionBehaviour.MATCH_CONSTRAINT;
        widget.stringId = String.valueOf(widget.hashCode());
        return widget;
    }

    private void connectWidget(ConstraintWidget widget, int row, int column, int rowSpan, int columnSpan) {
        widget.mLeft.connect(this.mBoxWidgets[column].mLeft, 0);
        widget.mTop.connect(this.mBoxWidgets[row].mTop, 0);
        widget.mRight.connect(this.mBoxWidgets[(column + columnSpan) - 1].mRight, 0);
        widget.mBottom.connect(this.mBoxWidgets[(row + rowSpan) - 1].mBottom, 0);
    }

    private void setBoxWidgetHorizontalChains() {
        int maxVal = Math.max(this.mRows, this.mColumns);
        ConstraintWidget widget = this.mBoxWidgets[0];
        float[] columnWeights = parseWeights(this.mColumns, this.mColumnWeights);
        if (this.mColumns == 1) {
            clearHorizontalAttributes(widget);
            widget.mLeft.connect(this.mLeft, 0);
            widget.mRight.connect(this.mRight, 0);
            return;
        }
        for (int i = 0; i < this.mColumns; i++) {
            ConstraintWidget widget2 = this.mBoxWidgets[i];
            clearHorizontalAttributes(widget2);
            if (columnWeights != null) {
                widget2.setHorizontalWeight(columnWeights[i]);
            }
            if (i > 0) {
                widget2.mLeft.connect(this.mBoxWidgets[i - 1].mRight, 0);
            } else {
                widget2.mLeft.connect(this.mLeft, 0);
            }
            if (i < this.mColumns - 1) {
                widget2.mRight.connect(this.mBoxWidgets[i + 1].mLeft, 0);
            } else {
                widget2.mRight.connect(this.mRight, 0);
            }
            if (i > 0) {
                widget2.mLeft.mMargin = (int) this.mHorizontalGaps;
            }
        }
        for (int i2 = this.mColumns; i2 < maxVal; i2++) {
            ConstraintWidget widget3 = this.mBoxWidgets[i2];
            clearHorizontalAttributes(widget3);
            widget3.mLeft.connect(this.mLeft, 0);
            widget3.mRight.connect(this.mRight, 0);
        }
    }

    private void setBoxWidgetVerticalChains() {
        int maxVal = Math.max(this.mRows, this.mColumns);
        ConstraintWidget widget = this.mBoxWidgets[0];
        float[] rowWeights = parseWeights(this.mRows, this.mRowWeights);
        if (this.mRows == 1) {
            clearVerticalAttributes(widget);
            widget.mTop.connect(this.mTop, 0);
            widget.mBottom.connect(this.mBottom, 0);
            return;
        }
        for (int i = 0; i < this.mRows; i++) {
            ConstraintWidget widget2 = this.mBoxWidgets[i];
            clearVerticalAttributes(widget2);
            if (rowWeights != null) {
                widget2.setVerticalWeight(rowWeights[i]);
            }
            if (i > 0) {
                widget2.mTop.connect(this.mBoxWidgets[i - 1].mBottom, 0);
            } else {
                widget2.mTop.connect(this.mTop, 0);
            }
            if (i < this.mRows - 1) {
                widget2.mBottom.connect(this.mBoxWidgets[i + 1].mTop, 0);
            } else {
                widget2.mBottom.connect(this.mBottom, 0);
            }
            if (i > 0) {
                widget2.mTop.mMargin = (int) this.mVerticalGaps;
            }
        }
        for (int i2 = this.mRows; i2 < maxVal; i2++) {
            ConstraintWidget widget3 = this.mBoxWidgets[i2];
            clearVerticalAttributes(widget3);
            widget3.mTop.connect(this.mTop, 0);
            widget3.mBottom.connect(this.mBottom, 0);
        }
    }

    private void addConstraints() {
        setBoxWidgetVerticalChains();
        setBoxWidgetHorizontalChains();
        arrangeWidgets();
    }

    private void createBoxes() {
        int boxCount = Math.max(this.mRows, this.mColumns);
        ConstraintWidget[] constraintWidgetArr = this.mBoxWidgets;
        if (constraintWidgetArr == null) {
            this.mBoxWidgets = new ConstraintWidget[boxCount];
            int i = 0;
            while (true) {
                ConstraintWidget[] constraintWidgetArr2 = this.mBoxWidgets;
                if (i < constraintWidgetArr2.length) {
                    constraintWidgetArr2[i] = makeNewWidget();
                    i++;
                } else {
                    return;
                }
            }
        } else if (boxCount != constraintWidgetArr.length) {
            ConstraintWidget[] temp = new ConstraintWidget[boxCount];
            for (int i2 = 0; i2 < boxCount; i2++) {
                ConstraintWidget[] constraintWidgetArr3 = this.mBoxWidgets;
                if (i2 < constraintWidgetArr3.length) {
                    temp[i2] = constraintWidgetArr3[i2];
                } else {
                    temp[i2] = makeNewWidget();
                }
            }
            int j = boxCount;
            while (true) {
                ConstraintWidget[] constraintWidgetArr4 = this.mBoxWidgets;
                if (j < constraintWidgetArr4.length) {
                    ConstraintWidget widget = constraintWidgetArr4[j];
                    this.mContainer.remove(widget);
                    j++;
                } else {
                    this.mBoxWidgets = temp;
                    return;
                }
            }
        }
    }

    private void clearVerticalAttributes(ConstraintWidget widget) {
        widget.setVerticalWeight(-1.0f);
        widget.mTop.reset();
        widget.mBottom.reset();
        widget.mBaseline.reset();
    }

    private void clearHorizontalAttributes(ConstraintWidget widget) {
        widget.setHorizontalWeight(-1.0f);
        widget.mLeft.reset();
        widget.mRight.reset();
    }

    private void initVariables() {
        boolean[][] zArr = (boolean[][]) Array.newInstance((Class<?>) Boolean.TYPE, this.mRows, this.mColumns);
        this.mPositionMatrix = zArr;
        for (boolean[] row : zArr) {
            Arrays.fill(row, true);
        }
        if (this.mWidgetsCount > 0) {
            int[][] iArr = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, this.mWidgetsCount, 4);
            this.mConstraintMatrix = iArr;
            for (int[] row2 : iArr) {
                Arrays.fill(row2, -1);
            }
        }
    }

    private int[][] parseSpans(String str, boolean isSpans) {
        int extraRows = 0;
        int extraColumns = 0;
        try {
            String[] spans = str.split(",");
            Arrays.sort(spans, new Comparator() { // from class: androidx.constraintlayout.core.utils.GridCore$$ExternalSyntheticLambda0
                @Override // java.util.Comparator
                public final int compare(Object obj, Object obj2) {
                    return GridCore.lambda$parseSpans$0((String) obj, (String) obj2);
                }
            });
            int[][] spanMatrix = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, spans.length, 3);
            if (this.mRows != 1 && this.mColumns != 1) {
                for (int i = 0; i < spans.length; i++) {
                    String[] indexAndSpan = spans[i].trim().split(":");
                    String[] rowAndCol = indexAndSpan[1].split("x");
                    spanMatrix[i][0] = Integer.parseInt(indexAndSpan[0]);
                    if (isSubGridByColRow()) {
                        spanMatrix[i][1] = Integer.parseInt(rowAndCol[1]);
                        spanMatrix[i][2] = Integer.parseInt(rowAndCol[0]);
                    } else {
                        spanMatrix[i][1] = Integer.parseInt(rowAndCol[0]);
                        spanMatrix[i][2] = Integer.parseInt(rowAndCol[1]);
                    }
                }
                return spanMatrix;
            }
            for (int i2 = 0; i2 < spans.length; i2++) {
                String[] indexAndSpan2 = spans[i2].trim().split(":");
                spanMatrix[i2][0] = Integer.parseInt(indexAndSpan2[0]);
                spanMatrix[i2][1] = 1;
                spanMatrix[i2][2] = 1;
                if (this.mColumns == 1) {
                    spanMatrix[i2][1] = Integer.parseInt(indexAndSpan2[1]);
                    extraRows += spanMatrix[i2][1];
                    if (isSpans) {
                        extraRows--;
                    }
                }
                if (this.mRows == 1) {
                    spanMatrix[i2][2] = Integer.parseInt(indexAndSpan2[1]);
                    extraColumns += spanMatrix[i2][2];
                    if (isSpans) {
                        extraColumns--;
                    }
                }
            }
            if (extraRows != 0 && !this.mExtraSpaceHandled) {
                setRows(this.mRows + extraRows);
            }
            if (extraColumns != 0 && !this.mExtraSpaceHandled) {
                setColumns(this.mColumns + extraColumns);
            }
            this.mExtraSpaceHandled = true;
            return spanMatrix;
        } catch (Exception e) {
            return null;
        }
    }

    static /* synthetic */ int lambda$parseSpans$0(String span1, String span2) {
        return Integer.parseInt(span1.split(":")[0]) - Integer.parseInt(span2.split(":")[0]);
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
        String str = this.mSkips;
        if (str != null && !str.trim().isEmpty() && (mSkips = parseSpans(this.mSkips, false)) != null) {
            handleSkips(mSkips);
        }
        String str2 = this.mSpans;
        if (str2 != null && !str2.trim().isEmpty() && (mSpans = parseSpans(this.mSpans, true)) != null) {
            handleSpans(mSpans);
        }
    }

    private void initMatrices() {
        boolean[][] zArr;
        int[][] iArr = this.mConstraintMatrix;
        boolean z = false;
        if (iArr != null && iArr.length == this.mWidgetsCount && (zArr = this.mPositionMatrix) != null && zArr.length == this.mRows && zArr[0].length == this.mColumns) {
            z = true;
        }
        boolean isUpdate = z;
        if (!isUpdate) {
            initVariables();
        }
        fillConstraintMatrix(isUpdate);
    }

    private boolean isSubGridByColRow() {
        return (this.mFlags & 1) > 0;
    }

    private boolean isSpansRespectWidgetOrder() {
        return (this.mFlags & 2) > 0;
    }

    @Override // androidx.constraintlayout.core.widgets.VirtualLayout
    public void measure(int widthMode, int widthSize, int heightMode, int heightSize) {
        super.measure(widthMode, widthSize, heightMode, heightSize);
        this.mContainer = (ConstraintWidgetContainer) getParent();
        setupGrid(false);
        this.mContainer.add(this.mBoxWidgets);
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public void addToSolver(LinearSystem system, boolean optimize) {
        super.addToSolver(system, optimize);
        addConstraints();
    }
}
