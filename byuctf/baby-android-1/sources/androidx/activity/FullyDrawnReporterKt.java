package androidx.activity;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.InlineMarker;

/* compiled from: FullyDrawnReporter.kt */
@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\u001a3\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u001c\u0010\u0003\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u0005\u0012\u0006\u0012\u0004\u0018\u00010\u00060\u0004H\u0086Hø\u0001\u0000¢\u0006\u0002\u0010\u0007\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\b"}, d2 = {"reportWhenComplete", "", "Landroidx/activity/FullyDrawnReporter;", "reporter", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "", "(Landroidx/activity/FullyDrawnReporter;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "activity_release"}, k = 2, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
/* loaded from: classes.dex */
public final class FullyDrawnReporterKt {
    /* JADX WARN: Removed duplicated region for block: B:11:0x002e  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0039  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0026  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object reportWhenComplete(FullyDrawnReporter $this$reportWhenComplete, Function1<? super Continuation<? super Unit>, ? extends Object> function1, Continuation<? super Unit> continuation) {
        FullyDrawnReporterKt$reportWhenComplete$1 fullyDrawnReporterKt$reportWhenComplete$1;
        FullyDrawnReporterKt$reportWhenComplete$1 fullyDrawnReporterKt$reportWhenComplete$12;
        FullyDrawnReporter $this$reportWhenComplete2;
        if (continuation instanceof FullyDrawnReporterKt$reportWhenComplete$1) {
            fullyDrawnReporterKt$reportWhenComplete$1 = (FullyDrawnReporterKt$reportWhenComplete$1) continuation;
            if ((fullyDrawnReporterKt$reportWhenComplete$1.label & Integer.MIN_VALUE) != 0) {
                fullyDrawnReporterKt$reportWhenComplete$1.label -= Integer.MIN_VALUE;
                fullyDrawnReporterKt$reportWhenComplete$12 = fullyDrawnReporterKt$reportWhenComplete$1;
                Object $result = fullyDrawnReporterKt$reportWhenComplete$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (fullyDrawnReporterKt$reportWhenComplete$12.label) {
                    case 0:
                        ResultKt.throwOnFailure($result);
                        $this$reportWhenComplete.addReporter();
                        if ($this$reportWhenComplete.isFullyDrawnReported()) {
                            return Unit.INSTANCE;
                        }
                        try {
                            fullyDrawnReporterKt$reportWhenComplete$12.L$0 = $this$reportWhenComplete;
                            fullyDrawnReporterKt$reportWhenComplete$12.label = 1;
                            if (function1.invoke(fullyDrawnReporterKt$reportWhenComplete$12) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            $this$reportWhenComplete2 = $this$reportWhenComplete;
                            InlineMarker.finallyStart(1);
                            $this$reportWhenComplete2.removeReporter();
                            InlineMarker.finallyEnd(1);
                            return Unit.INSTANCE;
                        } catch (Throwable th) {
                            th = th;
                            $this$reportWhenComplete2 = $this$reportWhenComplete;
                            InlineMarker.finallyStart(1);
                            $this$reportWhenComplete2.removeReporter();
                            InlineMarker.finallyEnd(1);
                            throw th;
                        }
                    case 1:
                        $this$reportWhenComplete2 = (FullyDrawnReporter) fullyDrawnReporterKt$reportWhenComplete$12.L$0;
                        try {
                            ResultKt.throwOnFailure($result);
                            InlineMarker.finallyStart(1);
                            $this$reportWhenComplete2.removeReporter();
                            InlineMarker.finallyEnd(1);
                            return Unit.INSTANCE;
                        } catch (Throwable th2) {
                            th = th2;
                            InlineMarker.finallyStart(1);
                            $this$reportWhenComplete2.removeReporter();
                            InlineMarker.finallyEnd(1);
                            throw th;
                        }
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        fullyDrawnReporterKt$reportWhenComplete$1 = new FullyDrawnReporterKt$reportWhenComplete$1(continuation);
        fullyDrawnReporterKt$reportWhenComplete$12 = fullyDrawnReporterKt$reportWhenComplete$1;
        Object $result2 = fullyDrawnReporterKt$reportWhenComplete$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (fullyDrawnReporterKt$reportWhenComplete$12.label) {
        }
    }

    private static final Object reportWhenComplete$$forInline(FullyDrawnReporter $this$reportWhenComplete, Function1<? super Continuation<? super Unit>, ? extends Object> function1, Continuation<? super Unit> continuation) {
        $this$reportWhenComplete.addReporter();
        if ($this$reportWhenComplete.isFullyDrawnReported()) {
            return Unit.INSTANCE;
        }
        try {
            function1.invoke(continuation);
            InlineMarker.finallyStart(1);
            $this$reportWhenComplete.removeReporter();
            InlineMarker.finallyEnd(1);
            return Unit.INSTANCE;
        } catch (Throwable th) {
            InlineMarker.finallyStart(1);
            $this$reportWhenComplete.removeReporter();
            InlineMarker.finallyEnd(1);
            throw th;
        }
    }
}
