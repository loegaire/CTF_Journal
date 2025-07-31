package androidx.constraintlayout.core.parser;

import java.util.Iterator;

/* loaded from: classes.dex */
public class CLObject extends CLContainer implements Iterable<CLKey> {
    public CLObject(char[] content) {
        super(content);
    }

    public static CLObject allocate(char[] content) {
        return new CLObject(content);
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    public String toJSON() {
        StringBuilder json = new StringBuilder(getDebugName() + "{ ");
        boolean first = true;
        Iterator<CLElement> it = this.mElements.iterator();
        while (it.hasNext()) {
            CLElement element = it.next();
            if (!first) {
                json.append(", ");
            } else {
                first = false;
            }
            json.append(element.toJSON());
        }
        json.append(" }");
        return json.toString();
    }

    public String toFormattedJSON() {
        return toFormattedJSON(0, 0);
    }

    @Override // androidx.constraintlayout.core.parser.CLElement
    public String toFormattedJSON(int indent, int forceIndent) {
        StringBuilder json = new StringBuilder(getDebugName());
        json.append("{\n");
        boolean first = true;
        Iterator<CLElement> it = this.mElements.iterator();
        while (it.hasNext()) {
            CLElement element = it.next();
            if (!first) {
                json.append(",\n");
            } else {
                first = false;
            }
            json.append(element.toFormattedJSON(sBaseIndent + indent, forceIndent - 1));
        }
        json.append("\n");
        addIndent(json, indent);
        json.append("}");
        return json.toString();
    }

    @Override // java.lang.Iterable
    public Iterator<CLKey> iterator() {
        return new CLObjectIterator(this);
    }

    private static class CLObjectIterator implements Iterator<CLKey> {
        int mIndex = 0;
        CLObject mObject;

        CLObjectIterator(CLObject clObject) {
            this.mObject = clObject;
        }

        @Override // java.util.Iterator
        public boolean hasNext() {
            return this.mIndex < this.mObject.size();
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // java.util.Iterator
        public CLKey next() {
            CLKey key = (CLKey) this.mObject.mElements.get(this.mIndex);
            this.mIndex++;
            return key;
        }
    }

    @Override // androidx.constraintlayout.core.parser.CLContainer, androidx.constraintlayout.core.parser.CLElement
    /* renamed from: clone */
    public CLObject mo11clone() {
        return (CLObject) super.mo11clone();
    }
}
