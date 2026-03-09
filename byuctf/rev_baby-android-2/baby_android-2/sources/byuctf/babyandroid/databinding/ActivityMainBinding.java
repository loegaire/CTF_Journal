package byuctf.babyandroid.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import byuctf.babyandroid.R;

/* loaded from: classes3.dex */
public final class ActivityMainBinding implements ViewBinding {
    public final TextView banner;
    public final EditText flagInput;
    private final ConstraintLayout rootView;
    public final Button sanityCheckButton;

    private ActivityMainBinding(ConstraintLayout rootView, TextView banner, EditText flagInput, Button sanityCheckButton) {
        this.rootView = rootView;
        this.banner = banner;
        this.flagInput = flagInput;
        this.sanityCheckButton = sanityCheckButton;
    }

    @Override // androidx.viewbinding.ViewBinding
    public ConstraintLayout getRoot() {
        return this.rootView;
    }

    public static ActivityMainBinding inflate(LayoutInflater inflater) {
        return inflate(inflater, null, false);
    }

    public static ActivityMainBinding inflate(LayoutInflater inflater, ViewGroup parent, boolean attachToParent) {
        View root = inflater.inflate(R.layout.activity_main, parent, false);
        if (attachToParent) {
            parent.addView(root);
        }
        return bind(root);
    }

    public static ActivityMainBinding bind(View rootView) {
        int id = R.id.banner;
        TextView banner = (TextView) ViewBindings.findChildViewById(rootView, id);
        if (banner != null) {
            id = R.id.flag_input;
            EditText flagInput = (EditText) ViewBindings.findChildViewById(rootView, id);
            if (flagInput != null) {
                id = R.id.sanity_check_button;
                Button sanityCheckButton = (Button) ViewBindings.findChildViewById(rootView, id);
                if (sanityCheckButton != null) {
                    return new ActivityMainBinding((ConstraintLayout) rootView, banner, flagInput, sanityCheckButton);
                }
            }
        }
        String missingId = rootView.getResources().getResourceName(id);
        throw new NullPointerException("Missing required view with ID: ".concat(missingId));
    }
}
