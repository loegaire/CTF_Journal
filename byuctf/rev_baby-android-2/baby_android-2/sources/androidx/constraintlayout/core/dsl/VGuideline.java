package androidx.constraintlayout.core.dsl;

import androidx.constraintlayout.core.dsl.Helper;

/* loaded from: classes.dex */
public class VGuideline extends Guideline {
    public VGuideline(String name) {
        super(name);
        this.type = new Helper.HelperType(typeMap.get(Helper.Type.VERTICAL_GUIDELINE));
    }

    public VGuideline(String name, String config) {
        super(name);
        this.config = config;
        this.type = new Helper.HelperType(typeMap.get(Helper.Type.VERTICAL_GUIDELINE));
        this.configMap = convertConfigToMap();
    }
}
