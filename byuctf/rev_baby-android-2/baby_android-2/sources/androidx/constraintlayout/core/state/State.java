package androidx.constraintlayout.core.state;

import androidx.constraintlayout.core.state.helpers.AlignHorizontallyReference;
import androidx.constraintlayout.core.state.helpers.AlignVerticallyReference;
import androidx.constraintlayout.core.state.helpers.BarrierReference;
import androidx.constraintlayout.core.state.helpers.FlowReference;
import androidx.constraintlayout.core.state.helpers.GridReference;
import androidx.constraintlayout.core.state.helpers.GuidelineReference;
import androidx.constraintlayout.core.state.helpers.HorizontalChainReference;
import androidx.constraintlayout.core.state.helpers.VerticalChainReference;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.core.widgets.HelperWidget;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes.dex */
public class State {
    static final int CONSTRAINT_RATIO = 2;
    static final int CONSTRAINT_SPREAD = 0;
    static final int CONSTRAINT_WRAP = 1;
    public static final Integer PARENT = 0;
    static final int UNKNOWN = -1;
    ArrayList<Object> mBaselineNeeded;
    ArrayList<ConstraintWidget> mBaselineNeededWidgets;
    boolean mDirtyBaselineNeededWidgets;
    private CorePixelDp mDpToPixel;
    private int mNumHelpers;
    public final ConstraintReference mParent;
    private boolean mIsLtr = true;
    protected HashMap<Object, Reference> mReferences = new HashMap<>();
    protected HashMap<Object, HelperReference> mHelperReferences = new HashMap<>();
    HashMap<String, ArrayList<String>> mTags = new HashMap<>();

    public enum Constraint {
        LEFT_TO_LEFT,
        LEFT_TO_RIGHT,
        RIGHT_TO_LEFT,
        RIGHT_TO_RIGHT,
        START_TO_START,
        START_TO_END,
        END_TO_START,
        END_TO_END,
        TOP_TO_TOP,
        TOP_TO_BOTTOM,
        TOP_TO_BASELINE,
        BOTTOM_TO_TOP,
        BOTTOM_TO_BOTTOM,
        BOTTOM_TO_BASELINE,
        BASELINE_TO_BASELINE,
        BASELINE_TO_TOP,
        BASELINE_TO_BOTTOM,
        CENTER_HORIZONTALLY,
        CENTER_VERTICALLY,
        CIRCULAR_CONSTRAINT
    }

    public enum Direction {
        LEFT,
        RIGHT,
        START,
        END,
        TOP,
        BOTTOM
    }

    public enum Helper {
        HORIZONTAL_CHAIN,
        VERTICAL_CHAIN,
        ALIGN_HORIZONTALLY,
        ALIGN_VERTICALLY,
        BARRIER,
        LAYER,
        HORIZONTAL_FLOW,
        VERTICAL_FLOW,
        GRID,
        ROW,
        COLUMN,
        FLOW
    }

    /* JADX WARN: Enum visitor error
    jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r0v0 androidx.constraintlayout.core.state.State$Chain, still in use, count: 1, list:
      (r0v0 androidx.constraintlayout.core.state.State$Chain) from 0x0046: INVOKE 
      (wrap:java.util.Map<java.lang.String, androidx.constraintlayout.core.state.State$Chain>:0x0041: SGET  A[WRAPPED] (LINE:116) androidx.constraintlayout.core.state.State.Chain.chainMap java.util.Map)
      ("spread")
      (r0v0 androidx.constraintlayout.core.state.State$Chain)
     INTERFACE call: java.util.Map.put(java.lang.Object, java.lang.Object):java.lang.Object A[MD:(K, V):V (c)] (LINE:116)
    	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:162)
    	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:127)
    	at jadx.core.utils.InsnRemover.lambda$unbindInsns$1(InsnRemover.java:99)
    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1511)
    	at jadx.core.utils.InsnRemover.unbindInsns(InsnRemover.java:98)
    	at jadx.core.utils.InsnRemover.removeAllAndUnbind(InsnRemover.java:252)
    	at jadx.core.dex.visitors.EnumVisitor.convertToEnum(EnumVisitor.java:180)
    	at jadx.core.dex.visitors.EnumVisitor.visit(EnumVisitor.java:100)
     */
    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    public static final class Chain {
        SPREAD,
        SPREAD_INSIDE,
        PACKED;

        public static Map<String, Chain> chainMap = new HashMap();
        public static Map<String, Integer> valueMap = new HashMap();

        private Chain() {
        }

        public static Chain valueOf(String name) {
            return (Chain) Enum.valueOf(Chain.class, name);
        }

        public static Chain[] values() {
            return (Chain[]) $VALUES.clone();
        }

        static {
            chainMap.put("packed", new Chain());
            chainMap.put("spread_inside", new Chain());
            chainMap.put("spread", new Chain());
            valueMap.put("packed", 2);
            valueMap.put("spread_inside", 1);
            valueMap.put("spread", 0);
        }

        public static int getValueByString(String str) {
            if (valueMap.containsKey(str)) {
                return valueMap.get(str).intValue();
            }
            return -1;
        }

        public static Chain getChainByString(String str) {
            if (chainMap.containsKey(str)) {
                return chainMap.get(str);
            }
            return null;
        }
    }

