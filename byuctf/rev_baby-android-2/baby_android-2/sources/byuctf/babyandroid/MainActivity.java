package byuctf.babyandroid;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;

/* loaded from: classes4.dex */
public class MainActivity extends AppCompatActivity {
    private EditText flag;
    private Button sanityCheck;

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        this.flag = (EditText) findViewById(R.id.flag_input);
        Button button = (Button) findViewById(R.id.sanity_check_button);
        this.sanityCheck = button;
        button.setOnClickListener(new View.OnClickListener() { // from class: byuctf.babyandroid.MainActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                String flagAttempt = MainActivity.this.flag.getText().toString();
                TextView banner = (TextView) MainActivity.this.findViewById(R.id.banner);
                if (FlagChecker.check(flagAttempt)) {
                    banner.setText("That's the right flag!!!");
                } else {
                    banner.setText("Nope! Try again if you'd like");
                }
            }
        });
    }
}
