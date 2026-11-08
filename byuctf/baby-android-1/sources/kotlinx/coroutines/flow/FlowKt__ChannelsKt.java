package kotlinx.coroutines.flow;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Deprecated;
import kotlin.DeprecationLevel;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.channels.BroadcastChannel;
import kotlinx.coroutines.channels.ChannelResult;
import kotlinx.coroutines.channels.ChannelsKt;
import kotlinx.coroutines.channels.ReceiveChannel;
import kotlinx.coroutines.flow.internal.ChannelFlowKt;

/* compiled from: Channels.kt */
@Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u001e\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u0007\u001a\u001c\u0010\u0004\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0005\u001a/\u0010\u0006\u001a\u00020\u0007\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0005H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\n\u001a9\u0010\u000b\u001a\u00020\u0007\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u0002H\u00020\u00052\u0006\u0010\f\u001a\u00020\rH\u0082@ø\u0001\u0000¢\u0006\u0004\b\u000e\u0010\u000f\u001a&\u0010\u0010\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0005\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0011\u001a\u00020\u0012H\u0007\u001a\u001c\u0010\u0013\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0005\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0014"}, d2 = {"asFlow", "Lkotlinx/coroutines/flow/Flow;", "T", "Lkotlinx/coroutines/channels/BroadcastChannel;", "consumeAsFlow", "Lkotlinx/coroutines/channels/ReceiveChannel;", "emitAll", "", "Lkotlinx/coroutines/flow/FlowCollector;", "channel", "(Lkotlinx/coroutines/flow/FlowCollector;Lkotlinx/coroutines/channels/ReceiveChannel;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "emitAllImpl", "consume", "", "emitAllImpl$FlowKt__ChannelsKt", "(Lkotlinx/coroutines/flow/FlowCollector;Lkotlinx/coroutines/channels/ReceiveChannel;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "produceIn", "scope", "Lkotlinx/coroutines/CoroutineScope;", "receiveAsFlow", "kotlinx-coroutines-core"}, k = 5, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE, xs = "kotlinx/coroutines/flow/FlowKt")
/* loaded from: classes.dex */
final /* synthetic */ class FlowKt__ChannelsKt {
    public static final <T> Object emitAll(FlowCollector<? super T> flowCollector, ReceiveChannel<? extends T> receiveChannel, Continuation<? super Unit> continuation) {
        Object emitAllImpl$FlowKt__ChannelsKt = emitAllImpl$FlowKt__ChannelsKt(flowCollector, receiveChannel, true, continuation);
        return emitAllImpl$FlowKt__ChannelsKt == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? emitAllImpl$FlowKt__ChannelsKt : Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0084 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0085  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0097 A[Catch: all -> 0x00c7, TRY_LEAVE, TryCatch #2 {all -> 0x00c7, blocks: (B:23:0x0091, B:25:0x0097, B:32:0x00a9, B:34:0x00aa), top: B:22:0x0091 }] */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00aa A[Catch: all -> 0x00c7, TRY_LEAVE, TryCatch #2 {all -> 0x00c7, blocks: (B:23:0x0091, B:25:0x0097, B:32:0x00a9, B:34:0x00aa), top: B:22:0x0091 }] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0047  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0065  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /* JADX WARN: Type inference failed for: r2v12 */
    /* JADX WARN: Type inference failed for: r2v5, types: [java.lang.Object, kotlinx.coroutines.flow.FlowCollector] */
    /* JADX WARN: Type inference failed for: r2v8 */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:37:0x00be -> B:15:0x0072). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <T> Object emitAllImpl$FlowKt__ChannelsKt(FlowCollector<? super T> flowCollector, ReceiveChannel<? extends T> receiveChannel, boolean z, Continuation<? super Unit> continuation) {
        FlowKt__ChannelsKt$emitAllImpl$1 flowKt__ChannelsKt$emitAllImpl$1;
        FlowKt__ChannelsKt$emitAllImpl$1 flowKt__ChannelsKt$emitAllImpl$12;
        ReceiveChannel receiveChannel2;
        Throwable th;
        Object obj;
        Object obj2;
        FlowKt__ChannelsKt$emitAllImpl$1 flowKt__ChannelsKt$emitAllImpl$13;
        boolean z2;
        ReceiveChannel receiveChannel3;
        Throwable th2;
        boolean z3;
        Object holder;
        ?? r2;
        Throwable th3;
        Object obj3;
        if (continuation instanceof FlowKt__ChannelsKt$emitAllImpl$1) {
            flowKt__ChannelsKt$emitAllImpl$1 = (FlowKt__ChannelsKt$emitAllImpl$1) continuation;
            if ((flowKt__ChannelsKt$emitAllImpl$1.label & Integer.MIN_VALUE) != 0) {
                flowKt__ChannelsKt$emitAllImpl$1.label -= Integer.MIN_VALUE;
                flowKt__ChannelsKt$emitAllImpl$12 = flowKt__ChannelsKt$emitAllImpl$1;
                Object obj4 = flowKt__ChannelsKt$emitAllImpl$12.result;
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (flowKt__ChannelsKt$emitAllImpl$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(obj4);
                        FlowKt.ensureActive(flowCollector);
                        receiveChannel2 = receiveChannel;
                        th = null;
                        obj = coroutine_suspended;
                        obj2 = obj4;
                        flowKt__ChannelsKt$emitAllImpl$13 = flowKt__ChannelsKt$emitAllImpl$12;
                        try {
                            flowKt__ChannelsKt$emitAllImpl$13.L$0 = flowCollector;
                            flowKt__ChannelsKt$emitAllImpl$13.L$1 = receiveChannel2;
                            flowKt__ChannelsKt$emitAllImpl$13.Z$0 = z;
                            flowKt__ChannelsKt$emitAllImpl$13.label = 1;
                            holder = receiveChannel2.mo1667receiveCatchingJP2dKIU(flowKt__ChannelsKt$emitAllImpl$13);
                            if (holder == obj) {
                                return obj;
                            }
                            try {
                                Object obj5 = obj;
                                r2 = flowCollector;
                                th2 = th;
                                z2 = z;
                                receiveChannel3 = receiveChannel2;
                                flowKt__ChannelsKt$emitAllImpl$12 = flowKt__ChannelsKt$emitAllImpl$13;
                                obj4 = obj2;
                                coroutine_suspended = obj5;
                                if (!ChannelResult.m1682isClosedimpl(obj3)) {
                                    Throwable m1678exceptionOrNullimpl = ChannelResult.m1678exceptionOrNullimpl(obj3);
                                    if (m1678exceptionOrNullimpl == null) {
                                        return Unit.INSTANCE;
                                    }
                                    throw m1678exceptionOrNullimpl;
                                }
                                Object m1680getOrThrowimpl = ChannelResult.m1680getOrThrowimpl(obj3);
                                flowKt__ChannelsKt$emitAllImpl$12.L$0 = r2;
                                flowKt__ChannelsKt$emitAllImpl$12.L$1 = receiveChannel3;
                                flowKt__ChannelsKt$emitAllImpl$12.Z$0 = z2;
                                flowKt__ChannelsKt$emitAllImpl$12.label = 2;
                                if (r2.emit(m1680getOrThrowimpl, flowKt__ChannelsKt$emitAllImpl$12) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                boolean z4 = z2;
                                th = th3;
                                flowCollector = r2;
                                obj = coroutine_suspended;
                                obj2 = obj4;
                                flowKt__ChannelsKt$emitAllImpl$13 = flowKt__ChannelsKt$emitAllImpl$12;
                                receiveChannel2 = receiveChannel3;
                                z = z4;
                                flowKt__ChannelsKt$emitAllImpl$13.L$0 = flowCollector;
                                flowKt__ChannelsKt$emitAllImpl$13.L$1 = receiveChannel2;
                                flowKt__ChannelsKt$emitAllImpl$13.Z$0 = z;
                                flowKt__ChannelsKt$emitAllImpl$13.label = 1;
                                holder = receiveChannel2.mo1667receiveCatchingJP2dKIU(flowKt__ChannelsKt$emitAllImpl$13);
                                if (holder == obj) {
                                }
                            } catch (Throwable th4) {
                                th = th4;
                                z3 = z2;
                                Throwable th5 = th;
                                try {
                                    throw th;
                                } finally {
                                    if (z3) {
                                        ChannelsKt.cancelConsumed(receiveChannel3, th5);
                                    }
                                }
                            }
                            th3 = th2;
                            obj3 = holder;
                        } catch (Throwable th6) {
                            th = th6;
                            z3 = z;
                            receiveChannel3 = receiveChannel2;
                            Throwable th52 = th;
                            throw th;
                        }
                    case 1:
                        z2 = flowKt__ChannelsKt$emitAllImpl$12.Z$0;
                        receiveChannel3 = (ReceiveChannel) flowKt__ChannelsKt$emitAllImpl$12.L$1;
                        FlowCollector flowCollector2 = (FlowCollector) flowKt__ChannelsKt$emitAllImpl$12.L$0;
                        th2 = null;
                        try {
                            ResultKt.throwOnFailure(obj4);
                            holder = ((ChannelResult) obj4).getHolder();
                            r2 = flowCollector2;
                            th3 = th2;
                            obj3 = holder;
                            if (!ChannelResult.m1682isClosedimpl(obj3)) {
                            }
                        } catch (Throwable th7) {
                            th = th7;
                            z3 = z2;
                            Throwable th522 = th;
                            throw th;
                        }
                        break;
                    case 2:
                        z3 = flowKt__ChannelsKt$emitAllImpl$12.Z$0;
                        th = null;
                        receiveChannel3 = (ReceiveChannel) flowKt__ChannelsKt$emitAllImpl$12.L$1;
                        FlowCollector<? super T> flowCollector3 = (FlowCollector) flowKt__ChannelsKt$emitAllImpl$12.L$0;
                        try {
                            ResultKt.throwOnFailure(obj4);
                            z = z3;
                            flowCollector = flowCollector3;
                            obj = coroutine_suspended;
                            obj2 = obj4;
                            flowKt__ChannelsKt$emitAllImpl$13 = flowKt__ChannelsKt$emitAllImpl$12;
                            receiveChannel2 = receiveChannel3;
                            flowKt__ChannelsKt$emitAllImpl$13.L$0 = flowCollector;
                            flowKt__ChannelsKt$emitAllImpl$13.L$1 = receiveChannel2;
                            flowKt__ChannelsKt$emitAllImpl$13.Z$0 = z;
                            flowKt__ChannelsKt$emitAllImpl$13.label = 1;
                            holder = receiveChannel2.mo1667receiveCatchingJP2dKIU(flowKt__ChannelsKt$emitAllImpl$13);
                            if (holder == obj) {
                            }
                        } catch (Throwable th8) {
                            th = th8;
                            Throwable th5222 = th;
                            throw th;
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        flowKt__ChannelsKt$emitAllImpl$1 = new FlowKt__ChannelsKt$emitAllImpl$1(continuation);
        flowKt__ChannelsKt$emitAllImpl$12 = flowKt__ChannelsKt$emitAllImpl$1;
        Object obj42 = flowKt__ChannelsKt$emitAllImpl$12.result;
        Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (flowKt__ChannelsKt$emitAllImpl$12.label) {
        }
    }

    public static final <T> Flow<T> receiveAsFlow(ReceiveChannel<? extends T> receiveChannel) {
        return new ChannelAsFlow(receiveChannel, false, null, 0, null, 28, null);
    }

    public static final <T> Flow<T> consumeAsFlow(ReceiveChannel<? extends T> receiveChannel) {
        return new ChannelAsFlow(receiveChannel, true, null, 0, null, 28, null);
    }

    @Deprecated(level = DeprecationLevel.WARNING, message = "'BroadcastChannel' is obsolete and all corresponding operators are deprecated in the favour of StateFlow and SharedFlow")
    public static final <T> Flow<T> asFlow(final BroadcastChannel<T> broadcastChannel) {
        return new Flow<T>() { // from class: kotlinx.coroutines.flow.FlowKt__ChannelsKt$asFlow$$inlined$unsafeFlow$1
            @Override // kotlinx.coroutines.flow.Flow
            public Object collect(FlowCollector<? super T> flowCollector, Continuation<? super Unit> continuation) {
                Object emitAll = FlowKt.emitAll(flowCollector, BroadcastChannel.this.openSubscription(), continuation);
                return emitAll == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? emitAll : Unit.INSTANCE;
            }
        };
    }

    public static final <T> ReceiveChannel<T> produceIn(Flow<? extends T> flow, CoroutineScope scope) {
        return ChannelFlowKt.asChannelFlow(flow).produceImpl(scope);
    }
}