    /* JADX WARN: Enum visitor error
    jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r0v0 androidx.constraintlayout.core.state.State$Wrap, still in use, count: 1, list:
      (r0v0 androidx.constraintlayout.core.state.State$Wrap) from 0x0036: INVOKE 
      (wrap:java.util.Map<java.lang.String, androidx.constraintlayout.core.state.State$Wrap>:0x0032: SGET  A[WRAPPED] (LINE:156) androidx.constraintlayout.core.state.State.Wrap.wrapMap java.util.Map)
      ("none")
      (r0v0 androidx.constraintlayout.core.state.State$Wrap)
     INTERFACE call: java.util.Map.put(java.lang.Object, java.lang.Object):java.lang.Object A[MD:(K, V):V (c)] (LINE:156)
    	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:162)
    	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:127)
    	at jadx.core.utils.InsnRemover.lambda$unbindInsns$1(InsnRemover.java:99)
    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1511)
    	at jadx.core.utils.InsnRemover.unbindInsns(InsnRemover.java:98)
    	at jadx.core.utils.InsnRemover.removeAllAndUnbind(InsnRemover.java:252)
    	at jadx.core.dex.visitors.EnumVisitor.convertToEnum(EnumVisitor.java:180)
    	at jadx.core.dex.visitors.EnumVisitor.visit(EnumVisitor.java:100)
     */
    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    public static final class Wrap {
        NONE,
        CHAIN,
        ALIGNED;

        public static Map<String, Wrap> wrapMap = new HashMap();
        public static Map<String, Integer> valueMap = new HashMap();

        private Wrap() {
        }

        public static Wrap valueOf(String name) {
            return (Wrap) Enum.valueOf(Wrap.class, name);
        }

        public static Wrap[] values() {
            return (Wrap[]) $VALUES.clone();
        }

        static {
            wrapMap.put("none", new Wrap());
            wrapMap.put("chain", new Wrap());
            wrapMap.put("aligned", new Wrap());
            valueMap.put("none", 0);
            valueMap.put("chain", 3);
            valueMap.put("aligned", 2);
        }

        public static int getValueByString(String str) {
            if (valueMap.containsKey(str)) {
                return valueMap.get(str).intValue();
            }
            return -1;
        }

        public static Wrap getChainByString(String str) {
            if (wrapMap.containsKey(str)) {
                return wrapMap.get(str);
            }
            return null;
        }
    }

    public State() {
        ConstraintReference constraintReference = new ConstraintReference(this);
        this.mParent = constraintReference;
        this.mNumHelpers = 0;
        this.mBaselineNeeded = new ArrayList<>();
        this.mBaselineNeededWidgets = new ArrayList<>();
        this.mDirtyBaselineNeededWidgets = true;
        Integer num = PARENT;
        constraintReference.setKey(num);
        this.mReferences.put(num, constraintReference);
    }

    CorePixelDp getDpToPixel() {
        return this.mDpToPixel;
    }

    public void setDpToPixel(CorePixelDp dpToPixel) {
        this.mDpToPixel = dpToPixel;
    }

    @Deprecated
    public void setLtr(boolean isLtr) {
        this.mIsLtr = isLtr;
    }

    @Deprecated
    public boolean isLtr() {
        return this.mIsLtr;
    }

