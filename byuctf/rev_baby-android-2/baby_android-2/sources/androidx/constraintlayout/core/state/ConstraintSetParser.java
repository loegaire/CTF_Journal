package androidx.constraintlayout.core.state;

import androidx.constraintlayout.core.motion.utils.TypedBundle;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.core.parser.CLArray;
import androidx.constraintlayout.core.parser.CLElement;
import androidx.constraintlayout.core.parser.CLKey;
import androidx.constraintlayout.core.parser.CLNumber;
import androidx.constraintlayout.core.parser.CLObject;
import androidx.constraintlayout.core.parser.CLParser;
import androidx.constraintlayout.core.parser.CLParsingException;
import androidx.constraintlayout.core.parser.CLString;
import androidx.constraintlayout.core.state.State;
import androidx.constraintlayout.core.state.helpers.ChainReference;
import androidx.constraintlayout.core.state.helpers.FlowReference;
import androidx.constraintlayout.core.state.helpers.GridReference;
import androidx.constraintlayout.core.state.helpers.GuidelineReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes.dex */
public class ConstraintSetParser {
    private static final boolean PARSER_DEBUG = false;

    interface GeneratedValue {
        float value();
    }

    public enum MotionLayoutDebugFlags {
        NONE,
        SHOW_ALL,
        UNKNOWN
    }

    public static class DesignElement {
        String mId;
        HashMap<String, String> mParams;
        String mType;

        public String getId() {
            return this.mId;
        }

        public String getType() {
            return this.mType;
        }

        public HashMap<String, String> getParams() {
            return this.mParams;
        }

        DesignElement(String id, String type, HashMap<String, String> params) {
            this.mId = id;
            this.mType = type;
            this.mParams = params;
        }
    }

    public static class LayoutVariables {
        HashMap<String, Integer> mMargins = new HashMap<>();
        HashMap<String, GeneratedValue> mGenerators = new HashMap<>();
        HashMap<String, ArrayList<String>> mArrayIds = new HashMap<>();

        void put(String elementName, int element) {
            this.mMargins.put(elementName, Integer.valueOf(element));
        }

        void put(String elementName, float start, float incrementBy) {
            if (this.mGenerators.containsKey(elementName) && (this.mGenerators.get(elementName) instanceof OverrideValue)) {
                return;
            }
            this.mGenerators.put(elementName, new Generator(start, incrementBy));
        }

        void put(String elementName, float from, float to, float step, String prefix, String postfix) {
            if (this.mGenerators.containsKey(elementName) && (this.mGenerators.get(elementName) instanceof OverrideValue)) {
                return;
            }
            FiniteGenerator generator = new FiniteGenerator(from, to, step, prefix, postfix);
            this.mGenerators.put(elementName, generator);
            this.mArrayIds.put(elementName, generator.array());
        }

        public void putOverride(String elementName, float value) {
            GeneratedValue generator = new OverrideValue(value);
            this.mGenerators.put(elementName, generator);
        }

        float get(Object elementName) {
            if (elementName instanceof CLString) {
                String stringValue = ((CLString) elementName).content();
                if (this.mGenerators.containsKey(stringValue)) {
                    return this.mGenerators.get(stringValue).value();
                }
                if (this.mMargins.containsKey(stringValue)) {
                    return this.mMargins.get(stringValue).floatValue();
                }
                return 0.0f;
            }
            if (elementName instanceof CLNumber) {
                return ((CLNumber) elementName).getFloat();
            }
            return 0.0f;
        }

        ArrayList<String> getList(String elementName) {
            if (this.mArrayIds.containsKey(elementName)) {
                return this.mArrayIds.get(elementName);
            }
            return null;
        }

        void put(String elementName, ArrayList<String> elements) {
            this.mArrayIds.put(elementName, elements);
        }
    }

    static class Generator implements GeneratedValue {
        float mCurrent;
        float mIncrementBy;
        float mStart;
        boolean mStop = false;

        Generator(float start, float incrementBy) {
            this.mStart = 0.0f;
            this.mIncrementBy = 0.0f;
            this.mCurrent = 0.0f;
            this.mStart = start;
            this.mIncrementBy = incrementBy;
            this.mCurrent = start;
        }

        @Override // androidx.constraintlayout.core.state.ConstraintSetParser.GeneratedValue
        public float value() {
            if (!this.mStop) {
                this.mCurrent += this.mIncrementBy;
            }
            return this.mCurrent;
        }
    }

    static class FiniteGenerator implements GeneratedValue {
        float mFrom;
        float mInitial;
        float mMax;
        String mPostfix;
        String mPrefix;
        float mStep;
        float mTo;
        boolean mStop = false;
        float mCurrent = 0.0f;

        FiniteGenerator(float from, float to, float step, String prefix, String postfix) {
            this.mFrom = 0.0f;
            this.mTo = 0.0f;
            this.mStep = 0.0f;
            this.mFrom = from;
            this.mTo = to;
            this.mStep = step;
            this.mPrefix = prefix == null ? "" : prefix;
            this.mPostfix = postfix != null ? postfix : "";
            this.mMax = to;
            this.mInitial = from;
        }

        @Override // androidx.constraintlayout.core.state.ConstraintSetParser.GeneratedValue
        public float value() {
            float f = this.mCurrent;
            if (f >= this.mMax) {
                this.mStop = true;
            }
            if (!this.mStop) {
                this.mCurrent = f + this.mStep;
            }
            return this.mCurrent;
        }

        public ArrayList<String> array() {
            ArrayList<String> array = new ArrayList<>();
            int value = (int) this.mInitial;
            int maxInt = (int) this.mMax;
            for (int i = value; i <= maxInt; i++) {
                array.add(this.mPrefix + value + this.mPostfix);
                value += (int) this.mStep;
            }
            return array;
        }
    }

    static class OverrideValue implements GeneratedValue {
        float mValue;

        OverrideValue(float value) {
            this.mValue = value;
        }

        @Override // androidx.constraintlayout.core.state.ConstraintSetParser.GeneratedValue
        public float value() {
            return this.mValue;
        }
    }

