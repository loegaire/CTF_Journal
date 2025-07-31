package kotlinx.coroutines.flow;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.flow.internal.SafeCollector;

/* compiled from: Share.kt */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\b\b\u0000\u0018\u0000*\u0004\b\u0000\u0010\u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002BE\u0012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002\u0012-\u0010\u0004\u001a)\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u0002\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070\u0006\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005¢\u0006\u0002\b\tø\u0001\u0000¢\u0006\u0002\u0010\nJ\u0019\u0010\f\u001a\u00020\u00072\u0006\u0010\r\u001a\u00028\u0000H\u0096Aø\u0001\u0000¢\u0006\u0002\u0010\u000eJ\u0011\u0010\u000f\u001a\u00020\u0007H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0010R:\u0010\u0004\u001a)\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u0002\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070\u0006\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0005¢\u0006\u0002\b\tX\u0082\u0004ø\u0001\u0000¢\u0006\u0004\n\u0002\u0010\u000bR\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002X\u0082\u0004¢\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0011"}, d2 = {"Lkotlinx/coroutines/flow/SubscribedFlowCollector;", "T", "Lkotlinx/coroutines/flow/FlowCollector;", "collector", "action", "Lkotlin/Function2;", "Lkotlin/coroutines/Continuation;", "", "", "Lkotlin/ExtensionFunctionType;", "(Lkotlinx/coroutines/flow/FlowCollector;Lkotlin/jvm/functions/Function2;)V", "Lkotlin/jvm/functions/Function2;", "emit", "value", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onSubscription", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "kotlinx-coroutines-core"}, k = 1, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
/* loaded from: classes.dex */
public final class SubscribedFlowCollector<T> implements FlowCollector<T> {
    private final Function2<FlowCollector<? super T>, Continuation<? super Unit>, Object> action;
    private final FlowCollector<T> collector;

    @Override // kotlinx.coroutines.flow.FlowCollector
    public Object emit(T t, Continuation<? super Unit> continuation) {
        return this.collector.emit(t, continuation);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public SubscribedFlowCollector(FlowCollector<? super T> flowCollector, Function2<? super FlowCollector<? super T>, ? super Continuation<? super Unit>, ? extends Object> function2) {
        this.collector = flowCollector;
        this.action = function2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:12:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0031  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x003d  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0025  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object onSubscription(Continuation<? super Unit> continuation) {
        SubscribedFlowCollector$onSubscription$1 subscribedFlowCollector$onSubscription$1;
        FlowCollector<T> flowCollector;
        SubscribedFlowCollector<T> subscribedFlowCollector;
        SafeCollector safeCollector;
        try {
            if (continuation instanceof SubscribedFlowCollector$onSubscription$1) {
                subscribedFlowCollector$onSubscription$1 = (SubscribedFlowCollector$onSubscription$1) continuation;
                if ((subscribedFlowCollector$onSubscription$1.label & Integer.MIN_VALUE) != 0) {
                    subscribedFlowCollector$onSubscription$1.label -= Integer.MIN_VALUE;
                    SubscribedFlowCollector$onSubscription$1 subscribedFlowCollector$onSubscription$12 = subscribedFlowCollector$onSubscription$1;
                    Object obj = subscribedFlowCollector$onSubscription$12.result;
                    Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                    flowCollector = (FlowCollector<T>) subscribedFlowCollector$onSubscription$12.label;
                    switch (flowCollector) {
                        case null:
                            ResultKt.throwOnFailure(obj);
                            subscribedFlowCollector = this;
                            safeCollector = new SafeCollector(subscribedFlowCollector.collector, subscribedFlowCollector$onSubscription$12.getContext());
                            Function2<FlowCollector<? super T>, Continuation<? super Unit>, Object> function2 = subscribedFlowCollector.action;
                            subscribedFlowCollector$onSubscription$12.L$0 = subscribedFlowCollector;
                            subscribedFlowCollector$onSubscription$12.L$1 = safeCollector;
                            subscribedFlowCollector$onSubscription$12.label = 1;
                            if (function2.invoke(safeCollector, subscribedFlowCollector$onSubscription$12) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            safeCollector.releaseIntercepted();
                            flowCollector = subscribedFlowCollector.collector;
                            if (flowCollector instanceof SubscribedFlowCollector) {
                                subscribedFlowCollector$onSubscription$12.L$0 = null;
                                subscribedFlowCollector$onSubscription$12.L$1 = null;
                                subscribedFlowCollector$onSubscription$12.label = 2;
                                if (((SubscribedFlowCollector) flowCollector).onSubscription(subscribedFlowCollector$onSubscription$12) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                            }
                            return Unit.INSTANCE;
                        case 1:
                            safeCollector = (SafeCollector) subscribedFlowCollector$onSubscription$12.L$1;
                            subscribedFlowCollector = (SubscribedFlowCollector) subscribedFlowCollector$onSubscription$12.L$0;
                            ResultKt.throwOnFailure(obj);
                            safeCollector.releaseIntercepted();
                            flowCollector = subscribedFlowCollector.collector;
                            if (flowCollector instanceof SubscribedFlowCollector) {
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
            switch (flowCollector) {
            }
        } catch (Throwable th) {
            flowCollector.releaseIntercepted();
            throw th;
        }
        subscribedFlowCollector$onSubscription$1 = new SubscribedFlowCollector$onSubscription$1(this, continuation);
        SubscribedFlowCollector$onSubscription$1 subscribedFlowCollector$onSubscription$122 = subscribedFlowCollector$onSubscription$1;
        Object obj2 = subscribedFlowCollector$onSubscription$122.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        flowCollector = (FlowCollector<T>) subscribedFlowCollector$onSubscription$122.label;
    }
}
