package kotlinx.coroutines.flow;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.internal.NullSurrogateKt;

/* compiled from: Reduce.kt */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\b\b\u0001\u0010\u0003*\u0002H\u00022\u0006\u0010\u0004\u001a\u0002H\u0003H\u008a@¢\u0006\u0004\b\u0005\u0010\u0006"}, d2 = {"<anonymous>", "", "S", "T", "value", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
/* loaded from: classes.dex */
final class FlowKt__ReduceKt$reduce$2<T> implements FlowCollector {
    final /* synthetic */ Ref.ObjectRef<Object> $accumulator;
    final /* synthetic */ Function3<S, T, Continuation<? super S>, Object> $operation;

    /* JADX WARN: Multi-variable type inference failed */
    FlowKt__ReduceKt$reduce$2(Ref.ObjectRef<Object> objectRef, Function3<? super S, ? super T, ? super Continuation<? super S>, ? extends Object> function3) {
        this.$accumulator = objectRef;
        this.$operation = function3;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(T t, Continuation<? super Unit> continuation) {
        FlowKt__ReduceKt$reduce$2$emit$1 flowKt__ReduceKt$reduce$2$emit$1;
        FlowKt__ReduceKt$reduce$2$emit$1 flowKt__ReduceKt$reduce$2$emit$12;
        Ref.ObjectRef<Object> objectRef;
        T t2;
        Ref.ObjectRef<Object> objectRef2;
        if (continuation instanceof FlowKt__ReduceKt$reduce$2$emit$1) {
            flowKt__ReduceKt$reduce$2$emit$1 = (FlowKt__ReduceKt$reduce$2$emit$1) continuation;
            if ((flowKt__ReduceKt$reduce$2$emit$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$reduce$2$emit$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$reduce$2$emit$12 = flowKt__ReduceKt$reduce$2$emit$1;
                Object obj = flowKt__ReduceKt$reduce$2$emit$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$reduce$2$emit$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        objectRef = this.$accumulator;
                        if (objectRef.element != NullSurrogateKt.NULL) {
                            Function3<S, T, Continuation<? super S>, Object> function3 = this.$operation;
                            Object obj2 = this.$accumulator.element;
                            flowKt__ReduceKt$reduce$2$emit$12.L$0 = objectRef;
                            flowKt__ReduceKt$reduce$2$emit$12.label = 1;
                            Object invoke = function3.invoke(obj2, t, flowKt__ReduceKt$reduce$2$emit$12);
                            if (invoke == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            t2 = invoke;
                            objectRef2 = objectRef;
                            objectRef = objectRef2;
                            t = t2;
                        }
                        objectRef.element = t;
                        return Unit.INSTANCE;
                    case 1:
                        objectRef2 = (Ref.ObjectRef) flowKt__ReduceKt$reduce$2$emit$12.L$0;
                        ResultKt.throwOnFailure(obj);
                        t2 = obj;
                        objectRef = objectRef2;
                        t = t2;
                        objectRef.element = t;
                        return Unit.INSTANCE;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ReduceKt$reduce$2$emit$1 = new FlowKt__ReduceKt$reduce$2$emit$1(this, continuation);
        flowKt__ReduceKt$reduce$2$emit$12 = flowKt__ReduceKt$reduce$2$emit$1;
        Object obj3 = flowKt__ReduceKt$reduce$2$emit$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$reduce$2$emit$12.label) {
        }
    }
}
