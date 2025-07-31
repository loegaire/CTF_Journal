package androidx.constraintlayout.core.dsl;

import androidx.constraintlayout.core.dsl.Chain;
import androidx.constraintlayout.core.dsl.Constraint;
import androidx.constraintlayout.core.dsl.Helper;

/* loaded from: classes.dex */
public class VChain extends Chain {
    private VAnchor mBaseline;
    private VAnchor mBottom;
    private VAnchor mTop;

    public class VAnchor extends Chain.Anchor {
        VAnchor(Constraint.VSide side) {
            super(Constraint.Side.valueOf(side.name()));
        }
    }

    public VChain(String name) {
        super(name);
        this.mTop = new VAnchor(Constraint.VSide.TOP);
        this.mBottom = new VAnchor(Constraint.VSide.BOTTOM);
        this.mBaseline = new VAnchor(Constraint.VSide.BASELINE);
        this.type = new Helper.HelperType(typeMap.get(Helper.Type.VERTICAL_CHAIN));
    }

    public VChain(String name, String config) {
        super(name);
        this.mTop = new VAnchor(Constraint.VSide.TOP);
        this.mBottom = new VAnchor(Constraint.VSide.BOTTOM);
        this.mBaseline = new VAnchor(Constraint.VSide.BASELINE);
        this.config = config;
        this.type = new Helper.HelperType(typeMap.get(Helper.Type.VERTICAL_CHAIN));
        this.configMap = convertConfigToMap();
        if (this.configMap.containsKey("contains")) {
            Ref.addStringToReferences(this.configMap.get("contains"), this.references);
        }
    }

    public VAnchor getTop() {
        return this.mTop;
    }

    public void linkToTop(Constraint.VAnchor anchor) {
        linkToTop(anchor, 0);
    }

    public void linkToTop(Constraint.VAnchor anchor, int margin) {
        linkToTop(anchor, margin, Integer.MIN_VALUE);
    }

    public void linkToTop(Constraint.VAnchor anchor, int margin, int goneMargin) {
        this.mTop.mConnection = anchor;
        this.mTop.mMargin = margin;
        this.mTop.mGoneMargin = goneMargin;
        this.configMap.put("top", this.mTop.toString());
    }

    public VAnchor getBottom() {
        return this.mBottom;
    }

    public void linkToBottom(Constraint.VAnchor anchor) {
        linkToBottom(anchor, 0);
    }

    public void linkToBottom(Constraint.VAnchor anchor, int margin) {
        linkToBottom(anchor, margin, Integer.MIN_VALUE);
    }

    public void linkToBottom(Constraint.VAnchor anchor, int margin, int goneMargin) {
        this.mBottom.mConnection = anchor;
        this.mBottom.mMargin = margin;
        this.mBottom.mGoneMargin = goneMargin;
        this.configMap.put("bottom", this.mBottom.toString());
    }

    public VAnchor getBaseline() {
        return this.mBaseline;
    }

    public void linkToBaseline(Constraint.VAnchor anchor) {
        linkToBaseline(anchor, 0);
    }

    public void linkToBaseline(Constraint.VAnchor anchor, int margin) {
        linkToBaseline(anchor, margin, Integer.MIN_VALUE);
    }

    public void linkToBaseline(Constraint.VAnchor anchor, int margin, int goneMargin) {
        this.mBaseline.mConnection = anchor;
        this.mBaseline.mMargin = margin;
        this.mBaseline.mGoneMargin = goneMargin;
        this.configMap.put("baseline", this.mBaseline.toString());
    }
}
