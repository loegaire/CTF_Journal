package com.google.android.material.textfield;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
class CustomEndIconDelegate extends EndIconDelegate {
    CustomEndIconDelegate(EndCompoundLayout endLayout) {
        super(endLayout);
    }

    @Override // com.google.android.material.textfield.EndIconDelegate
    void setUp() {
        this.endLayout.setEndIconOnLongClickListener(null);
    }
}
