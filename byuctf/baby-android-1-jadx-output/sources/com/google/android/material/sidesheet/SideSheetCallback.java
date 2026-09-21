package com.google.android.material.sidesheet;

import android.view.View;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public abstract class SideSheetCallback implements SheetCallback {
    @Override // com.google.android.material.sidesheet.SheetCallback
    public abstract void onSlide(View view, float f);

    @Override // com.google.android.material.sidesheet.SheetCallback
    public abstract void onStateChanged(View view, int i);

    void onLayout(View sheet) {
    }
}