    public void setRtl(boolean isRtl) {
        this.mIsLtr = !isRtl;
    }

    public boolean isRtl() {
        return !this.mIsLtr;
    }

    public void reset() {
        for (Object ref : this.mReferences.keySet()) {
            this.mReferences.get(ref).getConstraintWidget().reset();
        }
        this.mReferences.clear();
        this.mReferences.put(PARENT, this.mParent);
        this.mHelperReferences.clear();
        this.mTags.clear();
        this.mBaselineNeeded.clear();
        this.mDirtyBaselineNeededWidgets = true;
    }

    public int convertDimension(Object value) {
        if (value instanceof Float) {
            return Math.round(((Float) value).floatValue());
        }
        if (value instanceof Integer) {
            return ((Integer) value).intValue();
        }
        return 0;
    }

    public ConstraintReference createConstraintReference(Object key) {
        return new ConstraintReference(this);
    }

    public boolean sameFixedWidth(int width) {
        return this.mParent.getWidth().equalsFixedValue(width);
    }

    public boolean sameFixedHeight(int height) {
        return this.mParent.getHeight().equalsFixedValue(height);
    }

    public State width(Dimension dimension) {
        return setWidth(dimension);
    }

    public State height(Dimension dimension) {
        return setHeight(dimension);
    }

    public State setWidth(Dimension dimension) {
        this.mParent.setWidth(dimension);
        return this;
    }

    public State setHeight(Dimension dimension) {
        this.mParent.setHeight(dimension);
        return this;
    }

    Reference reference(Object key) {
        return this.mReferences.get(key);
    }

    public ConstraintReference constraints(Object key) {
        Reference reference = this.mReferences.get(key);
        if (reference == null) {
            reference = createConstraintReference(key);
            this.mReferences.put(key, reference);
            reference.setKey(key);
        }
        if (reference instanceof ConstraintReference) {
            return (ConstraintReference) reference;
        }
        return null;
    }

    private String createHelperKey() {
        StringBuilder append = new StringBuilder().append("__HELPER_KEY_");
        int i = this.mNumHelpers;
        this.mNumHelpers = i + 1;
        return append.append(i).append("__").toString();
    }

    public HelperReference helper(Object key, Helper type) {
        if (key == null) {
            key = createHelperKey();
        }
        HelperReference reference = this.mHelperReferences.get(key);
        if (reference == null) {
            switch (type) {
                case HORIZONTAL_CHAIN:
                    reference = new HorizontalChainReference(this);
                    break;
                case VERTICAL_CHAIN:
                    reference = new VerticalChainReference(this);
                    break;
                case ALIGN_HORIZONTALLY:
                    reference = new AlignHorizontallyReference(this);
                    break;
                case ALIGN_VERTICALLY:
                    reference = new AlignVerticallyReference(this);
                    break;
                case BARRIER:
                    reference = new BarrierReference(this);
                    break;
                case LAYER:
                default:
                    reference = new HelperReference(this, type);
                    break;
                case HORIZONTAL_FLOW:
                case VERTICAL_FLOW:
                    reference = new FlowReference(this, type);
                    break;
                case GRID:
                case ROW:
                case COLUMN:
                    reference = new GridReference(this, type);
                    break;
            }
            reference.setKey(key);
            this.mHelperReferences.put(key, reference);
        }
        return reference;
    }

    public GuidelineReference horizontalGuideline(Object key) {
        return guideline(key, 0);
    }

    public GuidelineReference verticalGuideline(Object key) {
        return guideline(key, 1);
    }

    public GuidelineReference guideline(Object key, int orientation) {
        ConstraintReference reference = constraints(key);
        if (reference.getFacade() == null || !(reference.getFacade() instanceof GuidelineReference)) {
            GuidelineReference guidelineReference = new GuidelineReference(this);
            guidelineReference.setOrientation(orientation);
            guidelineReference.setKey(key);
            reference.setFacade(guidelineReference);
        }
        return (GuidelineReference) reference.getFacade();
    }

    public BarrierReference barrier(Object key, Direction direction) {
        ConstraintReference reference = constraints(key);
        if (reference.getFacade() == null || !(reference.getFacade() instanceof BarrierReference)) {
            BarrierReference barrierReference = new BarrierReference(this);
            barrierReference.setBarrierDirection(direction);
            reference.setFacade(barrierReference);
        }
        return (BarrierReference) reference.getFacade();
    }