    public static void parseJSON(String content, Transition transition, int state) {
        try {
            CLObject json = CLParser.parse(content);
            ArrayList<String> elements = json.names();
            if (elements == null) {
                return;
            }
            Iterator<String> it = elements.iterator();
            while (it.hasNext()) {
                String elementName = it.next();
                CLElement base_element = json.get(elementName);
                if (base_element instanceof CLObject) {
                    CLObject element = (CLObject) base_element;
                    CLObject customProperties = element.getObjectOrNull("custom");
                    if (customProperties != null) {
                        ArrayList<String> properties = customProperties.names();
                        Iterator<String> it2 = properties.iterator();
                        while (it2.hasNext()) {
                            String property = it2.next();
                            CLElement value = customProperties.get(property);
                            if (value instanceof CLNumber) {
                                transition.addCustomFloat(state, elementName, property, value.getFloat());
                            } else if (value instanceof CLString) {
                                long color = parseColorString(value.content());
                                if (color != -1) {
                                    transition.addCustomColor(state, elementName, property, (int) color);
                                }
                            }
                        }
                    }
                }
            }
        } catch (CLParsingException e) {
            System.err.println("Error parsing JSON " + e);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static void parseMotionSceneJSON(CoreMotionScene scene, String content) {
        char c;
        try {
            CLObject json = CLParser.parse(content);
            ArrayList<String> elements = json.names();
            if (elements == null) {
                return;
            }
            Iterator<String> it = elements.iterator();
            while (it.hasNext()) {
                String elementName = it.next();
                CLElement element = json.get(elementName);
                if (element instanceof CLObject) {
                    CLObject clObject = (CLObject) element;
                    switch (elementName.hashCode()) {
                        case -2137403731:
                            if (elementName.equals("Header")) {
                                c = 2;
                                break;
                            }
                            c = 65535;
                            break;
                        case -241441378:
                            if (elementName.equals(TypedValues.TransitionType.NAME)) {
                                c = 1;
                                break;
                            }
                            c = 65535;
                            break;
                        case 1101852654:
                            if (elementName.equals("ConstraintSets")) {
                                c = 0;
                                break;
                            }
                            c = 65535;
                            break;
                        default:
                            c = 65535;
                            break;
                    }
                    switch (c) {
                        case 0:
                            parseConstraintSets(scene, clObject);
                            break;
                        case 1:
                            parseTransitions(scene, clObject);
                            break;
                        case 2:
                            parseHeader(scene, clObject);
                            break;
                    }
                }
            }
        } catch (CLParsingException e) {
            System.err.println("Error parsing JSON " + e);
        }
    }

    static void parseConstraintSets(CoreMotionScene scene, CLObject json) throws CLParsingException {
        ArrayList<String> constraintSetNames = json.names();
        if (constraintSetNames == null) {
            return;
        }
        Iterator<String> it = constraintSetNames.iterator();
        while (it.hasNext()) {
            String csName = it.next();
            CLObject constraintSet = json.getObject(csName);
            boolean added = false;
            String ext = constraintSet.getStringOrNull("Extends");
            if (ext != null && !ext.isEmpty()) {
                String base = scene.getConstraintSet(ext);
                if (base != null) {
                    CLObject baseJson = CLParser.parse(base);
                    ArrayList<String> widgetsOverride = constraintSet.names();
                    if (widgetsOverride != null) {
                        Iterator<String> it2 = widgetsOverride.iterator();
                        while (it2.hasNext()) {
                            String widgetOverrideName = it2.next();
                            CLElement value = constraintSet.get(widgetOverrideName);
                            if (value instanceof CLObject) {
                                override(baseJson, widgetOverrideName, (CLObject) value);
                            }
                        }
                        scene.setConstraintSetContent(csName, baseJson.toJSON());
                        added = true;
                    }
                }
            }
            if (!added) {
                scene.setConstraintSetContent(csName, constraintSet.toJSON());
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    static void override(CLObject baseJson, String name, CLObject overrideValue) throws CLParsingException {
        char c;
        if (!baseJson.has(name)) {
            baseJson.put(name, overrideValue);
            return;
        }
        CLObject base = baseJson.getObject(name);
        ArrayList<String> keys = overrideValue.names();
        Iterator<String> it = keys.iterator();
        while (it.hasNext()) {
            String key = it.next();
            if (!key.equals("clear")) {
                base.put(key, overrideValue.get(key));
            } else {
                CLArray toClear = overrideValue.getArray("clear");
                for (int i = 0; i < toClear.size(); i++) {
                    String clearedKey = toClear.getStringOrNull(i);
                    if (clearedKey != null) {
                        switch (clearedKey.hashCode()) {
                            case -1727069561:
                                if (clearedKey.equals("transforms")) {
                                    c = 2;
                                    break;
                                }
                                c = 65535;
                                break;
                            case -1606703562:
                                if (clearedKey.equals("constraints")) {
                                    c = 1;
                                    break;
                                }
                                c = 65535;
                                break;
                            case 414334925:
                                if (clearedKey.equals("dimensions")) {
                                    c = 0;
                                    break;
                                }
                                c = 65535;
                                break;
                            default:
                                c = 65535;
                                break;
                        }
                        switch (c) {
                            case 0:
                                base.remove("width");
                                base.remove("height");
                                break;
                            case 1:
                                base.remove("start");
                                base.remove("end");
                                base.remove("top");
                                base.remove("bottom");
                                base.remove("baseline");
                                base.remove("center");
                                base.remove("centerHorizontally");
                                base.remove("centerVertically");
                                break;
                            case 2:
                                base.remove("visibility");
                                base.remove("alpha");
                                base.remove("pivotX");
                                base.remove("pivotY");
                                base.remove("rotationX");
                                base.remove("rotationY");
                                base.remove("rotationZ");
                                base.remove("scaleX");
                                base.remove("scaleY");
                                base.remove("translationX");
                                base.remove("translationY");
                                break;
                            default:
                                base.remove(clearedKey);
                                break;
                        }
                    }
                }
            }
        }
    }

    static void parseTransitions(CoreMotionScene scene, CLObject json) throws CLParsingException {
        ArrayList<String> elements = json.names();
        if (elements == null) {
            return;
        }
        Iterator<String> it = elements.iterator();
        while (it.hasNext()) {
            String elementName = it.next();
            scene.setTransitionContent(elementName, json.getObject(elementName).toJSON());
        }
    }

    static void parseHeader(CoreMotionScene scene, CLObject json) {
        String name = json.getStringOrNull("export");
        if (name != null) {
            scene.setDebugName(name);
        }
    }

    public static void parseJSON(String content, State state, LayoutVariables layoutVariables) throws CLParsingException {
        try {
            CLObject json = CLParser.parse(content);
            populateState(json, state, layoutVariables);
        } catch (CLParsingException e) {
            System.err.println("Error parsing JSON " + e);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x00bd, code lost:
    
        if (r4.equals("barrier") != false) goto L69;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void populateState(androidx.constraintlayout.core.parser.CLObject r10, androidx.constraintlayout.core.state.State r11, androidx.constraintlayout.core.state.ConstraintSetParser.LayoutVariables r12) throws androidx.constraintlayout.core.parser.CLParsingException {
        /*
            Method dump skipped, instructions count: 396
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.constraintlayout.core.state.ConstraintSetParser.populateState(androidx.constraintlayout.core.parser.CLObject, androidx.constraintlayout.core.state.State, androidx.constraintlayout.core.state.ConstraintSetParser$LayoutVariables):void");
    }

    private static void parseVariables(State state, LayoutVariables layoutVariables, CLObject json) throws CLParsingException {
        ArrayList<String> elements = json.names();
        if (elements == null) {
            return;
        }
        Iterator<String> it = elements.iterator();
        while (it.hasNext()) {
            String elementName = it.next();
            CLElement element = json.get(elementName);
            if (element instanceof CLNumber) {
                layoutVariables.put(elementName, element.getInt());
            } else if (element instanceof CLObject) {
                CLObject obj = (CLObject) element;
                if (obj.has(TypedValues.TransitionType.S_FROM) && obj.has(TypedValues.TransitionType.S_TO)) {
                    float from = layoutVariables.get(obj.get(TypedValues.TransitionType.S_FROM));
                    float to = layoutVariables.get(obj.get(TypedValues.TransitionType.S_TO));
                    String prefix = obj.getStringOrNull("prefix");
                    String postfix = obj.getStringOrNull("postfix");
                    layoutVariables.put(elementName, from, to, 1.0f, prefix, postfix);
                } else if (obj.has(TypedValues.TransitionType.S_FROM) && obj.has("step")) {
                    float start = layoutVariables.get(obj.get(TypedValues.TransitionType.S_FROM));
                    float increment = layoutVariables.get(obj.get("step"));
                    layoutVariables.put(elementName, start, increment);
                } else if (obj.has("ids")) {
                    CLArray ids = obj.getArray("ids");
                    ArrayList<String> arrayIds = new ArrayList<>();
                    for (int i = 0; i < ids.size(); i++) {
                        arrayIds.add(ids.getString(i));
                    }
                    layoutVariables.put(elementName, arrayIds);
                } else if (obj.has("tag")) {
                    layoutVariables.put(elementName, state.getIdsForTag(obj.getString("tag")));
                }
            }
        }
    }

    public static void parseDesignElementsJSON(String content, ArrayList<DesignElement> list) throws CLParsingException {
        char c;
        CLObject json = CLParser.parse(content);
        ArrayList<String> elements = json.names();
        if (elements != null && 0 < elements.size()) {
            String elementName = elements.get(0);
            CLElement element = json.get(elementName);
            int i = 0;
            switch (elementName.hashCode()) {
                case 2043588062:
                    if (elementName.equals("Design")) {
                        c = 0;
                        break;
                    }
                default:
                    c = 65535;
                    break;
            }
            switch (c) {
                case 0:
                    if (element instanceof CLObject) {
                        CLObject obj = (CLObject) element;
                        ArrayList<String> elements2 = obj.names();
                        int j = 0;
                        while (j < elements2.size()) {
                            String designElementName = elements2.get(j);
                            CLObject designElement = (CLObject) ((CLObject) element).get(designElementName);
                            System.out.printf("element found " + designElementName + "", new Object[i]);
                            String type = designElement.getStringOrNull("type");
                            if (type != null) {
                                HashMap<String, String> parameters = new HashMap<>();
                                int size = designElement.size();
                                for (int k = 0; k < size; k++) {
                                    CLKey key = (CLKey) designElement.get(j);
                                    String paramName = key.content();
                                    String paramValue = key.getValue().content();
                                    if (paramValue != null) {
                                        parameters.put(paramName, paramValue);
                                    }
                                }
                                list.add(new DesignElement(elementName, type, parameters));
                            }
                            j++;
                            i = 0;
                        }
                        break;
                    }
                    break;
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    static void parseHelpers(State state, LayoutVariables layoutVariables, CLArray element) throws CLParsingException {
        char c;
        for (int i = 0; i < element.size(); i++) {
            CLElement helper = element.get(i);
            if (helper instanceof CLArray) {
                CLArray array = (CLArray) helper;
                if (array.size() > 1) {
                    String string = array.getString(0);
                    switch (string.hashCode()) {
                        case -1785507558:
                            if (string.equals("vGuideline")) {
                                c = 3;
                                break;
                            }
                            c = 65535;
                            break;
                        case -1252464839:
                            if (string.equals("hChain")) {
                                c = 0;
                                break;
                            }
                            c = 65535;
                            break;
                        case -851656725:
                            if (string.equals("vChain")) {
                                c = 1;
                                break;
                            }
                            c = 65535;
                            break;
                        case 965681512:
                            if (string.equals("hGuideline")) {
                                c = 2;
                                break;
                            }
                            c = 65535;
                            break;
                        default:
                            c = 65535;
                            break;
                    }
                    switch (c) {
                        case 0:
                            parseChain(0, state, layoutVariables, array);
                            break;
                        case 1:
                            parseChain(1, state, layoutVariables, array);
                            break;
                        case 2:
                            parseGuideline(0, state, array);
                            break;
                        case 3:
                            parseGuideline(1, state, array);
                            break;
                    }
                }
            }
        }
    }

    static void parseGenerate(State state, LayoutVariables layoutVariables, CLObject json) throws CLParsingException {
        ArrayList<String> elements = json.names();
        if (elements == null) {
            return;
        }
        Iterator<String> it = elements.iterator();
        while (it.hasNext()) {
            String elementName = it.next();
            CLElement element = json.get(elementName);
            ArrayList<String> arrayIds = layoutVariables.getList(elementName);
            if (arrayIds != null && (element instanceof CLObject)) {
                Iterator<String> it2 = arrayIds.iterator();
                while (it2.hasNext()) {
                    String id = it2.next();
                    parseWidget(state, layoutVariables, id, (CLObject) element);
                }
            }
        }
    }

    static void parseChain(int orientation, State state, LayoutVariables margins, CLArray helper) throws CLParsingException {
        boolean z;
        String styleValue;
        ChainReference chain = orientation == 0 ? state.horizontalChain() : state.verticalChain();
        CLElement refs = helper.get(1);
        if ((refs instanceof CLArray) && ((CLArray) refs).size() >= 1) {
            for (int i = 0; i < ((CLArray) refs).size(); i++) {
                chain.add(((CLArray) refs).getString(i));
            }
            int i2 = helper.size();
            if (i2 > 2) {
                CLElement params = helper.get(2);
                if (!(params instanceof CLObject)) {
                    return;
                }
                CLObject obj = (CLObject) params;
                ArrayList<String> constraints = obj.names();
                Iterator<String> it = constraints.iterator();
                while (it.hasNext()) {
                    String constraintName = it.next();
                    switch (constraintName.hashCode()) {
                        case 109780401:
                            if (constraintName.equals("style")) {
                                z = false;
                                break;
                            }
                        default:
                            z = -1;
                            break;
                    }
                    switch (z) {
                        case false:
                            CLElement styleObject = ((CLObject) params).get(constraintName);
                            if ((styleObject instanceof CLArray) && ((CLArray) styleObject).size() > 1) {
                                styleValue = ((CLArray) styleObject).getString(0);
                                float biasValue = ((CLArray) styleObject).getFloat(1);
                                chain.bias(biasValue);
                            } else {
                                styleValue = styleObject.content();
                            }
                            switch (styleValue) {
                                case "packed":
                                    chain.style(State.Chain.PACKED);
                                    break;
                                case "spread_inside":
                                    chain.style(State.Chain.SPREAD_INSIDE);
                                    break;
                                default:
                                    chain.style(State.Chain.SPREAD);
                                    break;
                            }
                            break;
                        default:
                            parseConstraint(state, margins, (CLObject) params, chain, constraintName);
                            break;
                    }
                }
            }
        }
    }

    private static float toPix(State state, float dp) {
        return state.getDpToPixel().toPixels(dp);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static void parseChainType(String orientation, State state, String chainName, LayoutVariables margins, CLObject object) throws CLParsingException {
        int i;
        CLElement refs;
        int i2;
        CLElement refs2;
        int i3;
        int i4;
        int i5;
        int i6;
        String styleValue;
        int i7 = 0;
        ChainReference chain = orientation.charAt(0) == 'h' ? state.horizontalChain() : state.verticalChain();
        chain.setKey(chainName);
        Iterator<String> it = object.names().iterator();
        while (it.hasNext()) {
            String params = it.next();
            int i8 = -1;
            int i9 = 3;
            int i10 = 2;
            int i11 = 1;
            switch (params.hashCode()) {
                case -1383228885:
                    if (params.equals("bottom")) {
                        i = 4;
                        break;
                    }
                    i = -1;
                    break;
                case -567445985:
                    if (params.equals("contains")) {
                        i = i7;
                        break;
                    }
                    i = -1;
                    break;
                case 100571:
                    if (params.equals("end")) {
                        i = 2;
                        break;
                    }
                    i = -1;
                    break;
                case 115029:
                    if (params.equals("top")) {
                        i = 3;
                        break;
                    }
                    i = -1;
                    break;
                case 3317767:
                    if (params.equals("left")) {
                        i = 5;
                        break;
                    }
                    i = -1;
                    break;
                case 108511772:
                    if (params.equals("right")) {
                        i = 6;
                        break;
                    }
                    i = -1;
                    break;
                case 109757538:
                    if (params.equals("start")) {
                        i = 1;
                        break;
                    }
                    i = -1;
                    break;
                case 109780401:
                    if (params.equals("style")) {
                        i = 7;
                        break;
                    }
                    i = -1;
                    break;
                default:
                    i = -1;
                    break;
            }
            switch (i) {
                case 0:
                    CLElement refs3 = object.get(params);
                    if (!(refs3 instanceof CLArray)) {
                        refs = refs3;
                    } else if (((CLArray) refs3).size() >= 1) {
                        int i12 = 0;
                        while (i12 < ((CLArray) refs3).size()) {
                            CLElement chainElement = ((CLArray) refs3).get(i12);
                            if (chainElement instanceof CLArray) {
                                CLArray array = (CLArray) chainElement;
                                if (array.size() <= 0) {
                                    i2 = i12;
                                    refs2 = refs3;
                                    i3 = i11;
                                    i4 = i10;
                                    i5 = i9;
                                } else {
                                    String id = array.get(i7).content();
                                    float weight = Float.NaN;
                                    float preMargin = Float.NaN;
                                    float postMargin = Float.NaN;
                                    float preGoneMargin = Float.NaN;
                                    float postGoneMargin = Float.NaN;
                                    switch (array.size()) {
                                        case 2:
                                            i6 = i9;
                                            weight = array.getFloat(i11);
                                            break;
                                        case 3:
                                            i6 = i9;
                                            weight = array.getFloat(i11);
                                            float pix = toPix(state, array.getFloat(i10));
                                            preMargin = pix;
                                            postMargin = pix;
                                            break;
                                        case 4:
                                            weight = array.getFloat(i11);
                                            preMargin = toPix(state, array.getFloat(i10));
                                            i6 = 3;
                                            postMargin = toPix(state, array.getFloat(3));
                                            break;
                                        case 5:
                                        default:
                                            i6 = i9;
                                            break;
                                        case 6:
                                            weight = array.getFloat(i11);
                                            preMargin = toPix(state, array.getFloat(i10));
                                            postMargin = toPix(state, array.getFloat(i9));
                                            preGoneMargin = toPix(state, array.getFloat(4));
                                            postGoneMargin = toPix(state, array.getFloat(5));
                                            i6 = 3;
                                            break;
                                    }
                                    i2 = i12;
                                    refs2 = refs3;
                                    i3 = i11;
                                    i4 = i10;
                                    i5 = i6;
                                    chain.addChainElement(id, weight, preMargin, postMargin, preGoneMargin, postGoneMargin);
                                }
                            } else {
                                i2 = i12;
                                refs2 = refs3;
                                i3 = i11;
                                i4 = i10;
                                i5 = i9;
                                chain.add(chainElement.content());
                            }
                            i12 = i2 + 1;
                            i9 = i5;
                            refs3 = refs2;
                            i11 = i3;
                            i10 = i4;
                            i7 = 0;
                        }
                        break;
                    } else {
                        refs = refs3;
                    }
                    System.err.println(chainName + " contains should be an array \"" + refs.content() + "\"");
                    return;
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    parseConstraint(state, margins, object, chain, params);
                    break;
                case 7:
                    CLElement styleObject = object.get(params);
                    if ((styleObject instanceof CLArray) && ((CLArray) styleObject).size() > 1) {
                        styleValue = ((CLArray) styleObject).getString(i7);
                        float biasValue = ((CLArray) styleObject).getFloat(1);
                        chain.bias(biasValue);
                    } else {
                        styleValue = styleObject.content();
                    }
                    switch (styleValue.hashCode()) {
                        case -995865480:
                            if (styleValue.equals("packed")) {
                                i8 = i7;
                                break;
                            }
                            break;
                        case 1311368264:
                            if (styleValue.equals("spread_inside")) {
                                i8 = 1;
                                break;
                            }
                            break;
                    }
                    switch (i8) {
                        case 0:
                            chain.style(State.Chain.PACKED);
                            break;
                        case 1:
                            chain.style(State.Chain.SPREAD_INSIDE);
                            break;
                        default:
                            chain.style(State.Chain.SPREAD);
                            break;
                    }
            }
            i7 = 0;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private static void parseGridType(String gridType, State state, String name, LayoutVariables layoutVariables, CLObject element) throws CLParsingException {
        char c;
        float paddingStart;
        float paddingTop;
        float paddingStart2;
        float paddingBottom;
        GridReference grid = state.getGrid(name, gridType);
        Iterator<String> it = element.names().iterator();
        while (it.hasNext()) {
            String param = it.next();
            switch (param.hashCode()) {
                case -1439500848:
                    if (param.equals("orientation")) {
                        c = 1;
                        break;
                    }
                    c = 65535;
                    break;
                case -806339567:
                    if (param.equals("padding")) {
                        c = '\n';
                        break;
                    }
                    c = 65535;
                    break;
                case -567445985:
                    if (param.equals("contains")) {
                        c = 0;
                        break;
                    }
                    c = 65535;
                    break;
                case 3169614:
                    if (param.equals("hGap")) {
                        c = 4;
                        break;
                    }
                    c = 65535;
                    break;
                case 3506649:
                    if (param.equals("rows")) {
                        c = 2;
                        break;
                    }
                    c = 65535;
                    break;
                case 3586688:
                    if (param.equals("vGap")) {
                        c = 5;
                        break;
                    }
                    c = 65535;
                    break;
                case 97513095:
                    if (param.equals("flags")) {
                        c = 11;
                        break;
                    }
                    c = 65535;
                    break;
                case 109497044:
                    if (param.equals("skips")) {
                        c = 7;
                        break;
                    }
                    c = 65535;
                    break;
                case 109638249:
                    if (param.equals("spans")) {
                        c = 6;
                        break;
                    }
                    c = 65535;
                    break;
                case 144441793:
                    if (param.equals("rowWeights")) {
                        c = '\b';
                        break;
                    }
                    c = 65535;
                    break;
                case 949721053:
                    if (param.equals("columns")) {
                        c = 3;
                        break;
                    }
                    c = 65535;
                    break;
                case 2033353925:
                    if (param.equals("columnWeights")) {
                        c = '\t';
                        break;
                    }
                    c = 65535;
                    break;
                default:
                    c = 65535;
                    break;
            }
            switch (c) {
                case 0:
                    CLArray list = element.getArrayOrNull(param);
                    if (list != null) {
                        for (int j = 0; j < list.size(); j++) {
                            String elementNameReference = list.get(j).content();
                            ConstraintReference elementReference = state.constraints(elementNameReference);
                            grid.add(elementReference);
                        }
                        break;
                    } else {
                        break;
                    }
                case 1:
                    int orientation = element.get(param).getInt();
                    grid.setOrientation(orientation);
                    break;
                case 2:
                    int rows = element.get(param).getInt();
                    if (rows > 0) {
                        grid.setRowsSet(rows);
                        break;
                    } else {
                        break;
                    }
                case 3:
                    int columns = element.get(param).getInt();
                    if (columns > 0) {
                        grid.setColumnsSet(columns);
                        break;
                    } else {
                        break;
                    }
                case 4:
                    float hGap = element.get(param).getFloat();
                    grid.setHorizontalGaps(toPix(state, hGap));
                    break;
                case 5:
                    float vGap = element.get(param).getFloat();
                    grid.setVerticalGaps(toPix(state, vGap));
                    break;
                case 6:
                    String spans = element.get(param).content();
                    if (spans == null || !spans.contains(":")) {
                        break;
                    } else {
                        grid.setSpans(spans);
                        break;
                    }
                case 7:
                    String skips = element.get(param).content();
                    if (skips == null || !skips.contains(":")) {
                        break;
                    } else {
                        grid.setSkips(skips);
                        break;
                    }
                    break;
                case '\b':
                    String rowWeights = element.get(param).content();
                    if (rowWeights == null || !rowWeights.contains(",")) {
                        break;
                    } else {
                        grid.setRowWeights(rowWeights);
                        break;
                    }
                case '\t':
                    String columnWeights = element.get(param).content();
                    if (columnWeights == null || !columnWeights.contains(",")) {
                        break;
                    } else {
                        grid.setColumnWeights(columnWeights);
                        break;
                    }
                case '\n':
                    CLElement paddingObject = element.get(param);
                    if ((paddingObject instanceof CLArray) && ((CLArray) paddingObject).size() > 1) {
                        paddingStart = ((CLArray) paddingObject).getInt(0);
                        paddingStart2 = paddingStart;
                        paddingTop = ((CLArray) paddingObject).getInt(1);
                        paddingBottom = paddingTop;
                        if (((CLArray) paddingObject).size() > 2) {
                            float paddingEnd = ((CLArray) paddingObject).getInt(2);
                            try {
                                paddingBottom = ((CLArray) paddingObject).getInt(3);
                            } catch (ArrayIndexOutOfBoundsException e) {
                                paddingBottom = 0.0f;
                            }
                            paddingStart2 = paddingEnd;
                        }
                    } else {
                        paddingStart = paddingObject.getInt();
                        paddingTop = paddingStart;
                        paddingStart2 = paddingStart;
                        paddingBottom = paddingStart;
                    }
                    grid.setPaddingStart(Math.round(toPix(state, paddingStart)));
                    grid.setPaddingTop(Math.round(toPix(state, paddingTop)));
                    grid.setPaddingEnd(Math.round(toPix(state, paddingStart2)));
                    grid.setPaddingBottom(Math.round(toPix(state, paddingBottom)));
                    break;
                case 11:
                    int flagValue = 0;
                    String flags = "";
                    try {
                        CLElement obj = element.get(param);
                        if (obj instanceof CLNumber) {
                            flagValue = obj.getInt();
                        } else {
                            flags = obj.content();
                        }
                    } catch (Exception ex) {
                        System.err.println("Error parsing grid flags " + ex);
                    }
                    if (flags != null && !flags.isEmpty()) {
                        grid.setFlags(flags);
                        break;
                    } else {
                        grid.setFlags(flagValue);
                        break;
                    }
                    break;
                default:
                    ConstraintReference reference = state.constraints(name);
                    applyAttribute(state, layoutVariables, reference, element, param);
                    break;
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static void parseFlowType(String flowType, State state, String flowName, LayoutVariables layoutVariables, CLObject element) throws CLParsingException {
        int i;
        float preMargin;
        float postMargin;
        float paddingLeft;
        float paddingTop;
        float paddingLeft2;
        float paddingBottom;
        Float vLastBiasValue;
        Float vLastBiasValue2;
        Float vFirstBiasValue;
        Float hLastBiasValue;
        Float hLastBiasValue2;
        Float hFirstBiasValue;
        String vStyleValueStr;
        String hStyleValueStr;
        int i2 = 0;
        int i3 = 1;
        boolean isVertical = flowType.charAt(0) == 'v';
        FlowReference flow = state.getFlow(flowName, isVertical);
        Iterator<String> it = element.names().iterator();
        while (it.hasNext()) {
            String param = it.next();
            int i4 = -1;
            switch (param.hashCode()) {
                case -1254185091:
                    if (param.equals("hAlign")) {
                        i = 8;
                        break;
                    }
                    i = -1;
                    break;
                case -1237307863:
                    if (param.equals("hStyle")) {
                        i = 12;
                        break;
                    }
                    i = -1;
                    break;
                case -1198076529:
                    if (param.equals("hFlowBias")) {
                        i = 10;
                        break;
                    }
                    i = -1;
                    break;
                case -853376977:
                    if (param.equals("vAlign")) {
                        i = 7;
                        break;
                    }
                    i = -1;
                    break;
                case -836499749:
                    if (param.equals("vStyle")) {
                        i = 11;
                        break;
                    }
                    i = -1;
                    break;
                case -806339567:
                    if (param.equals("padding")) {
                        i = 6;
                        break;
                    }
                    i = -1;
                    break;
                case -732635235:
                    if (param.equals("vFlowBias")) {
                        i = 9;
                        break;
                    }
                    i = -1;
                    break;
                case -567445985:
                    if (param.equals("contains")) {
                        i = i2;
                        break;
                    }
                    i = -1;
                    break;
                case -488900360:
                    if (param.equals("maxElement")) {
                        i = 5;
                        break;
                    }
                    i = -1;
                    break;
                case 3169614:
                    if (param.equals("hGap")) {
                        i = 4;
                        break;
                    }
                    i = -1;
                    break;
                case 3575610:
                    if (param.equals("type")) {
                        i = i3;
                        break;
                    }
                    i = -1;
                    break;
                case 3586688:
                    if (param.equals("vGap")) {
                        i = 3;
                        break;
                    }
                    i = -1;
                    break;
                case 3657802:
                    if (param.equals("wrap")) {
                        i = 2;
                        break;
                    }
                    i = -1;
                    break;
                default:
                    i = -1;
                    break;
            }
            switch (i) {
                case 0:
                    CLElement refs = element.get(param);
                    if (!(refs instanceof CLArray) || ((CLArray) refs).size() < i3) {
                        System.err.println(flowName + " contains should be an array \"" + refs.content() + "\"");
                        return;
                    }
                    int i5 = 0;
                    while (i5 < ((CLArray) refs).size()) {
                        CLElement chainElement = ((CLArray) refs).get(i5);
                        if (chainElement instanceof CLArray) {
                            CLArray array = (CLArray) chainElement;
                            if (array.size() > 0) {
                                String id = array.get(0).content();
                                float weight = Float.NaN;
                                switch (array.size()) {
                                    case 2:
                                        weight = array.getFloat(1);
                                        preMargin = Float.NaN;
                                        postMargin = Float.NaN;
                                        break;
                                    case 3:
                                        weight = array.getFloat(1);
                                        postMargin = toPix(state, array.getFloat(2));
                                        preMargin = postMargin;
                                        break;
                                    case 4:
                                        weight = array.getFloat(i3);
                                        float preMargin2 = toPix(state, array.getFloat(2));
                                        float postMargin2 = toPix(state, array.getFloat(3));
                                        preMargin = preMargin2;
                                        postMargin = postMargin2;
                                        break;
                                    default:
                                        preMargin = Float.NaN;
                                        postMargin = Float.NaN;
                                        break;
                                }
                                flow.addFlowElement(id, weight, preMargin, postMargin);
                            }
                        } else {
                            flow.add(chainElement.content());
                        }
                        i5++;
                        i3 = 1;
                    }
                    break;
                    break;
                case 1:
                    if (element.get(param).content().equals("hFlow")) {
                        flow.setOrientation(0);
                        break;
                    } else {
                        flow.setOrientation(i3);
                        break;
                    }
                case 2:
                    String wrapValue = element.get(param).content();
                    flow.setWrapMode(State.Wrap.getValueByString(wrapValue));
                    break;
                case 3:
                    int vGapValue = element.get(param).getInt();
                    flow.setVerticalGap(vGapValue);
                    break;
                case 4:
                    int hGapValue = element.get(param).getInt();
                    flow.setHorizontalGap(hGapValue);
                    break;
                case 5:
                    int maxElementValue = element.get(param).getInt();
                    flow.setMaxElementsWrap(maxElementValue);
                    break;
                case 6:
                    CLElement paddingObject = element.get(param);
                    if ((paddingObject instanceof CLArray) && ((CLArray) paddingObject).size() > i3) {
                        paddingLeft = ((CLArray) paddingObject).getInt(0);
                        paddingLeft2 = paddingLeft;
                        paddingTop = ((CLArray) paddingObject).getInt(i3);
                        paddingBottom = paddingTop;
                        if (((CLArray) paddingObject).size() > 2) {
                            float paddingRight = ((CLArray) paddingObject).getInt(2);
                            try {
                                paddingBottom = ((CLArray) paddingObject).getInt(3);
                            } catch (ArrayIndexOutOfBoundsException e) {
                                paddingBottom = 0.0f;
                            }
                            paddingLeft2 = paddingRight;
                        }
                    } else {
                        paddingLeft = paddingObject.getInt();
                        paddingTop = paddingLeft;
                        paddingLeft2 = paddingLeft;
                        paddingBottom = paddingLeft;
                    }
                    float paddingBottom2 = toPix(state, paddingLeft);
                    flow.setPaddingLeft(Math.round(paddingBottom2));
                    flow.setPaddingTop(Math.round(toPix(state, paddingTop)));
                    flow.setPaddingRight(Math.round(toPix(state, paddingLeft2)));
                    flow.setPaddingBottom(Math.round(toPix(state, paddingBottom)));
                    break;
                case 7:
                    String vAlignValue = element.get(param).content();
                    switch (vAlignValue.hashCode()) {
                        case -1720785339:
                            if (vAlignValue.equals("baseline")) {
                                i4 = 2;
                                break;
                            }
                            break;
                        case -1383228885:
                            if (vAlignValue.equals("bottom")) {
                                i4 = i3;
                                break;
                            }
                            break;
                        case 115029:
                            if (vAlignValue.equals("top")) {
                                i4 = 0;
                                break;
                            }
                            break;
                    }
                    switch (i4) {
                        case 0:
                            flow.setVerticalAlign(0);
                            break;
                        case 1:
                            flow.setVerticalAlign(i3);
                            break;
                        case 2:
                            flow.setVerticalAlign(3);
                            break;
                        default:
                            flow.setVerticalAlign(2);
                            break;
                    }
                    break;
                case 8:
                    String hAlignValue = element.get(param).content();
                    switch (hAlignValue.hashCode()) {
                        case 100571:
                            if (hAlignValue.equals("end")) {
                                i4 = i3;
                                break;
                            }
                            break;
                        case 109757538:
                            if (hAlignValue.equals("start")) {
                                i4 = 0;
                                break;
                            }
                            break;
                    }
                    switch (i4) {
                        case 0:
                            flow.setHorizontalAlign(0);
                            break;
                        case 1:
                            flow.setHorizontalAlign(i3);
                            break;
                        default:
                            flow.setHorizontalAlign(2);
                            break;
                    }
                    break;
                case 9:
                    CLElement vBiasObject = element.get(param);
                    Float.valueOf(0.5f);
                    Float vFirstBiasValue2 = Float.valueOf(0.5f);
                    Float vLastBiasValue3 = Float.valueOf(0.5f);
                    if ((vBiasObject instanceof CLArray) && ((CLArray) vBiasObject).size() > i3) {
                        Float vFirstBiasValue3 = Float.valueOf(((CLArray) vBiasObject).getFloat(0));
                        Float vBiasValue = Float.valueOf(((CLArray) vBiasObject).getFloat(i3));
                        if (((CLArray) vBiasObject).size() <= 2) {
                            vLastBiasValue = vLastBiasValue3;
                            vLastBiasValue2 = vFirstBiasValue3;
                            vFirstBiasValue = vBiasValue;
                        } else {
                            vLastBiasValue = Float.valueOf(((CLArray) vBiasObject).getFloat(2));
                            vLastBiasValue2 = vFirstBiasValue3;
                            vFirstBiasValue = vBiasValue;
                        }
                    } else {
                        vLastBiasValue = vLastBiasValue3;
                        vLastBiasValue2 = vFirstBiasValue2;
                        vFirstBiasValue = Float.valueOf(vBiasObject.getFloat());
                    }
                    try {
                        flow.verticalBias(vFirstBiasValue.floatValue());
                        if (vLastBiasValue2.floatValue() != 0.5f) {
                            flow.setFirstVerticalBias(vLastBiasValue2.floatValue());
                        }
                        if (vLastBiasValue.floatValue() != 0.5f) {
                            flow.setLastVerticalBias(vLastBiasValue.floatValue());
                        }
                        break;
                    } catch (NumberFormatException e2) {
                        break;
                    }
                case 10:
                    CLElement hBiasObject = element.get(param);
                    Float.valueOf(0.5f);
                    Float hFirstBiasValue2 = Float.valueOf(0.5f);
                    Float hLastBiasValue3 = Float.valueOf(0.5f);
                    if ((hBiasObject instanceof CLArray) && ((CLArray) hBiasObject).size() > i3) {
                        Float hFirstBiasValue3 = Float.valueOf(((CLArray) hBiasObject).getFloat(0));
                        Float hBiasValue = Float.valueOf(((CLArray) hBiasObject).getFloat(i3));
                        if (((CLArray) hBiasObject).size() <= 2) {
                            hLastBiasValue = hLastBiasValue3;
                            hLastBiasValue2 = hFirstBiasValue3;
                            hFirstBiasValue = hBiasValue;
                        } else {
                            hLastBiasValue = Float.valueOf(((CLArray) hBiasObject).getFloat(2));
                            hLastBiasValue2 = hFirstBiasValue3;
                            hFirstBiasValue = hBiasValue;
                        }
                    } else {
                        hLastBiasValue = hLastBiasValue3;
                        hLastBiasValue2 = hFirstBiasValue2;
                        hFirstBiasValue = Float.valueOf(hBiasObject.getFloat());
                    }
                    try {
                        flow.horizontalBias(hFirstBiasValue.floatValue());
                        if (hLastBiasValue2.floatValue() != 0.5f) {
                            flow.setFirstHorizontalBias(hLastBiasValue2.floatValue());
                        }
                        if (hLastBiasValue.floatValue() != 0.5f) {
                            flow.setLastHorizontalBias(hLastBiasValue.floatValue());
                        }
                        break;
                    } catch (NumberFormatException e3) {
                        break;
                    }
                    break;
                case 11:
                    CLElement vStyleObject = element.get(param);
                    String vFirstStyleValueStr = "";
                    String vLastStyleValueStr = "";
                    if ((vStyleObject instanceof CLArray) && ((CLArray) vStyleObject).size() > i3) {
                        vFirstStyleValueStr = ((CLArray) vStyleObject).getString(0);
                        vStyleValueStr = ((CLArray) vStyleObject).getString(i3);
                        if (((CLArray) vStyleObject).size() > 2) {
                            vLastStyleValueStr = ((CLArray) vStyleObject).getString(2);
                        }
                    } else {
                        vStyleValueStr = vStyleObject.content();
                    }
                    if (!vStyleValueStr.equals("")) {
                        flow.setVerticalStyle(State.Chain.getValueByString(vStyleValueStr));
                    }
                    if (!vFirstStyleValueStr.equals("")) {
                        flow.setFirstVerticalStyle(State.Chain.getValueByString(vFirstStyleValueStr));
                    }
                    if (!vLastStyleValueStr.equals("")) {
                        flow.setLastVerticalStyle(State.Chain.getValueByString(vLastStyleValueStr));
                        break;
                    } else {
                        break;
                    }
                case 12:
                    CLElement hStyleObject = element.get(param);
                    String hFirstStyleValueStr = "";
                    String hLastStyleValueStr = "";
                    if ((hStyleObject instanceof CLArray) && ((CLArray) hStyleObject).size() > i3) {
                        hFirstStyleValueStr = ((CLArray) hStyleObject).getString(i2);
                        hStyleValueStr = ((CLArray) hStyleObject).getString(i3);
                        if (((CLArray) hStyleObject).size() > 2) {
                            hLastStyleValueStr = ((CLArray) hStyleObject).getString(2);
                        }
                    } else {
                        hStyleValueStr = hStyleObject.content();
                    }
                    if (!hStyleValueStr.equals("")) {
                        flow.setHorizontalStyle(State.Chain.getValueByString(hStyleValueStr));
                    }
                    if (!hFirstStyleValueStr.equals("")) {
                        flow.setFirstHorizontalStyle(State.Chain.getValueByString(hFirstStyleValueStr));
                    }
                    if (!hLastStyleValueStr.equals("")) {
                        flow.setLastHorizontalStyle(State.Chain.getValueByString(hLastStyleValueStr));
                        break;
                    } else {
                        break;
                    }
                    break;
                default:
                    ConstraintReference reference = state.constraints(flowName);
                    applyAttribute(state, layoutVariables, reference, element, param);
                    break;
            }
            i2 = 0;
            i3 = 1;
        }
    }

    static void parseGuideline(int orientation, State state, CLArray helper) throws CLParsingException {
        String guidelineId;
        CLElement params = helper.get(1);
        if ((params instanceof CLObject) && (guidelineId = ((CLObject) params).getStringOrNull("id")) != null) {
            parseGuidelineParams(orientation, state, guidelineId, (CLObject) params);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    static void parseGuidelineParams(int orientation, State state, String guidelineId, CLObject params) throws CLParsingException {
        char c;
        ArrayList<String> constraints;
        ConstraintReference reference;
        char c2;
        ArrayList<String> constraints2 = params.names();
        if (constraints2 == null) {
            return;
        }
        ConstraintReference reference2 = state.constraints(guidelineId);
        if (orientation == 0) {
            state.horizontalGuideline(guidelineId);
        } else {
            state.verticalGuideline(guidelineId);
        }
        boolean isLtr = !state.isRtl() || orientation == 0;
        GuidelineReference guidelineReference = (GuidelineReference) reference2.getFacade();
        boolean isPercent = false;
        float value = 0.0f;
        boolean fromStart = true;
        Iterator<String> it = constraints2.iterator();
        while (it.hasNext()) {
            String constraintName = it.next();
            switch (constraintName.hashCode()) {
                case -678927291:
                    if (constraintName.equals("percent")) {
                        c = 4;
                        break;
                    }
                    c = 65535;
                    break;
                case 100571:
                    if (constraintName.equals("end")) {
                        c = 3;
                        break;
                    }
                    c = 65535;
                    break;
                case 3317767:
                    if (constraintName.equals("left")) {
                        c = 0;
                        break;
                    }
                    c = 65535;
                    break;
                case 108511772:
                    if (constraintName.equals("right")) {
                        c = 1;
                        break;
                    }
                    c = 65535;
                    break;
                case 109757538:
                    if (constraintName.equals("start")) {
                        c = 2;
                        break;
                    }
                    c = 65535;
                    break;
                default:
                    c = 65535;
                    break;
            }
            switch (c) {
                case 0:
                    constraints = constraints2;
                    reference = reference2;
                    float value2 = toPix(state, params.getFloat(constraintName));
                    value = value2;
                    fromStart = true;
                    break;
                case 1:
                    constraints = constraints2;
                    reference = reference2;
                    float value3 = toPix(state, params.getFloat(constraintName));
                    value = value3;
                    fromStart = false;
                    break;
                case 2:
                    constraints = constraints2;
                    reference = reference2;
                    float value4 = toPix(state, params.getFloat(constraintName));
                    boolean fromStart2 = isLtr;
                    value = value4;
                    fromStart = fromStart2;
                    break;
                case 3:
                    constraints = constraints2;
                    reference = reference2;
                    float value5 = toPix(state, params.getFloat(constraintName));
                    boolean fromStart3 = !isLtr;
                    value = value5;
                    fromStart = fromStart3;
                    break;
                case 4:
                    isPercent = true;
                    CLArray percentParams = params.getArrayOrNull(constraintName);
                    if (percentParams == null) {
                        constraints = constraints2;
                        reference = reference2;
                        fromStart = true;
                        value = params.getFloat(constraintName);
                        break;
                    } else {
                        constraints = constraints2;
                        reference = reference2;
                        if (percentParams.size() <= 1) {
                            break;
                        } else {
                            String origin = percentParams.getString(0);
                            value = percentParams.getFloat(1);
                            switch (origin.hashCode()) {
                                case 100571:
                                    if (origin.equals("end")) {
                                        c2 = 3;
                                        break;
                                    }
                                    c2 = 65535;
                                    break;
                                case 3317767:
                                    if (origin.equals("left")) {
                                        c2 = 0;
                                        break;
                                    }
                                    c2 = 65535;
                                    break;
                                case 108511772:
                                    if (origin.equals("right")) {
                                        c2 = 1;
                                        break;
                                    }
                                    c2 = 65535;
                                    break;
                                case 109757538:
                                    if (origin.equals("start")) {
                                        c2 = 2;
                                        break;
                                    }
                                    c2 = 65535;
                                    break;
                                default:
                                    c2 = 65535;
                                    break;
                            }
                            switch (c2) {
                                case 0:
                                    fromStart = true;
                                    isPercent = true;
                                    break;
                                case 1:
                                    fromStart = false;
                                    isPercent = true;
                                    break;
                                case 2:
                                    boolean fromStart4 = isLtr;
                                    fromStart = fromStart4;
                                    isPercent = true;
                                    break;
                                case 3:
                                    fromStart = !isLtr;
                                    isPercent = true;
                                    break;
                                default:
                                    isPercent = true;
                                    break;
                            }
                        }
                    }
                default:
                    constraints = constraints2;
                    reference = reference2;
                    break;
            }
            constraints2 = constraints;
            reference2 = reference;
        }
        if (isPercent) {
            if (fromStart) {
                guidelineReference.percent(value);
                return;
            } else {
                guidelineReference.percent(1.0f - value);
                return;
            }
        }
        if (fromStart) {
            guidelineReference.start(Float.valueOf(value));
        } else {
            guidelineReference.end(Float.valueOf(value));
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x00b4, code lost:
    
        if (r6.equals("left") != false) goto L54;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static void parseBarrier(androidx.constraintlayout.core.state.State r11, java.lang.String r12, androidx.constraintlayout.core.parser.CLObject r13) throws androidx.constraintlayout.core.parser.CLParsingException {
        /*
            Method dump skipped, instructions count: 342
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.constraintlayout.core.state.ConstraintSetParser.parseBarrier(androidx.constraintlayout.core.state.State, java.lang.String, androidx.constraintlayout.core.parser.CLObject):void");
    }

    static void parseWidget(State state, LayoutVariables layoutVariables, String elementName, CLObject element) throws CLParsingException {
        ConstraintReference reference = state.constraints(elementName);
        parseWidget(state, layoutVariables, reference, element);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x01b0, code lost:
    
        if (r0.equals("invisible") != false) goto L104;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static void applyAttribute(androidx.constraintlayout.core.state.State r8, androidx.constraintlayout.core.state.ConstraintSetParser.LayoutVariables r9, androidx.constraintlayout.core.state.ConstraintReference r10, androidx.constraintlayout.core.parser.CLObject r11, java.lang.String r12) throws androidx.constraintlayout.core.parser.CLParsingException {
        /*
            Method dump skipped, instructions count: 904
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.constraintlayout.core.state.ConstraintSetParser.applyAttribute(androidx.constraintlayout.core.state.State, androidx.constraintlayout.core.state.ConstraintSetParser$LayoutVariables, androidx.constraintlayout.core.state.ConstraintReference, androidx.constraintlayout.core.parser.CLObject, java.lang.String):void");
    }

    static void parseWidget(State state, LayoutVariables layoutVariables, ConstraintReference reference, CLObject element) throws CLParsingException {
        if (reference.getWidth() == null) {
            reference.setWidth(Dimension.createWrap());
        }
        if (reference.getHeight() == null) {
            reference.setHeight(Dimension.createWrap());
        }
        ArrayList<String> constraints = element.names();
        if (constraints == null) {
            return;
        }
        Iterator<String> it = constraints.iterator();
        while (it.hasNext()) {
            String constraintName = it.next();
            applyAttribute(state, layoutVariables, reference, element, constraintName);
        }
    }

    static void parseCustomProperties(CLObject element, ConstraintReference reference, String constraintName) throws CLParsingException {
        ArrayList<String> properties;
        CLObject json = element.getObjectOrNull(constraintName);
        if (json == null || (properties = json.names()) == null) {
            return;
        }
        Iterator<String> it = properties.iterator();
        while (it.hasNext()) {
            String property = it.next();
            CLElement value = json.get(property);
            if (value instanceof CLNumber) {
                reference.addCustomFloat(property, value.getFloat());
            } else if (value instanceof CLString) {
                long it2 = parseColorString(value.content());
                if (it2 != -1) {
                    reference.addCustomColor(property, (int) it2);
                }
            }
        }
    }

    private static int indexOf(String val, String... types) {
        for (int i = 0; i < types.length; i++) {
            if (types[i].equals(val)) {
                return i;
            }
        }
        return -1;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private static void parseMotionProperties(CLElement element, ConstraintReference reference) throws CLParsingException {
        char c;
        if (!(element instanceof CLObject)) {
            return;
        }
        CLObject obj = (CLObject) element;
        TypedBundle bundle = new TypedBundle();
        ArrayList<String> constraints = obj.names();
        if (constraints == null) {
            return;
        }
        Iterator<String> it = constraints.iterator();
        while (it.hasNext()) {
            String constraintName = it.next();
            switch (constraintName.hashCode()) {
                case -1897525331:
                    if (constraintName.equals("stagger")) {
                        c = 3;
                        break;
                    }
                    c = 65535;
                    break;
                case -1310311125:
                    if (constraintName.equals("easing")) {
                        c = 2;
                        break;
                    }
                    c = 65535;
                    break;
                case -1285003983:
                    if (constraintName.equals("quantize")) {
                        c = 4;
                        break;
                    }
                    c = 65535;
                    break;
                case -791482387:
                    if (constraintName.equals("pathArc")) {
                        c = 0;
                        break;
                    }
                    c = 65535;
                    break;
                case -236944793:
                    if (constraintName.equals("relativeTo")) {
                        c = 1;
                        break;
                    }
                    c = 65535;
                    break;
                default:
                    c = 65535;
                    break;
            }
            switch (c) {
                case 0:
                    String val = obj.getString(constraintName);
                    int ord = indexOf(val, "none", "startVertical", "startHorizontal", "flip", "below", "above");
                    if (ord == -1) {
                        System.err.println(obj.getLine() + " pathArc = '" + val + "'");
                        break;
                    } else {
                        bundle.add(TypedValues.MotionType.TYPE_PATHMOTION_ARC, ord);
                        break;
                    }
                case 1:
                    bundle.add(TypedValues.MotionType.TYPE_ANIMATE_RELATIVE_TO, obj.getString(constraintName));
                    break;
                case 2:
                    bundle.add(TypedValues.MotionType.TYPE_EASING, obj.getString(constraintName));
                    break;
                case 3:
                    bundle.add(600, obj.getFloat(constraintName));
                    break;
                case 4:
                    CLElement quant = obj.get(constraintName);
                    if (quant instanceof CLArray) {
                        CLArray array = (CLArray) quant;
                        int len = array.size();
                        if (len <= 0) {
                            break;
                        } else {
                            bundle.add(TypedValues.MotionType.TYPE_QUANTIZE_MOTIONSTEPS, array.getInt(0));
                            if (len <= 1) {
                                break;
                            } else {
                                bundle.add(TypedValues.MotionType.TYPE_QUANTIZE_INTERPOLATOR_TYPE, array.getString(1));
                                if (len <= 2) {
                                    break;
                                } else {
                                    bundle.add(TypedValues.MotionType.TYPE_QUANTIZE_MOTION_PHASE, array.getFloat(2));
                                    break;
                                }
                            }
                        }
                    } else {
                        bundle.add(TypedValues.MotionType.TYPE_QUANTIZE_MOTIONSTEPS, obj.getInt(constraintName));
                        break;
                    }
            }
        }
        reference.mMotionProperties = bundle;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:173:0x0285, code lost:
    
        if (r28.equals("top") != false) goto L177;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x01fa, code lost:
    
        if (r8.equals("start") != false) goto L135;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static void parseConstraint(androidx.constraintlayout.core.state.State r24, androidx.constraintlayout.core.state.ConstraintSetParser.LayoutVariables r25, androidx.constraintlayout.core.parser.CLObject r26, androidx.constraintlayout.core.state.ConstraintReference r27, java.lang.String r28) throws androidx.constraintlayout.core.parser.CLParsingException {
        /*
            Method dump skipped, instructions count: 918
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.constraintlayout.core.state.ConstraintSetParser.parseConstraint(androidx.constraintlayout.core.state.State, androidx.constraintlayout.core.state.ConstraintSetParser$LayoutVariables, androidx.constraintlayout.core.parser.CLObject, androidx.constraintlayout.core.state.ConstraintReference, java.lang.String):void");
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    static Dimension parseDimensionMode(String dimensionString) {
        char c;
        Dimension dimension = Dimension.createFixed(0);
        switch (dimensionString.hashCode()) {
            case -1460244870:
                if (dimensionString.equals("preferWrap")) {
                    c = 1;
                    break;
                }
                c = 65535;
                break;
            case -995424086:
                if (dimensionString.equals("parent")) {
                    c = 3;
                    break;
                }
                c = 65535;
                break;
            case -895684237:
                if (dimensionString.equals("spread")) {
                    c = 2;
                    break;
                }
                c = 65535;
                break;
            case 3657802:
                if (dimensionString.equals("wrap")) {
                    c = 0;
                    break;
                }
                c = 65535;
                break;
            default:
                c = 65535;
                break;
        }
        switch (c) {
            case 0:
                Dimension dimension2 = Dimension.createWrap();
                return dimension2;
            case 1:
                Dimension dimension3 = Dimension.createSuggested(Dimension.WRAP_DIMENSION);
                return dimension3;
            case 2:
                Dimension dimension4 = Dimension.createSuggested(Dimension.SPREAD_DIMENSION);
                return dimension4;
            case 3:
                Dimension dimension5 = Dimension.createParent();
                return dimension5;
            default:
                if (dimensionString.endsWith("%")) {
                    String percentString = dimensionString.substring(0, dimensionString.indexOf(37));
                    float percentValue = Float.parseFloat(percentString) / 100.0f;
                    Dimension dimension6 = Dimension.createPercent(0, percentValue).suggested(0);
                    return dimension6;
                }
                if (dimensionString.contains(":")) {
                    Dimension dimension7 = Dimension.createRatio(dimensionString).suggested(Dimension.SPREAD_DIMENSION);
                    return dimension7;
                }
                return dimension;
        }
    }

    static Dimension parseDimension(CLObject element, String constraintName, State state, CorePixelDp dpToPixels) throws CLParsingException {
        CLElement dimensionElement = element.get(constraintName);
        Dimension dimension = Dimension.createFixed(0);
        if (dimensionElement instanceof CLString) {
            return parseDimensionMode(dimensionElement.content());
        }
        if (dimensionElement instanceof CLNumber) {
            return Dimension.createFixed(state.convertDimension(Float.valueOf(dpToPixels.toPixels(element.getFloat(constraintName)))));
        }
        if (dimensionElement instanceof CLObject) {
            CLObject obj = (CLObject) dimensionElement;
            String mode = obj.getStringOrNull("value");
            if (mode != null) {
                dimension = parseDimensionMode(mode);
            }
            CLElement minEl = obj.getOrNull("min");
            if (minEl != null) {
                if (minEl instanceof CLNumber) {
                    float min = ((CLNumber) minEl).getFloat();
                    dimension.min(state.convertDimension(Float.valueOf(dpToPixels.toPixels(min))));
                } else if (minEl instanceof CLString) {
                    dimension.min(Dimension.WRAP_DIMENSION);
                }
            }
            CLElement maxEl = obj.getOrNull("max");
            if (maxEl != null) {
                if (maxEl instanceof CLNumber) {
                    float max = ((CLNumber) maxEl).getFloat();
                    dimension.max(state.convertDimension(Float.valueOf(dpToPixels.toPixels(max))));
                    return dimension;
                }
                if (maxEl instanceof CLString) {
                    dimension.max(Dimension.WRAP_DIMENSION);
                    return dimension;
                }
                return dimension;
            }
            return dimension;
        }
        return dimension;
    }

    static long parseColorString(String value) {
        if (value.startsWith("#")) {
            String str = value.substring(1);
            if (str.length() == 6) {
                str = "FF" + str;
            }
            return Long.parseLong(str, 16);
        }
        return -1L;
    }

    static String lookForType(CLObject element) throws CLParsingException {
        ArrayList<String> constraints = element.names();
        Iterator<String> it = constraints.iterator();
        while (it.hasNext()) {
            String constraintName = it.next();
            if (constraintName.equals("type")) {
                return element.getString("type");
            }
        }
        return null;
    }
}
