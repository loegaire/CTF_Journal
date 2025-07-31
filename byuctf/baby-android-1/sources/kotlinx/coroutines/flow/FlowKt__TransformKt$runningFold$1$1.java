package kotlinx.coroutines.flow;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Ref;

/* compiled from: Transform.kt */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u00032\u0006\u0010\u0004\u001a\u0002H\u0002H\u008a@¢\u0006\u0004\b\u0005\u0010\u0006"}, d2 = {"<anonymous>", "", "T", "R", "value", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
/* loaded from: classes.dex */
final class FlowKt__TransformKt$runningFold$1$1<T> implements FlowCollector {
    final /* synthetic */ Ref.ObjectRef<R> $accumulator;
    final /* synthetic */ Function3<R, T, Continuation<? super R>, Object> $operation;
    final /* synthetic */ FlowCollector<R> $this_unsafeFlow;

    /* JADX WARN: Multi-variable type inference failed */
    FlowKt__TransformKt$runningFold$1$1(Ref.ObjectRef<R> objectRef, Function3<? super R, ? super T, ? super Continuation<? super R>, ? extends Object> function3, FlowCollector<? super R> flowCollector) {
        this.$accumulator = objectRef;
        this.$operation = function3;
        this.$this_unsafeFlow = flowCollector;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0031  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0071 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:18:0x003f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(T t, Continuation<? super Unit> continuation) {
        FlowKt__TransformKt$runningFold$1$1$emit$1 flowKt__TransformKt$runningFold$1$1$emit$1;
        FlowKt__TransformKt$runningFold$1$1$emit$1 flowKt__TransformKt$runningFold$1$1$emit$12;
        T t2;
        Ref.ObjectRef objectRef;
        FlowKt__TransformKt$runningFold$1$1<T> flowKt__TransformKt$runningFold$1$1;
        FlowCollector<R> flowCollector;
        T t3;
        if (continuation instanceof FlowKt__TransformKt$runningFold$1$1$emit$1) {
            flowKt__TransformKt$runningFold$1$1$emit$1 = (FlowKt__TransformKt$runningFold$1$1$emit$1) continuation;
            if ((flowKt__TransformKt$runningFold$1$1$emit$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__TransformKt$runningFold$1$1$emit$1.label -= Integer.MIN_VALUE;
                flowKt__TransformKt$runningFold$1$1$emit$12 = flowKt__TransformKt$runningFold$1$1$emit$1;
                Object obj = flowKt__TransformKt$runningFold$1$1$emit$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__TransformKt$runningFold$1$1$emit$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        Ref.ObjectRef objectRef2 = this.$accumulator;
                        Function3<R, T, Continuation<? super R>, Object> function3 = this.$operation;
                        T t4 = objectRef2.element;
                        flowKt__TransformKt$runningFold$1$1$emit$12.L$0 = this;
                        flowKt__TransformKt$runningFold$1$1$emit$12.L$1 = objectRef2;
                        flowKt__TransformKt$runningFold$1$1$emit$12.label = 1;
                        Object invoke = function3.invoke(t4, t, flowKt__TransformKt$runningFold$1$1$emit$12);
                        if (invoke == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        t2 = (T) invoke;
                        objectRef = objectRef2;
                        flowKt__TransformKt$runningFold$1$1 = this;
                        objectRef.element = t2;
                        flowCollector = flowKt__TransformKt$runningFold$1$1.$this_unsafeFlow;
                        t3 = flowKt__TransformKt$runningFold$1$1.$accumulator.element;
                        flowKt__TransformKt$runningFold$1$1$emit$12.L$0 = null;
                        flowKt__TransformKt$runningFold$1$1$emit$12.L$1 = null;
                        flowKt__TransformKt$runningFold$1$1$emit$12.label = 2;
                        if (flowCollector.emit(t3, flowKt__TransformKt$runningFold$1$1$emit$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        return Unit.INSTANCE;
                    case 1:
                        objectRef = (Ref.ObjectRef) flowKt__TransformKt$runningFold$1$1$emit$12.L$1;
                        FlowKt__TransformKt$runningFold$1$1<T> flowKt__TransformKt$runningFold$1$12 = (FlowKt__TransformKt$runningFold$1$1) flowKt__TransformKt$runningFold$1$1$emit$12.L$0;
                        ResultKt.throwOnFailure(obj);
                        flowKt__TransformKt$runningFold$1$1 = flowKt__TransformKt$runningFold$1$12;
                        t2 = (T) obj;
                        objectRef.element = t2;
                        flowCollector = flowKt__TransformKt$runningFold$1$1.$this_unsafeFlow;
                        t3 = flowKt__TransformKt$runningFold$1$1.$accumulator.element;
                        flowKt__TransformKt$runningFold$1$1$emit$12.L$0 = null;
                        flowKt__TransformKt$runningFold$1$1$emit$12.L$1 = null;
                        flowKt__TransformKt$runningFold$1$1$emit$12.label = 2;
                        if (flowCollector.emit(t3, flowKt__TransformKt$runningFold$1$1$emit$12) == coroutine_suspended) {
                        }
                        return Unit.INSTANCE;
                    case 2:
                        ResultKt.throwOnFailure(obj);
                        return Unit.INSTANCE;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__TransformKt$runningFold$1$1$emit$1 = new FlowKt__TransformKt$runningFold$1$1$emit$1(this, continuation);
        flowKt__TransformKt$runningFold$1$1$emit$12 = flowKt__TransformKt$runningFold$1$1$emit$1;
        Object obj2 = flowKt__TransformKt$runningFold$1$1$emit$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__TransformKt$runningFold$1$1$emit$12.label) {
        }
    }
}