    public GridReference getGrid(Object key, String gridType) {
        ConstraintReference reference = constraints(key);
        if (reference.getFacade() == null || !(reference.getFacade() instanceof GridReference)) {
            Helper Type = Helper.GRID;
            if (gridType.charAt(0) == 'r') {
                Type = Helper.ROW;
            } else if (gridType.charAt(0) == 'c') {
                Type = Helper.COLUMN;
            }
            GridReference gridReference = new GridReference(this, Type);
            reference.setFacade(gridReference);
        }
        return (GridReference) reference.getFacade();
    }

    public FlowReference getFlow(Object key, boolean vertical) {
        ConstraintReference reference = constraints(key);
        if (reference.getFacade() == null || !(reference.getFacade() instanceof FlowReference)) {
            FlowReference flowReference = vertical ? new FlowReference(this, Helper.VERTICAL_FLOW) : new FlowReference(this, Helper.HORIZONTAL_FLOW);
            reference.setFacade(flowReference);
        }
        return (FlowReference) reference.getFacade();
    }

    public VerticalChainReference verticalChain() {
        return (VerticalChainReference) helper(null, Helper.VERTICAL_CHAIN);
    }

    public VerticalChainReference verticalChain(Object... references) {
        VerticalChainReference reference = (VerticalChainReference) helper(null, Helper.VERTICAL_CHAIN);
        reference.add(references);
        return reference;
    }

    public HorizontalChainReference horizontalChain() {
        return (HorizontalChainReference) helper(null, Helper.HORIZONTAL_CHAIN);
    }

    public HorizontalChainReference horizontalChain(Object... references) {
        HorizontalChainReference reference = (HorizontalChainReference) helper(null, Helper.HORIZONTAL_CHAIN);
        reference.add(references);
        return reference;
    }

    public FlowReference getVerticalFlow() {
        return (FlowReference) helper(null, Helper.VERTICAL_FLOW);
    }

    public FlowReference getVerticalFlow(Object... references) {
        FlowReference reference = (FlowReference) helper(null, Helper.VERTICAL_FLOW);
        reference.add(references);
        return reference;
    }

    public FlowReference getHorizontalFlow() {
        return (FlowReference) helper(null, Helper.HORIZONTAL_FLOW);
    }

    public FlowReference getHorizontalFlow(Object... references) {
        FlowReference reference = (FlowReference) helper(null, Helper.HORIZONTAL_FLOW);
        reference.add(references);
        return reference;
    }

    public AlignHorizontallyReference centerHorizontally(Object... references) {
        AlignHorizontallyReference reference = (AlignHorizontallyReference) helper(null, Helper.ALIGN_HORIZONTALLY);
        reference.add(references);
        return reference;
    }

    public AlignVerticallyReference centerVertically(Object... references) {
        AlignVerticallyReference reference = (AlignVerticallyReference) helper(null, Helper.ALIGN_VERTICALLY);
        reference.add(references);
        return reference;
    }

    public void directMapping() {
        for (Object key : this.mReferences.keySet()) {
            Reference ref = constraints(key);
            if (ref instanceof ConstraintReference) {
                ConstraintReference reference = (ConstraintReference) ref;
                reference.setView(key);
            }
        }
    }

    public void map(Object key, Object view) {
        ConstraintReference ref = constraints(key);
        if (ref != null) {
            ref.setView(view);
        }
    }

    public void setTag(String key, String tag) {
        ArrayList<String> list;
        Reference ref = constraints(key);
        if (ref instanceof ConstraintReference) {
            ConstraintReference reference = (ConstraintReference) ref;
            reference.setTag(tag);
            if (!this.mTags.containsKey(tag)) {
                list = new ArrayList<>();
                this.mTags.put(tag, list);
            } else {
                ArrayList<String> list2 = this.mTags.get(tag);
                list = list2;
            }
            list.add(key);
        }
    }

    public ArrayList<String> getIdsForTag(String tag) {
        if (this.mTags.containsKey(tag)) {
            return this.mTags.get(tag);
        }
        return null;
    }

