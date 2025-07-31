package androidx.constraintlayout.core.parser;

import androidx.constraintlayout.core.motion.utils.TypedValues;
import java.util.ArrayList;
import java.util.Objects;

/* loaded from: classes.dex */
public class CLKey extends CLContainer {
    private static ArrayList<String> sSections;

    static {
        ArrayList<String> arrayList = new ArrayList<>();
        sSections = arrayList;
        arrayList.add("ConstraintSets");
        sSections.add("Variables");
        sSections.add("Generate");
        sSections.add(TypedValues.TransitionType.NAME);
        sSections.add("KeyFrames");
        sSections.add(TypedValues.AttributesType.NAME);
        sSections.add("KeyPositions");
        sSections.add("KeyCycles");
    }

    public CLKey(char[] content) {
        super(content);
    }

    public static CLElement allocate(char[] content) {
        return new CLKey(content);
    }

    public static CLElement allocate(String name, CLElement value) {
        CLKey key = new CLKey(name.toCharArray());
        key.setStart(0L);
        key.setEnd(name.length() - 1);
        key.set(value);
        return key;
    }

    public String getName() {
        return content();
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    protected String toJSON() {
        if (this.mElements.size() > 0) {
            return getDebugName() + content() + ": " + this.mElements.get(0).toJSON();
        }
        return getDebugName() + content() + ": <> ";
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    protected String toFormattedJSON(int indent, int forceIndent) {
        StringBuilder json = new StringBuilder(getDebugName());
        addIndent(json, indent);
        String content = content();
        if (this.mElements.size() > 0) {
            json.append(content);
            json.append(": ");
            if (sSections.contains(content)) {
                forceIndent = 3;
            }
            if (forceIndent > 0) {
                json.append(this.mElements.get(0).toFormattedJSON(indent, forceIndent - 1));
            } else {
                String val = this.mElements.get(0).toJSON();
                if (val.length() + indent >= sMaxLine) {
                    json.append(this.mElements.get(0).toFormattedJSON(indent, forceIndent - 1));
                } else {
                    json.append(val);
                }
            }
            return json.toString();
        }
        return content + ": <> ";
    }

    public void set(CLElement value) {
        if (this.mElements.size() > 0) {
            this.mElements.set(0, value);
        } else {
            this.mElements.add(value);
        }
    }

    public CLElement getValue() {
        if (this.mElements.size() > 0) {
            return this.mElements.get(0);
        }
        return null;
    }

    @Override // androidx.constraintlayout.core.parser.CLContainer, androidx.constraintlayout.core.parser.CLElement
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof CLKey) {
            CLKey objKey = (CLKey) obj;
            if (!Objects.equals(getName(), objKey.getName())) {
                return false;
            }
        }
        return super.equals(obj);
    }

    @Override // androidx.constraintlayout.core.parser.CLContainer, androidx.constraintlayout.core.parser.CLElement
    public int hashCode() {
        return super.hashCode();
    }
}
