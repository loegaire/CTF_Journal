package androidx.constraintlayout.core.dsl;

import androidx.constraintlayout.core.dsl.Constraint;
import androidx.constraintlayout.core.dsl.Helper;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public class Barrier extends Helper {
    private Constraint.Side mDirection;
    private int mMargin;
    private ArrayList<Ref> references;

    public Barrier(String name) {
        super(name, new Helper.HelperType(typeMap.get(Helper.Type.BARRIER)));
        this.mDirection = null;
        this.mMargin = Integer.MIN_VALUE;
        this.references = new ArrayList<>();
    }

    public Barrier(String name, String config) {
        super(name, new Helper.HelperType(typeMap.get(Helper.Type.BARRIER)), config);
        this.mDirection = null;
        this.mMargin = Integer.MIN_VALUE;
        this.references = new ArrayList<>();
        this.configMap = convertConfigToMap();
        if (this.configMap.containsKey("contains")) {
            Ref.addStringToReferences(this.configMap.get("contains"), this.references);
        }
    }

    public Constraint.Side getDirection() {
        return this.mDirection;
    }

    public void setDirection(Constraint.Side direction) {
        this.mDirection = direction;
        this.configMap.put("direction", sideMap.get(direction));
    }

    public int getMargin() {
        return this.mMargin;
    }

    public void setMargin(int margin) {
        this.mMargin = margin;
        this.configMap.put("margin", String.valueOf(margin));
    }

    public String referencesToString() {
        if (this.references.isEmpty()) {
            return "";
        }
        StringBuilder builder = new StringBuilder("[");
        Iterator<Ref> it = this.references.iterator();
        while (it.hasNext()) {
            Ref ref = it.next();
            builder.append(ref.toString());
        }
        builder.append("]");
        return builder.toString();
    }

    public Barrier addReference(Ref ref) {
        this.references.add(ref);
        this.configMap.put("contains", referencesToString());
        return this;
    }

    public Barrier addReference(String ref) {
        return addReference(Ref.parseStringToRef(ref));
    }
}