    public void apply(ConstraintWidgetContainer container) {
        HelperReference helperReference;
        HelperWidget helperWidget;
        HelperWidget helperWidget2;
        container.removeAllChildren();
        this.mParent.getWidth().apply(this, container, 0);
        this.mParent.getHeight().apply(this, container, 1);
        for (Object key : this.mHelperReferences.keySet()) {
            HelperWidget helperWidget3 = this.mHelperReferences.get(key).getHelperWidget();
            if (helperWidget3 != null) {
                Reference constraintReference = this.mReferences.get(key);
                if (constraintReference == null) {
                    constraintReference = constraints(key);
                }
                constraintReference.setConstraintWidget(helperWidget3);
            }
        }
        for (Object key2 : this.mReferences.keySet()) {
            Reference reference = this.mReferences.get(key2);
            if (reference != this.mParent && (reference.getFacade() instanceof HelperReference) && (helperWidget2 = ((HelperReference) reference.getFacade()).getHelperWidget()) != null) {
                Reference constraintReference2 = this.mReferences.get(key2);
                if (constraintReference2 == null) {
                    constraintReference2 = constraints(key2);
                }
                constraintReference2.setConstraintWidget(helperWidget2);
            }
        }
        Iterator<Object> it = this.mReferences.keySet().iterator();
        while (it.hasNext()) {
            Reference reference2 = this.mReferences.get(it.next());
            if (reference2 != this.mParent) {
                ConstraintWidget widget = reference2.getConstraintWidget();
                widget.setDebugName(reference2.getKey().toString());
                widget.setParent(null);
                if (reference2.getFacade() instanceof GuidelineReference) {
                    reference2.apply();
                }
                container.add(widget);
            } else {
                reference2.setConstraintWidget(container);
            }
        }
        Iterator<Object> it2 = this.mHelperReferences.keySet().iterator();
        while (it2.hasNext()) {
            HelperReference reference3 = this.mHelperReferences.get(it2.next());
            if (reference3.getHelperWidget() != null) {
                Iterator<Object> it3 = reference3.mReferences.iterator();
                while (it3.hasNext()) {
                    reference3.getHelperWidget().add(this.mReferences.get(it3.next()).getConstraintWidget());
                }
                reference3.apply();
            } else {
                reference3.apply();
            }
        }
        Iterator<Object> it4 = this.mReferences.keySet().iterator();
        while (it4.hasNext()) {
            Reference reference4 = this.mReferences.get(it4.next());
            if (reference4 != this.mParent && (reference4.getFacade() instanceof HelperReference) && (helperWidget = (helperReference = (HelperReference) reference4.getFacade()).getHelperWidget()) != null) {
                Iterator<Object> it5 = helperReference.mReferences.iterator();
                while (it5.hasNext()) {
                    Object keyRef = it5.next();
                    Reference constraintReference3 = this.mReferences.get(keyRef);
                    if (constraintReference3 != null) {
                        helperWidget.add(constraintReference3.getConstraintWidget());
                    } else if (keyRef instanceof Reference) {
                        helperWidget.add(((Reference) keyRef).getConstraintWidget());
                    } else {
                        System.out.println("couldn't find reference for " + keyRef);
                    }
                }
                reference4.apply();
            }
        }
        for (Object key3 : this.mReferences.keySet()) {
            Reference reference5 = this.mReferences.get(key3);
            reference5.apply();
            ConstraintWidget widget2 = reference5.getConstraintWidget();
            if (widget2 != null && key3 != null) {
                widget2.stringId = key3.toString();
            }
        }
    }

    public void baselineNeededFor(Object id) {
        this.mBaselineNeeded.add(id);
        this.mDirtyBaselineNeededWidgets = true;
    }

    public boolean isBaselineNeeded(ConstraintWidget constraintWidget) {
        if (this.mDirtyBaselineNeededWidgets) {
            this.mBaselineNeededWidgets.clear();
            Iterator<Object> it = this.mBaselineNeeded.iterator();
            while (it.hasNext()) {
                Object id = it.next();
                ConstraintWidget widget = this.mReferences.get(id).getConstraintWidget();
                if (widget != null) {
                    this.mBaselineNeededWidgets.add(widget);
                }
            }
            this.mDirtyBaselineNeededWidgets = false;
        }
        return this.mBaselineNeededWidgets.contains(constraintWidget);
    }
}
