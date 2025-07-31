package androidx.concurrent.futures;

import java.util.concurrent.Executor;

/* loaded from: /home/thinh/ctf/byuctf/baby-android-1/resources/classes.dex */
public enum DirectExecutor implements Executor {
    INSTANCE;

    @Override // java.util.concurrent.Executor
    public void execute(Runnable command) {
        command.run();
    }

    @Override // java.lang.Enum
    public String toString() {
        return "DirectExecutor";
    }
}
