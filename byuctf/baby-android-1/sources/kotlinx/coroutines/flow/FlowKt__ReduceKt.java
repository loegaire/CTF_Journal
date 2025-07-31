package kotlinx.coroutines.flow;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.NoSuchElementException;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.internal.AbortFlowException;
import kotlinx.coroutines.flow.internal.FlowExceptions_commonKt;
import kotlinx.coroutines.flow.internal.NullSurrogateKt;

/* compiled from: Reduce.kt */
@Metadata(d1 = {"\u0000,\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\r\u001a!\u0010\u0000\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0003\u001aE\u0010\u0000\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\"\u0010\u0004\u001a\u001e\b\u0001\u0012\u0004\u0012\u0002H\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070\u0006\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\t\u001a#\u0010\n\u001a\u0004\u0018\u0001H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0003\u001aG\u0010\n\u001a\u0004\u0018\u0001H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u00022\"\u0010\u0004\u001a\u001e\b\u0001\u0012\u0004\u0012\u0002H\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070\u0006\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\t\u001ay\u0010\u000b\u001a\u0002H\f\"\u0004\b\u0000\u0010\u0001\"\u0004\b\u0001\u0010\f*\b\u0012\u0004\u0012\u0002H\u00010\u00022\u0006\u0010\r\u001a\u0002H\f2H\b\u0004\u0010\u000e\u001aB\b\u0001\u0012\u0013\u0012\u0011H\f¢\u0006\f\b\u0010\u0012\b\b\u0011\u0012\u0004\b\b(\u0012\u0012\u0013\u0012\u0011H\u0001¢\u0006\f\b\u0010\u0012\b\b\u0011\u0012\u0004\b\b(\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\f0\u0006\u0012\u0006\u0012\u0004\u0018\u00010\b0\u000fH\u0086Hø\u0001\u0000¢\u0006\u0002\u0010\u0014\u001a!\u0010\u0015\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0003\u001a#\u0010\u0016\u001a\u0004\u0018\u0001H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0003\u001as\u0010\u0017\u001a\u0002H\u0018\"\u0004\b\u0000\u0010\u0018\"\b\b\u0001\u0010\u0001*\u0002H\u0018*\b\u0012\u0004\u0012\u0002H\u00010\u00022F\u0010\u000e\u001aB\b\u0001\u0012\u0013\u0012\u0011H\u0018¢\u0006\f\b\u0010\u0012\b\b\u0011\u0012\u0004\b\b(\u0019\u0012\u0013\u0012\u0011H\u0001¢\u0006\f\b\u0010\u0012\b\b\u0011\u0012\u0004\b\b(\u0013\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0006\u0012\u0006\u0012\u0004\u0018\u00010\b0\u000fH\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u001a\u001a!\u0010\u001b\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0003\u001a#\u0010\u001c\u001a\u0004\u0018\u0001H\u0001\"\u0004\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0003\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001d"}, d2 = {"first", "T", "Lkotlinx/coroutines/flow/Flow;", "(Lkotlinx/coroutines/flow/Flow;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "predicate", "Lkotlin/Function2;", "Lkotlin/coroutines/Continuation;", "", "", "(Lkotlinx/coroutines/flow/Flow;Lkotlin/jvm/functions/Function2;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "firstOrNull", "fold", "R", "initial", "operation", "Lkotlin/Function3;", "Lkotlin/ParameterName;", "name", "acc", "value", "(Lkotlinx/coroutines/flow/Flow;Ljava/lang/Object;Lkotlin/jvm/functions/Function3;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "last", "lastOrNull", "reduce", "S", "accumulator", "(Lkotlinx/coroutines/flow/Flow;Lkotlin/jvm/functions/Function3;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "single", "singleOrNull", "kotlinx-coroutines-core"}, k = 5, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE, xs = "kotlinx/coroutines/flow/FlowKt")
/* loaded from: classes.dex */
final /* synthetic */ class FlowKt__ReduceKt {
    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /* JADX WARN: Type inference failed for: r3v0, types: [T, kotlinx.coroutines.internal.Symbol] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <S, T extends S> Object reduce(Flow<? extends T> flow, Function3<? super S, ? super T, ? super Continuation<? super S>, ? extends Object> function3, Continuation<? super S> continuation) {
        FlowKt__ReduceKt$reduce$1 flowKt__ReduceKt$reduce$1;
        FlowKt__ReduceKt$reduce$1 flowKt__ReduceKt$reduce$12;
        Ref.ObjectRef accumulator;
        if (continuation instanceof FlowKt__ReduceKt$reduce$1) {
            flowKt__ReduceKt$reduce$1 = (FlowKt__ReduceKt$reduce$1) continuation;
            if ((flowKt__ReduceKt$reduce$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$reduce$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$reduce$12 = flowKt__ReduceKt$reduce$1;
                Object $result = flowKt__ReduceKt$reduce$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$reduce$12.label) {
                    case 0:
                        ResultKt.throwOnFailure($result);
                        Ref.ObjectRef accumulator2 = new Ref.ObjectRef();
                        accumulator2.element = NullSurrogateKt.NULL;
                        FlowCollector<? super Object> flowKt__ReduceKt$reduce$2 = new FlowKt__ReduceKt$reduce$2<>(accumulator2, function3);
                        flowKt__ReduceKt$reduce$12.L$0 = accumulator2;
                        flowKt__ReduceKt$reduce$12.label = 1;
                        if (flow.collect(flowKt__ReduceKt$reduce$2, flowKt__ReduceKt$reduce$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        accumulator = accumulator2;
                        break;
                    case 1:
                        accumulator = (Ref.ObjectRef) flowKt__ReduceKt$reduce$12.L$0;
                        ResultKt.throwOnFailure($result);
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                if (accumulator.element != NullSurrogateKt.NULL) {
                    throw new NoSuchElementException("Empty flow can't be reduced");
                }
                return accumulator.element;
            }
        }
        flowKt__ReduceKt$reduce$1 = new FlowKt__ReduceKt$reduce$1(continuation);
        flowKt__ReduceKt$reduce$12 = flowKt__ReduceKt$reduce$1;
        Object $result2 = flowKt__ReduceKt$reduce$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$reduce$12.label) {
        }
        if (accumulator.element != NullSurrogateKt.NULL) {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T, R> Object fold(Flow<? extends T> flow, R r, Function3<? super R, ? super T, ? super Continuation<? super R>, ? extends Object> function3, Continuation<? super R> continuation) {
        FlowKt__ReduceKt$fold$1 flowKt__ReduceKt$fold$1;
        FlowKt__ReduceKt$fold$1 flowKt__ReduceKt$fold$12;
        Ref.ObjectRef accumulator;
        if (continuation instanceof FlowKt__ReduceKt$fold$1) {
            flowKt__ReduceKt$fold$1 = (FlowKt__ReduceKt$fold$1) continuation;
            if ((flowKt__ReduceKt$fold$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$fold$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$fold$12 = flowKt__ReduceKt$fold$1;
                Object $result = flowKt__ReduceKt$fold$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$fold$12.label) {
                    case 0:
                        ResultKt.throwOnFailure($result);
                        Ref.ObjectRef accumulator2 = new Ref.ObjectRef();
                        accumulator2.element = r;
                        FlowCollector<? super Object> flowKt__ReduceKt$fold$2 = new FlowKt__ReduceKt$fold$2<>(accumulator2, function3);
                        flowKt__ReduceKt$fold$12.L$0 = accumulator2;
                        flowKt__ReduceKt$fold$12.label = 1;
                        if (flow.collect(flowKt__ReduceKt$fold$2, flowKt__ReduceKt$fold$12) != coroutine_suspended) {
                            accumulator = accumulator2;
                            break;
                        } else {
                            return coroutine_suspended;
                        }
                    case 1:
                        accumulator = (Ref.ObjectRef) flowKt__ReduceKt$fold$12.L$0;
                        ResultKt.throwOnFailure($result);
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                return accumulator.element;
            }
        }
        flowKt__ReduceKt$fold$1 = new FlowKt__ReduceKt$fold$1(continuation);
        flowKt__ReduceKt$fold$12 = flowKt__ReduceKt$fold$1;
        Object $result2 = flowKt__ReduceKt$fold$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$fold$12.label) {
        }
        return accumulator.element;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static final <T, R> Object fold$$forInline(Flow<? extends T> flow, R r, Function3<? super R, ? super T, ? super Continuation<? super R>, ? extends Object> function3, Continuation<? super R> continuation) {
        Ref.ObjectRef accumulator = new Ref.ObjectRef();
        accumulator.element = r;
        FlowKt__ReduceKt$fold$2 flowKt__ReduceKt$fold$2 = new FlowKt__ReduceKt$fold$2(accumulator, function3);
        InlineMarker.mark(0);
        flow.collect(flowKt__ReduceKt$fold$2, continuation);
        InlineMarker.mark(1);
        return accumulator.element;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object single(Flow<? extends T> flow, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$single$1 flowKt__ReduceKt$single$1;
        FlowKt__ReduceKt$single$1 flowKt__ReduceKt$single$12;
        Ref.ObjectRef objectRef;
        if (continuation instanceof FlowKt__ReduceKt$single$1) {
            flowKt__ReduceKt$single$1 = (FlowKt__ReduceKt$single$1) continuation;
            if ((flowKt__ReduceKt$single$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$single$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$single$12 = flowKt__ReduceKt$single$1;
                Object obj = flowKt__ReduceKt$single$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$single$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        final Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
                        objectRef2.element = (T) NullSurrogateKt.NULL;
                        FlowCollector<? super Object> flowCollector = new FlowCollector() { // from class: kotlinx.coroutines.flow.FlowKt__ReduceKt$single$2
                            @Override // kotlinx.coroutines.flow.FlowCollector
                            public final Object emit(T t, Continuation<? super Unit> continuation2) {
                                if (!(objectRef2.element == NullSurrogateKt.NULL)) {
                                    throw new IllegalArgumentException("Flow has more than one element".toString());
                                }
                                objectRef2.element = t;
                                return Unit.INSTANCE;
                            }
                        };
                        flowKt__ReduceKt$single$12.L$0 = objectRef2;
                        flowKt__ReduceKt$single$12.label = 1;
                        if (flow.collect(flowCollector, flowKt__ReduceKt$single$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        objectRef = objectRef2;
                        break;
                    case 1:
                        objectRef = (Ref.ObjectRef) flowKt__ReduceKt$single$12.L$0;
                        ResultKt.throwOnFailure(obj);
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                if (objectRef.element != NullSurrogateKt.NULL) {
                    throw new NoSuchElementException("Flow is empty");
                }
                return objectRef.element;
            }
        }
        flowKt__ReduceKt$single$1 = new FlowKt__ReduceKt$single$1(continuation);
        flowKt__ReduceKt$single$12 = flowKt__ReduceKt$single$1;
        Object obj2 = flowKt__ReduceKt$single$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$single$12.label) {
        }
        if (objectRef.element != NullSurrogateKt.NULL) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0076 A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object singleOrNull(Flow<? extends T> flow, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$singleOrNull$1 flowKt__ReduceKt$singleOrNull$1;
        FlowKt__ReduceKt$singleOrNull$1 flowKt__ReduceKt$singleOrNull$12;
        final Ref.ObjectRef objectRef;
        FlowCollector<T> flowCollector;
        AbortFlowException e;
        if (continuation instanceof FlowKt__ReduceKt$singleOrNull$1) {
            flowKt__ReduceKt$singleOrNull$1 = (FlowKt__ReduceKt$singleOrNull$1) continuation;
            if ((flowKt__ReduceKt$singleOrNull$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$singleOrNull$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$singleOrNull$12 = flowKt__ReduceKt$singleOrNull$1;
                Object obj = flowKt__ReduceKt$singleOrNull$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$singleOrNull$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        objectRef = new Ref.ObjectRef();
                        objectRef.element = (T) NullSurrogateKt.NULL;
                        FlowCollector<T> flowCollector2 = new FlowCollector<T>() { // from class: kotlinx.coroutines.flow.FlowKt__ReduceKt$singleOrNull$$inlined$collectWhile$1
                            @Override // kotlinx.coroutines.flow.FlowCollector
                            public Object emit(T t, Continuation<? super Unit> continuation2) {
                                boolean z;
                                if (Ref.ObjectRef.this.element == NullSurrogateKt.NULL) {
                                    Ref.ObjectRef.this.element = t;
                                    z = true;
                                } else {
                                    Ref.ObjectRef.this.element = (T) NullSurrogateKt.NULL;
                                    z = false;
                                }
                                if (!z) {
                                    throw new AbortFlowException(this);
                                }
                                return Unit.INSTANCE;
                            }
                        };
                        try {
                            flowKt__ReduceKt$singleOrNull$12.L$0 = objectRef;
                            flowKt__ReduceKt$singleOrNull$12.L$1 = flowCollector2;
                            flowKt__ReduceKt$singleOrNull$12.label = 1;
                        } catch (AbortFlowException e2) {
                            flowCollector = flowCollector2;
                            e = e2;
                            FlowExceptions_commonKt.checkOwnership(e, flowCollector);
                            if (objectRef.element != NullSurrogateKt.NULL) {
                            }
                        }
                        if (flow.collect(flowCollector2, flowKt__ReduceKt$singleOrNull$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (objectRef.element != NullSurrogateKt.NULL) {
                            return null;
                        }
                        return objectRef.element;
                    case 1:
                        flowCollector = (FlowKt__ReduceKt$singleOrNull$$inlined$collectWhile$1) flowKt__ReduceKt$singleOrNull$12.L$1;
                        objectRef = (Ref.ObjectRef) flowKt__ReduceKt$singleOrNull$12.L$0;
                        try {
                            ResultKt.throwOnFailure(obj);
                        } catch (AbortFlowException e3) {
                            e = e3;
                            FlowExceptions_commonKt.checkOwnership(e, flowCollector);
                            if (objectRef.element != NullSurrogateKt.NULL) {
                            }
                        }
                        if (objectRef.element != NullSurrogateKt.NULL) {
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ReduceKt$singleOrNull$1 = new FlowKt__ReduceKt$singleOrNull$1(continuation);
        flowKt__ReduceKt$singleOrNull$12 = flowKt__ReduceKt$singleOrNull$1;
        Object obj2 = flowKt__ReduceKt$singleOrNull$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$singleOrNull$12.label) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0079  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object first(Flow<? extends T> flow, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$first$1 flowKt__ReduceKt$first$1;
        FlowKt__ReduceKt$first$1 flowKt__ReduceKt$first$12;
        final Ref.ObjectRef objectRef;
        FlowCollector<T> flowCollector;
        AbortFlowException e;
        if (continuation instanceof FlowKt__ReduceKt$first$1) {
            flowKt__ReduceKt$first$1 = (FlowKt__ReduceKt$first$1) continuation;
            if ((flowKt__ReduceKt$first$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$first$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$first$12 = flowKt__ReduceKt$first$1;
                Object obj = flowKt__ReduceKt$first$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$first$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        objectRef = new Ref.ObjectRef();
                        objectRef.element = (T) NullSurrogateKt.NULL;
                        FlowCollector<T> flowCollector2 = new FlowCollector<T>() { // from class: kotlinx.coroutines.flow.FlowKt__ReduceKt$first$$inlined$collectWhile$1
                            @Override // kotlinx.coroutines.flow.FlowCollector
                            public Object emit(T t, Continuation<? super Unit> continuation2) {
                                Ref.ObjectRef.this.element = t;
                                throw new AbortFlowException(this);
                            }
                        };
                        try {
                            flowKt__ReduceKt$first$12.L$0 = objectRef;
                            flowKt__ReduceKt$first$12.L$1 = flowCollector2;
                            flowKt__ReduceKt$first$12.label = 1;
                        } catch (AbortFlowException e2) {
                            flowCollector = flowCollector2;
                            e = e2;
                            FlowExceptions_commonKt.checkOwnership(e, flowCollector);
                            if (objectRef.element == NullSurrogateKt.NULL) {
                            }
                        }
                        if (flow.collect(flowCollector2, flowKt__ReduceKt$first$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (objectRef.element == NullSurrogateKt.NULL) {
                            return objectRef.element;
                        }
                        throw new NoSuchElementException("Expected at least one element");
                    case 1:
                        flowCollector = (FlowKt__ReduceKt$first$$inlined$collectWhile$1) flowKt__ReduceKt$first$12.L$1;
                        objectRef = (Ref.ObjectRef) flowKt__ReduceKt$first$12.L$0;
                        try {
                            ResultKt.throwOnFailure(obj);
                        } catch (AbortFlowException e3) {
                            e = e3;
                            FlowExceptions_commonKt.checkOwnership(e, flowCollector);
                            if (objectRef.element == NullSurrogateKt.NULL) {
                            }
                        }
                        if (objectRef.element == NullSurrogateKt.NULL) {
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ReduceKt$first$1 = new FlowKt__ReduceKt$first$1(continuation);
        flowKt__ReduceKt$first$12 = flowKt__ReduceKt$first$1;
        Object obj2 = flowKt__ReduceKt$first$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$first$12.label) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x007f  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0082  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0040  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object first(Flow<? extends T> flow, Function2<? super T, ? super Continuation<? super Boolean>, ? extends Object> function2, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$first$3 flowKt__ReduceKt$first$3;
        FlowKt__ReduceKt$first$3 flowKt__ReduceKt$first$32;
        Function2<? super T, ? super Continuation<? super Boolean>, ? extends Object> function22;
        Ref.ObjectRef objectRef;
        FlowCollector<? super Object> flowCollector;
        AbortFlowException e;
        if (continuation instanceof FlowKt__ReduceKt$first$3) {
            flowKt__ReduceKt$first$3 = (FlowKt__ReduceKt$first$3) continuation;
            if ((flowKt__ReduceKt$first$3.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$first$3.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$first$32 = flowKt__ReduceKt$first$3;
                Object obj = flowKt__ReduceKt$first$32.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$first$32.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        function22 = function2;
                        Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
                        objectRef2.element = (T) NullSurrogateKt.NULL;
                        FlowCollector<? super Object> flowKt__ReduceKt$first$$inlined$collectWhile$2 = new FlowKt__ReduceKt$first$$inlined$collectWhile$2<>(function22, objectRef2);
                        try {
                            flowKt__ReduceKt$first$32.L$0 = function22;
                            flowKt__ReduceKt$first$32.L$1 = objectRef2;
                            flowKt__ReduceKt$first$32.L$2 = flowKt__ReduceKt$first$$inlined$collectWhile$2;
                            flowKt__ReduceKt$first$32.label = 1;
                        } catch (AbortFlowException e2) {
                            objectRef = objectRef2;
                            flowCollector = flowKt__ReduceKt$first$$inlined$collectWhile$2;
                            e = e2;
                            FlowExceptions_commonKt.checkOwnership(e, flowCollector);
                            if (objectRef.element == NullSurrogateKt.NULL) {
                            }
                        }
                        if (flow.collect(flowKt__ReduceKt$first$$inlined$collectWhile$2, flowKt__ReduceKt$first$32) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        objectRef = objectRef2;
                        if (objectRef.element == NullSurrogateKt.NULL) {
                            return objectRef.element;
                        }
                        throw new NoSuchElementException("Expected at least one element matching the predicate " + function22);
                    case 1:
                        flowCollector = (FlowKt__ReduceKt$first$$inlined$collectWhile$2) flowKt__ReduceKt$first$32.L$2;
                        objectRef = (Ref.ObjectRef) flowKt__ReduceKt$first$32.L$1;
                        function22 = (Function2) flowKt__ReduceKt$first$32.L$0;
                        try {
                            ResultKt.throwOnFailure(obj);
                        } catch (AbortFlowException e3) {
                            e = e3;
                            FlowExceptions_commonKt.checkOwnership(e, flowCollector);
                            if (objectRef.element == NullSurrogateKt.NULL) {
                            }
                        }
                        if (objectRef.element == NullSurrogateKt.NULL) {
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ReduceKt$first$3 = new FlowKt__ReduceKt$first$3(continuation);
        flowKt__ReduceKt$first$32 = flowKt__ReduceKt$first$3;
        Object obj2 = flowKt__ReduceKt$first$32.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$first$32.label) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object firstOrNull(Flow<? extends T> flow, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$firstOrNull$1 flowKt__ReduceKt$firstOrNull$1;
        FlowKt__ReduceKt$firstOrNull$1 flowKt__ReduceKt$firstOrNull$12;
        final Ref.ObjectRef result;
        FlowCollector<T> flowCollector;
        AbortFlowException e$iv;
        if (continuation instanceof FlowKt__ReduceKt$firstOrNull$1) {
            flowKt__ReduceKt$firstOrNull$1 = (FlowKt__ReduceKt$firstOrNull$1) continuation;
            if ((flowKt__ReduceKt$firstOrNull$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$firstOrNull$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$firstOrNull$12 = flowKt__ReduceKt$firstOrNull$1;
                Object $result = flowKt__ReduceKt$firstOrNull$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$firstOrNull$12.label) {
                    case 0:
                        ResultKt.throwOnFailure($result);
                        result = new Ref.ObjectRef();
                        FlowCollector<T> flowCollector2 = new FlowCollector<T>() { // from class: kotlinx.coroutines.flow.FlowKt__ReduceKt$firstOrNull$$inlined$collectWhile$1
                            @Override // kotlinx.coroutines.flow.FlowCollector
                            public Object emit(T t, Continuation<? super Unit> continuation2) {
                                Ref.ObjectRef.this.element = t;
                                throw new AbortFlowException(this);
                            }
                        };
                        try {
                            flowKt__ReduceKt$firstOrNull$12.L$0 = result;
                            flowKt__ReduceKt$firstOrNull$12.L$1 = flowCollector2;
                            flowKt__ReduceKt$firstOrNull$12.label = 1;
                        } catch (AbortFlowException e) {
                            flowCollector = flowCollector2;
                            e$iv = e;
                            FlowExceptions_commonKt.checkOwnership(e$iv, flowCollector);
                        }
                        return flow.collect(flowCollector2, flowKt__ReduceKt$firstOrNull$12) == coroutine_suspended ? coroutine_suspended : result.element;
                    case 1:
                        flowCollector = (FlowKt__ReduceKt$firstOrNull$$inlined$collectWhile$1) flowKt__ReduceKt$firstOrNull$12.L$1;
                        result = (Ref.ObjectRef) flowKt__ReduceKt$firstOrNull$12.L$0;
                        try {
                            ResultKt.throwOnFailure($result);
                        } catch (AbortFlowException e2) {
                            e$iv = e2;
                            FlowExceptions_commonKt.checkOwnership(e$iv, flowCollector);
                        }
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ReduceKt$firstOrNull$1 = new FlowKt__ReduceKt$firstOrNull$1(continuation);
        flowKt__ReduceKt$firstOrNull$12 = flowKt__ReduceKt$firstOrNull$1;
        Object $result2 = flowKt__ReduceKt$firstOrNull$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$firstOrNull$12.label) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object firstOrNull(Flow<? extends T> flow, Function2<? super T, ? super Continuation<? super Boolean>, ? extends Object> function2, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$firstOrNull$3 flowKt__ReduceKt$firstOrNull$3;
        FlowKt__ReduceKt$firstOrNull$3 flowKt__ReduceKt$firstOrNull$32;
        Ref.ObjectRef result;
        FlowCollector<? super Object> collector$iv;
        AbortFlowException e$iv;
        if (continuation instanceof FlowKt__ReduceKt$firstOrNull$3) {
            flowKt__ReduceKt$firstOrNull$3 = (FlowKt__ReduceKt$firstOrNull$3) continuation;
            if ((flowKt__ReduceKt$firstOrNull$3.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$firstOrNull$3.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$firstOrNull$32 = flowKt__ReduceKt$firstOrNull$3;
                Object $result = flowKt__ReduceKt$firstOrNull$32.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$firstOrNull$32.label) {
                    case 0:
                        ResultKt.throwOnFailure($result);
                        Ref.ObjectRef result2 = new Ref.ObjectRef();
                        FlowCollector<? super Object> collector$iv2 = new FlowKt__ReduceKt$firstOrNull$$inlined$collectWhile$2<>(function2, result2);
                        try {
                            flowKt__ReduceKt$firstOrNull$32.L$0 = result2;
                            flowKt__ReduceKt$firstOrNull$32.L$1 = collector$iv2;
                            flowKt__ReduceKt$firstOrNull$32.label = 1;
                        } catch (AbortFlowException e) {
                            result = result2;
                            collector$iv = collector$iv2;
                            e$iv = e;
                            FlowExceptions_commonKt.checkOwnership(e$iv, collector$iv);
                            return result.element;
                        }
                        if (flow.collect(collector$iv2, flowKt__ReduceKt$firstOrNull$32) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        result = result2;
                        return result.element;
                    case 1:
                        collector$iv = (FlowKt__ReduceKt$firstOrNull$$inlined$collectWhile$2) flowKt__ReduceKt$firstOrNull$32.L$1;
                        result = (Ref.ObjectRef) flowKt__ReduceKt$firstOrNull$32.L$0;
                        try {
                            ResultKt.throwOnFailure($result);
                        } catch (AbortFlowException e2) {
                            e$iv = e2;
                            FlowExceptions_commonKt.checkOwnership(e$iv, collector$iv);
                            return result.element;
                        }
                        return result.element;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ReduceKt$firstOrNull$3 = new FlowKt__ReduceKt$firstOrNull$3(continuation);
        flowKt__ReduceKt$firstOrNull$32 = flowKt__ReduceKt$firstOrNull$3;
        Object $result2 = flowKt__ReduceKt$firstOrNull$32.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$firstOrNull$32.label) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object last(Flow<? extends T> flow, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$last$1 flowKt__ReduceKt$last$1;
        FlowKt__ReduceKt$last$1 flowKt__ReduceKt$last$12;
        Ref.ObjectRef objectRef;
        if (continuation instanceof FlowKt__ReduceKt$last$1) {
            flowKt__ReduceKt$last$1 = (FlowKt__ReduceKt$last$1) continuation;
            if ((flowKt__ReduceKt$last$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$last$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$last$12 = flowKt__ReduceKt$last$1;
                Object obj = flowKt__ReduceKt$last$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$last$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj);
                        final Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
                        objectRef2.element = (T) NullSurrogateKt.NULL;
                        FlowCollector<? super Object> flowCollector = new FlowCollector() { // from class: kotlinx.coroutines.flow.FlowKt__ReduceKt$last$2
                            @Override // kotlinx.coroutines.flow.FlowCollector
                            public final Object emit(T t, Continuation<? super Unit> continuation2) {
                                objectRef2.element = t;
                                return Unit.INSTANCE;
                            }
                        };
                        flowKt__ReduceKt$last$12.L$0 = objectRef2;
                        flowKt__ReduceKt$last$12.label = 1;
                        if (flow.collect(flowCollector, flowKt__ReduceKt$last$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        objectRef = objectRef2;
                        break;
                    case 1:
                        objectRef = (Ref.ObjectRef) flowKt__ReduceKt$last$12.L$0;
                        ResultKt.throwOnFailure(obj);
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                if (objectRef.element != NullSurrogateKt.NULL) {
                    throw new NoSuchElementException("Expected at least one element");
                }
                return objectRef.element;
            }
        }
        flowKt__ReduceKt$last$1 = new FlowKt__ReduceKt$last$1(continuation);
        flowKt__ReduceKt$last$12 = flowKt__ReduceKt$last$1;
        Object obj2 = flowKt__ReduceKt$last$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$last$12.label) {
        }
        if (objectRef.element != NullSurrogateKt.NULL) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object lastOrNull(Flow<? extends T> flow, Continuation<? super T> continuation) {
        FlowKt__ReduceKt$lastOrNull$1 flowKt__ReduceKt$lastOrNull$1;
        FlowKt__ReduceKt$lastOrNull$1 flowKt__ReduceKt$lastOrNull$12;
        Ref.ObjectRef result;
        if (continuation instanceof FlowKt__ReduceKt$lastOrNull$1) {
            flowKt__ReduceKt$lastOrNull$1 = (FlowKt__ReduceKt$lastOrNull$1) continuation;
            if ((flowKt__ReduceKt$lastOrNull$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ReduceKt$lastOrNull$1.label -= Integer.MIN_VALUE;
                flowKt__ReduceKt$lastOrNull$12 = flowKt__ReduceKt$lastOrNull$1;
                Object $result = flowKt__ReduceKt$lastOrNull$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ReduceKt$lastOrNull$12.label) {
                    case 0:
                        ResultKt.throwOnFailure($result);
                        final Ref.ObjectRef result2 = new Ref.ObjectRef();
                        FlowCollector<? super Object> flowCollector = new FlowCollector() { // from class: kotlinx.coroutines.flow.FlowKt__ReduceKt$lastOrNull$2
                            @Override // kotlinx.coroutines.flow.FlowCollector
                            public final Object emit(T t, Continuation<? super Unit> continuation2) {
                                result2.element = t;
                                return Unit.INSTANCE;
                            }
                        };
                        flowKt__ReduceKt$lastOrNull$12.L$0 = result2;
                        flowKt__ReduceKt$lastOrNull$12.label = 1;
                        if (flow.collect(flowCollector, flowKt__ReduceKt$lastOrNull$12) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        result = result2;
                        break;
                    case 1:
                        result = (Ref.ObjectRef) flowKt__ReduceKt$lastOrNull$12.L$0;
                        ResultKt.throwOnFailure($result);
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                return result.element;
            }
        }
        flowKt__ReduceKt$lastOrNull$1 = new FlowKt__ReduceKt$lastOrNull$1(continuation);
        flowKt__ReduceKt$lastOrNull$12 = flowKt__ReduceKt$lastOrNull$1;
        Object $result2 = flowKt__ReduceKt$lastOrNull$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ReduceKt$lastOrNull$12.label) {
        }
        return result.element;
    }
}
