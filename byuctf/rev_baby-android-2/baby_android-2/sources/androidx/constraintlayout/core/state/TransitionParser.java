package androidx.constraintlayout.core.state;

import androidx.constraintlayout.core.motion.CustomVariable;
import androidx.constraintlayout.core.motion.utils.TypedBundle;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.core.parser.CLArray;
import androidx.constraintlayout.core.parser.CLContainer;
import androidx.constraintlayout.core.parser.CLElement;
import androidx.constraintlayout.core.parser.CLKey;
import androidx.constraintlayout.core.parser.CLNumber;
import androidx.constraintlayout.core.parser.CLObject;
import androidx.constraintlayout.core.parser.CLParsingException;
import androidx.constraintlayout.core.state.Transition;
import java.lang.reflect.Array;

/* loaded from: classes.dex */
public class TransitionParser {
    @Deprecated
    public static void parse(CLObject json, Transition transition, CorePixelDp dpToPixel) throws CLParsingException {
        parse(json, transition);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static void parse(CLObject json, Transition transition) throws CLParsingException {
        char c;
        transition.resetProperties();
        String pathMotionArc = json.getStringOrNull(TypedValues.TransitionType.S_PATH_MOTION_ARC);
        TypedBundle bundle = new TypedBundle();
        boolean setBundle = false;
        if (pathMotionArc != null) {
            setBundle = true;
            switch (pathMotionArc.hashCode()) {
                case -1857024520:
                    if (pathMotionArc.equals("startVertical")) {
                        c = 1;
                        break;
                    }
                    c = 65535;
                    break;
                case -1007052250:
                    if (pathMotionArc.equals("startHorizontal")) {
                        c = 2;
                        break;
                    }
                    c = 65535;
                    break;
                case 3145837:
                    if (pathMotionArc.equals("flip")) {
                        c = 3;
                        break;
                    }
                    c = 65535;
                    break;
                case 3387192:
                    if (pathMotionArc.equals("none")) {
                        c = 0;
                        break;
                    }
                    c = 65535;
                    break;
                case 92611485:
                    if (pathMotionArc.equals("above")) {
                        c = 5;
                        break;
                    }
                    c = 65535;
                    break;
                case 93621297:
                    if (pathMotionArc.equals("below")) {
                        c = 4;
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
                    bundle.add(509, 0);
                    break;
                case 1:
                    bundle.add(509, 1);
                    break;
                case 2:
                    bundle.add(509, 2);
                    break;
                case 3:
                    bundle.add(509, 3);
                    break;
                case 4:
                    bundle.add(509, 4);
                    break;
                case 5:
                    bundle.add(509, 5);
                    break;
            }
        }
        String interpolator = json.getStringOrNull("interpolator");
        if (interpolator != null) {
            setBundle = true;
            bundle.add(TypedValues.TransitionType.TYPE_INTERPOLATOR, interpolator);
        }
        float staggered = json.getFloatOrNaN(TypedValues.TransitionType.S_STAGGERED);
        if (!Float.isNaN(staggered)) {
            setBundle = true;
            bundle.add(TypedValues.TransitionType.TYPE_STAGGERED, staggered);
        }
        if (setBundle) {
            transition.setTransitionProperties(bundle);
        }
        CLContainer onSwipe = json.getObjectOrNull("onSwipe");
        if (onSwipe != null) {
            parseOnSwipe(onSwipe, transition);
        }
        parseKeyFrames(json, transition);
    }

    private static void parseOnSwipe(CLContainer onSwipe, Transition transition) {
        String anchor = onSwipe.getStringOrNull("anchor");
        int side = map(onSwipe.getStringOrNull("side"), Transition.OnSwipe.SIDES);
        int direction = map(onSwipe.getStringOrNull("direction"), Transition.OnSwipe.DIRECTIONS);
        float scale = onSwipe.getFloatOrNaN("scale");
        float threshold = onSwipe.getFloatOrNaN("threshold");
        float maxVelocity = onSwipe.getFloatOrNaN("maxVelocity");
        float maxAccel = onSwipe.getFloatOrNaN("maxAccel");
        String limitBounds = onSwipe.getStringOrNull("limitBounds");
        int autoCompleteMode = map(onSwipe.getStringOrNull("mode"), Transition.OnSwipe.MODE);
        int touchUp = map(onSwipe.getStringOrNull("touchUp"), Transition.OnSwipe.TOUCH_UP);
        float springMass = onSwipe.getFloatOrNaN("springMass");
        float springStiffness = onSwipe.getFloatOrNaN("springStiffness");
        float springDamping = onSwipe.getFloatOrNaN("springDamping");
        float stopThreshold = onSwipe.getFloatOrNaN("stopThreshold");
        int springBoundary = map(onSwipe.getStringOrNull("springBoundary"), Transition.OnSwipe.BOUNDARY);
        String around = onSwipe.getStringOrNull("around");
        Transition.OnSwipe swipe = transition.createOnSwipe();
        swipe.setAnchorId(anchor);
        swipe.setAnchorSide(side);
        swipe.setDragDirection(direction);
        swipe.setDragScale(scale);
        swipe.setDragThreshold(threshold);
        swipe.setMaxVelocity(maxVelocity);
        swipe.setMaxAcceleration(maxAccel);
        swipe.setLimitBoundsTo(limitBounds);
        swipe.setAutoCompleteMode(autoCompleteMode);
        swipe.setOnTouchUp(touchUp);
        swipe.setSpringMass(springMass);
        swipe.setSpringStiffness(springStiffness);
        swipe.setSpringDamping(springDamping);
        swipe.setSpringStopThreshold(stopThreshold);
        swipe.setSpringBoundary(springBoundary);
        swipe.setRotationCenterId(around);
    }

    private static int map(String val, String... types) {
        for (int i = 0; i < types.length; i++) {
            if (types[i].equals(val)) {
                return i;
            }
        }
        return 0;
    }

    private static void map(TypedBundle bundle, int type, String val, String... types) {
        for (int i = 0; i < types.length; i++) {
            if (types[i].equals(val)) {
                bundle.add(type, i);
            }
        }
    }

    public static void parseKeyFrames(CLObject transitionCLObject, Transition transition) throws CLParsingException {
        CLContainer keyframes = transitionCLObject.getObjectOrNull("KeyFrames");
        if (keyframes == null) {
            return;
        }
        CLArray keyPositions = keyframes.getArrayOrNull("KeyPositions");
        if (keyPositions != null) {
            for (int i = 0; i < keyPositions.size(); i++) {
                CLElement keyPosition = keyPositions.get(i);
                if (keyPosition instanceof CLObject) {
                    parseKeyPosition((CLObject) keyPosition, transition);
                }
            }
        }
        CLArray keyAttributes = keyframes.getArrayOrNull(TypedValues.AttributesType.NAME);
        if (keyAttributes != null) {
            for (int i2 = 0; i2 < keyAttributes.size(); i2++) {
                CLElement keyAttribute = keyAttributes.get(i2);
                if (keyAttribute instanceof CLObject) {
                    parseKeyAttribute((CLObject) keyAttribute, transition);
                }
            }
        }
        CLArray keyCycles = keyframes.getArrayOrNull("KeyCycles");
        if (keyCycles != null) {
            for (int i3 = 0; i3 < keyCycles.size(); i3++) {
                CLElement keyCycle = keyCycles.get(i3);
                if (keyCycle instanceof CLObject) {
                    parseKeyCycle((CLObject) keyCycle, transition);
                }
            }
        }
    }

    private static void parseKeyPosition(CLObject keyPosition, Transition transition) throws CLParsingException {
        TypedBundle bundle = new TypedBundle();
        CLArray targets = keyPosition.getArray(TypedValues.AttributesType.S_TARGET);
        CLArray frames = keyPosition.getArray("frames");
        CLArray percentX = keyPosition.getArrayOrNull("percentX");
        CLArray percentY = keyPosition.getArrayOrNull("percentY");
        CLArray percentWidth = keyPosition.getArrayOrNull("percentWidth");
        CLArray percentHeight = keyPosition.getArrayOrNull("percentHeight");
        String pathMotionArc = keyPosition.getStringOrNull(TypedValues.TransitionType.S_PATH_MOTION_ARC);
        String transitionEasing = keyPosition.getStringOrNull("transitionEasing");
        String curveFit = keyPosition.getStringOrNull("curveFit");
        String type = keyPosition.getStringOrNull("type");
        if (type == null) {
            type = "parentRelative";
        }
        if (percentX != null && frames.size() != percentX.size()) {
            return;
        }
        if (percentY != null && frames.size() != percentY.size()) {
            return;
        }
        for (int i = 0; i < targets.size(); i++) {
            String target = targets.getString(i);
            int pos_type = map(type, "deltaRelative", "pathRelative", "parentRelative");
            bundle.clear();
            bundle.add(TypedValues.PositionType.TYPE_POSITION_TYPE, pos_type);
            if (curveFit != null) {
                map(bundle, TypedValues.PositionType.TYPE_CURVE_FIT, curveFit, "spline", "linear");
            }
            bundle.addIfNotNull(TypedValues.PositionType.TYPE_TRANSITION_EASING, transitionEasing);
            if (pathMotionArc != null) {
                map(bundle, 509, pathMotionArc, "none", "startVertical", "startHorizontal", "flip", "below", "above");
            }
            int j = 0;
            while (j < frames.size()) {
                int frame = frames.getInt(j);
                bundle.add(100, frame);
                set(bundle, TypedValues.PositionType.TYPE_PERCENT_X, percentX, j);
                set(bundle, TypedValues.PositionType.TYPE_PERCENT_Y, percentY, j);
                set(bundle, TypedValues.PositionType.TYPE_PERCENT_WIDTH, percentWidth, j);
                set(bundle, TypedValues.PositionType.TYPE_PERCENT_HEIGHT, percentHeight, j);
                transition.addKeyPosition(target, bundle);
                j++;
                pos_type = pos_type;
            }
        }
    }

    private static void set(TypedBundle bundle, int type, CLArray array, int index) throws CLParsingException {
        if (array != null) {
            bundle.add(type, array.getFloat(index));
        }
    }

    private static void parseKeyAttribute(CLObject keyAttribute, Transition transition) throws CLParsingException {
        CLArray frames;
        CLElement customElement;
        CLObject customObj;
        int[] attrIds;
        int n;
        CLArray arrayValues;
        String[] attrNames;
        boolean[] scaleTypes;
        CLArray targets = keyAttribute.getArrayOrNull(TypedValues.AttributesType.S_TARGET);
        if (targets != null && (frames = keyAttribute.getArrayOrNull("frames")) != null) {
            String transitionEasing = keyAttribute.getStringOrNull("transitionEasing");
            String[] attrNames2 = {"scaleX", "scaleY", "translationX", "translationY", "translationZ", "rotationX", "rotationY", "rotationZ", "alpha"};
            int[] attrIds2 = {311, 312, 304, 305, 306, 308, 309, 310, 303};
            boolean[] scaleTypes2 = {false, false, true, true, true, false, false, false, false};
            TypedBundle[] bundles = new TypedBundle[frames.size()];
            CustomVariable[][] customVars = null;
            for (int i = 0; i < frames.size(); i++) {
                bundles[i] = new TypedBundle();
            }
            int k = 0;
            while (k < attrNames2.length) {
                String attrName = attrNames2[k];
                int attrId = attrIds2[k];
                boolean scale = scaleTypes2[k];
                CLArray arrayValues2 = keyAttribute.getArrayOrNull(attrName);
                if (arrayValues2 != null) {
                    attrNames = attrNames2;
                    if (arrayValues2.size() != bundles.length) {
                        throw new CLParsingException("incorrect size for " + attrName + " array, not matching targets array!", keyAttribute);
                    }
                    scaleTypes = scaleTypes2;
                } else {
                    attrNames = attrNames2;
                    scaleTypes = scaleTypes2;
                }
                if (arrayValues2 != null) {
                    for (int i2 = 0; i2 < bundles.length; i2++) {
                        float value = arrayValues2.getFloat(i2);
                        if (scale) {
                            value = transition.mToPixel.toPixels(value);
                        }
                        bundles[i2].add(attrId, value);
                    }
                } else {
                    float value2 = keyAttribute.getFloatOrNaN(attrName);
                    if (!Float.isNaN(value2)) {
                        if (scale) {
                            value2 = transition.mToPixel.toPixels(value2);
                        }
                        for (TypedBundle typedBundle : bundles) {
                            typedBundle.add(attrId, value2);
                        }
                    }
                }
                k++;
                attrNames2 = attrNames;
                scaleTypes2 = scaleTypes;
            }
            CLElement customElement2 = keyAttribute.getOrNull("custom");
            if (customElement2 != null && (customElement2 instanceof CLObject)) {
                CLObject customObj2 = (CLObject) customElement2;
                int n2 = customObj2.size();
                customVars = (CustomVariable[][]) Array.newInstance((Class<?>) CustomVariable.class, frames.size(), n2);
                int i3 = 0;
                while (i3 < n2) {
                    CLKey key = (CLKey) customObj2.get(i3);
                    String customName = key.content();
                    if (key.getValue() instanceof CLArray) {
                        CLArray arrayValues3 = (CLArray) key.getValue();
                        int vSize = arrayValues3.size();
                        customElement = customElement2;
                        if (vSize != bundles.length || vSize <= 0) {
                            customObj = customObj2;
                            attrIds = attrIds2;
                            n = n2;
                        } else if (arrayValues3.get(0) instanceof CLNumber) {
                            int j = 0;
                            while (true) {
                                customObj = customObj2;
                                if (j >= bundles.length) {
                                    break;
                                }
                                customVars[j][i3] = new CustomVariable(customName, TypedValues.Custom.TYPE_FLOAT, arrayValues3.get(j).getFloat());
                                j++;
                                customObj2 = customObj;
                                attrIds2 = attrIds2;
                                n2 = n2;
                                vSize = vSize;
                            }
                            attrIds = attrIds2;
                            n = n2;
                        } else {
                            customObj = customObj2;
                            attrIds = attrIds2;
                            n = n2;
                            int j2 = 0;
                            while (j2 < bundles.length) {
                                long color = ConstraintSetParser.parseColorString(arrayValues3.get(j2).content());
                                if (color != -1) {
                                    arrayValues = arrayValues3;
                                    customVars[j2][i3] = new CustomVariable(customName, TypedValues.Custom.TYPE_COLOR, (int) color);
                                } else {
                                    arrayValues = arrayValues3;
                                }
                                j2++;
                                arrayValues3 = arrayValues;
                            }
                        }
                    } else {
                        customElement = customElement2;
                        customObj = customObj2;
                        attrIds = attrIds2;
                        n = n2;
                        CLElement value3 = key.getValue();
                        if (value3 instanceof CLNumber) {
                            float fValue = value3.getFloat();
                            for (int j3 = 0; j3 < bundles.length; j3++) {
                                customVars[j3][i3] = new CustomVariable(customName, TypedValues.Custom.TYPE_FLOAT, fValue);
                            }
                        } else {
                            long cValue = ConstraintSetParser.parseColorString(value3.content());
                            if (cValue != -1) {
                                int j4 = 0;
                                while (j4 < bundles.length) {
                                    customVars[j4][i3] = new CustomVariable(customName, TypedValues.Custom.TYPE_COLOR, (int) cValue);
                                    j4++;
                                    value3 = value3;
                                    cValue = cValue;
                                }
                            }
                        }
                    }
                    i3++;
                    customElement2 = customElement;
                    customObj2 = customObj;
                    attrIds2 = attrIds;
                    n2 = n;
                }
            }
            String curveFit = keyAttribute.getStringOrNull("curveFit");
            for (int i4 = 0; i4 < targets.size(); i4++) {
                for (int j5 = 0; j5 < bundles.length; j5++) {
                    String target = targets.getString(i4);
                    TypedBundle bundle = bundles[j5];
                    if (curveFit != null) {
                        bundle.add(TypedValues.PositionType.TYPE_CURVE_FIT, map(curveFit, "spline", "linear"));
                    }
                    bundle.addIfNotNull(TypedValues.PositionType.TYPE_TRANSITION_EASING, transitionEasing);
                    int frame = frames.getInt(j5);
                    bundle.add(100, frame);
                    transition.addKeyAttribute(target, bundle, customVars != null ? customVars[j5] : null);
                }
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private static void parseKeyCycle(CLObject keyCycleData, Transition transition) throws CLParsingException {
        CLArray targets;
        char c;
        String[] attrNames;
        int[] scaleTypes;
        CLArray targets2 = keyCycleData.getArray(TypedValues.AttributesType.S_TARGET);
        CLArray frames = keyCycleData.getArray("frames");
        String transitionEasing = keyCycleData.getStringOrNull("transitionEasing");
        String[] attrNames2 = {"scaleX", "scaleY", "translationX", "translationY", "translationZ", "rotationX", "rotationY", "rotationZ", "alpha", TypedValues.CycleType.S_WAVE_PERIOD, TypedValues.CycleType.S_WAVE_OFFSET, TypedValues.CycleType.S_WAVE_PHASE};
        int[] attrIds = {311, 312, 304, 305, 306, 308, 309, 310, TypedValues.CycleType.TYPE_ALPHA, TypedValues.CycleType.TYPE_WAVE_PERIOD, TypedValues.CycleType.TYPE_WAVE_OFFSET, TypedValues.CycleType.TYPE_WAVE_PHASE};
        int[] scaleTypes2 = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 2, 0};
        TypedBundle[] bundles = new TypedBundle[frames.size()];
        for (int i = 0; i < bundles.length; i++) {
            bundles[i] = new TypedBundle();
        }
        int i2 = 0;
        for (int k = 0; k < attrNames2.length; k++) {
            if (keyCycleData.has(attrNames2[k]) && scaleTypes2[k] == 1) {
                i2 = 1;
            }
        }
        int k2 = 0;
        while (k2 < attrNames2.length) {
            String attrName = attrNames2[k2];
            int attrId = attrIds[k2];
            int scale = scaleTypes2[k2];
            CLArray arrayValues = keyCycleData.getArrayOrNull(attrName);
            if (arrayValues != null) {
                attrNames = attrNames2;
                if (arrayValues.size() != bundles.length) {
                    throw new CLParsingException("incorrect size for $attrName array, not matching targets array!", keyCycleData);
                }
            } else {
                attrNames = attrNames2;
            }
            if (arrayValues != null) {
                int i3 = 0;
                while (i3 < bundles.length) {
                    float value = arrayValues.getFloat(i3);
                    int[] scaleTypes3 = scaleTypes2;
                    if (scale == 1) {
                        value = transition.mToPixel.toPixels(value);
                    } else if (scale == 2 && i2 != 0) {
                        value = transition.mToPixel.toPixels(value);
                    }
                    bundles[i3].add(attrId, value);
                    i3++;
                    scaleTypes2 = scaleTypes3;
                }
                scaleTypes = scaleTypes2;
            } else {
                scaleTypes = scaleTypes2;
                float value2 = keyCycleData.getFloatOrNaN(attrName);
                if (!Float.isNaN(value2)) {
                    if (scale == 1) {
                        value2 = transition.mToPixel.toPixels(value2);
                    } else if (scale == 2 && i2 != 0) {
                        value2 = transition.mToPixel.toPixels(value2);
                    }
                    for (TypedBundle typedBundle : bundles) {
                        typedBundle.add(attrId, value2);
                    }
                }
            }
            k2++;
            attrNames2 = attrNames;
            scaleTypes2 = scaleTypes;
        }
        String curveFit = keyCycleData.getStringOrNull("curveFit");
        String easing = keyCycleData.getStringOrNull("easing");
        String waveShape = keyCycleData.getStringOrNull("waveShape");
        String customWave = keyCycleData.getStringOrNull(TypedValues.CycleType.S_CUSTOM_WAVE_SHAPE);
        for (int i4 = 0; i4 < targets2.size(); i4++) {
            int j = 0;
            while (j < bundles.length) {
                String target = targets2.getString(i4);
                TypedBundle bundle = bundles[j];
                if (curveFit == null) {
                    targets = targets2;
                } else {
                    switch (curveFit.hashCode()) {
                        case -1102672091:
                            if (curveFit.equals("linear")) {
                                c = 1;
                                break;
                            }
                            c = 65535;
                            break;
                        case -895858735:
                            if (curveFit.equals("spline")) {
                                c = 0;
                                break;
                            }
                            c = 65535;
                            break;
                        default:
                            c = 65535;
                            break;
                    }
                    targets = targets2;
                    switch (c) {
                        case 0:
                            bundle.add(TypedValues.CycleType.TYPE_CURVE_FIT, 0);
                            break;
                        case 1:
                            bundle.add(TypedValues.CycleType.TYPE_CURVE_FIT, 1);
                            break;
                    }
                }
                bundle.addIfNotNull(TypedValues.PositionType.TYPE_TRANSITION_EASING, transitionEasing);
                if (easing != null) {
                    bundle.add(TypedValues.CycleType.TYPE_EASING, easing);
                }
                if (waveShape != null) {
                    bundle.add(TypedValues.CycleType.TYPE_WAVE_SHAPE, waveShape);
                }
                if (customWave != null) {
                    bundle.add(TypedValues.CycleType.TYPE_CUSTOM_WAVE_SHAPE, customWave);
                }
                int frame = frames.getInt(j);
                bundle.add(100, frame);
                transition.addKeyCycle(target, bundle);
                j++;
                targets2 = targets;
            }
        }
    }
}
