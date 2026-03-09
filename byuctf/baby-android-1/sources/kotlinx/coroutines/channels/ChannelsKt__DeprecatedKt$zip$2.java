package kotlinx.coroutines.channels;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;

/* JADX INFO: Add missing generic type declarations: [V] */
/* compiled from: Deprecated.kt */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u0003\"\u0004\b\u0002\u0010\u0004*\b\u0012\u0004\u0012\u0002H\u00040\u0005H\u008a@"}, d2 = {"<anonymous>", "", "E", "R", "V", "Lkotlinx/coroutines/channels/ProducerScope;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlinx.coroutines.channels.ChannelsKt__DeprecatedKt$zip$2", f = "Deprecated.kt", i = {0, 0, 0, 1, 1, 1, 1, 2, 2, 2}, l = {487, 469, 471}, m = "invokeSuspend", n = {"$this$produce", "otherIterator", "$this$consume$iv$iv", "$this$produce", "otherIterator", "$this$consume$iv$iv", "element1", "$this$produce", "otherIterator", "$this$consume$iv$iv"}, s = {"L$0", "L$1", "L$3", "L$0", "L$1", "L$3", "L$5", "L$0", "L$1", "L$3"})
/* loaded from: classes.dex */
final class ChannelsKt__DeprecatedKt$zip$2<V> extends SuspendLambda implements Function2<ProducerScope<? super V>, Continuation<? super Unit>, Object> {
    final /* synthetic */ ReceiveChannel<R> $other;
    final /* synthetic */ ReceiveChannel<E> $this_zip;
    final /* synthetic */ Function2<E, R, V> $transform;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    Object L$5;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    ChannelsKt__DeprecatedKt$zip$2(ReceiveChannel<? extends R> receiveChannel, ReceiveChannel<? extends E> receiveChannel2, Function2<? super E, ? super R, ? extends V> function2, Continuation<? super ChannelsKt__DeprecatedKt$zip$2> continuation) {
        super(2, continuation);
        this.$other = receiveChannel;
        this.$this_zip = receiveChannel2;
        this.$transform = function2;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        ChannelsKt__DeprecatedKt$zip$2 channelsKt__DeprecatedKt$zip$2 = new ChannelsKt__DeprecatedKt$zip$2(this.$other, this.$this_zip, this.$transform, continuation);
        channelsKt__DeprecatedKt$zip$2.L$0 = obj;
        return channelsKt__DeprecatedKt$zip$2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ProducerScope<? super V> producerScope, Continuation<? super Unit> continuation) {
        return ((ChannelsKt__DeprecatedKt$zip$2) create(producerScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x00d7 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00ee A[Catch: all -> 0x017d, TRY_LEAVE, TryCatch #7 {all -> 0x017d, blocks: (B:16:0x00e6, B:18:0x00ee, B:51:0x0173), top: B:15:0x00e6 }] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x015e  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0173 A[Catch: all -> 0x017d, TRY_ENTER, TRY_LEAVE, TryCatch #7 {all -> 0x017d, blocks: (B:16:0x00e6, B:18:0x00ee, B:51:0x0173), top: B:15:0x00e6 }] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:33:0x013c -> B:10:0x0145). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:47:0x015e -> B:11:0x00c2). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        ReceiveChannel $this$consume$iv$iv;
        ChannelsKt__DeprecatedKt$zip$2 channelsKt__DeprecatedKt$zip$2;
        Object $result;
        Throwable cause$iv$iv;
        ChannelIterator otherIterator;
        ChannelIterator otherIterator2;
        int $i$f$consume;
        ProducerScope $this$produce;
        Object $result2;
        Function2 function2;
        ChannelIterator it;
        Object $result3;
        ProducerScope $this$produce2;
        ChannelIterator otherIterator3;
        ReceiveChannel $this$consume$iv$iv2;
        Throwable cause$iv$iv2;
        Function2 function22;
        ChannelIterator channelIterator;
        int i;
        ChannelIterator channelIterator2;
        Object obj2;
        Object $result4;
        Object element1;
        Function2 function23;
        int i2;
        ProducerScope $this$produce3;
        ChannelIterator otherIterator4;
        ReceiveChannel $this$consume$iv$iv3;
        Object element12;
        ChannelIterator otherIterator5;
        Object hasNext;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        Object obj3 = null;
        try {
            switch (this.label) {
                case 0:
                    ResultKt.throwOnFailure(obj);
                    channelsKt__DeprecatedKt$zip$2 = this;
                    $result = obj;
                    ProducerScope $this$produce4 = (ProducerScope) channelsKt__DeprecatedKt$zip$2.L$0;
                    ChannelIterator otherIterator6 = channelsKt__DeprecatedKt$zip$2.$other.iterator();
                    ReceiveChannel $this$consumeEach$iv = channelsKt__DeprecatedKt$zip$2.$this_zip;
                    $this$consume$iv$iv = $this$consumeEach$iv;
                    cause$iv$iv = null;
                    try {
                        otherIterator = otherIterator6;
                        otherIterator2 = null;
                        $i$f$consume = 0;
                        $this$produce = $this$produce4;
                        $result2 = null;
                        function2 = channelsKt__DeprecatedKt$zip$2.$transform;
                        it = $this$consume$iv$iv.iterator();
                        channelsKt__DeprecatedKt$zip$2.L$0 = $this$produce;
                        channelsKt__DeprecatedKt$zip$2.L$1 = otherIterator;
                        channelsKt__DeprecatedKt$zip$2.L$2 = function2;
                        channelsKt__DeprecatedKt$zip$2.L$3 = $this$consume$iv$iv;
                        channelsKt__DeprecatedKt$zip$2.L$4 = it;
                        channelsKt__DeprecatedKt$zip$2.L$5 = obj3;
                        channelsKt__DeprecatedKt$zip$2.label = 1;
                        hasNext = it.hasNext(channelsKt__DeprecatedKt$zip$2);
                        if (hasNext != coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        Object obj4 = $result2;
                        $result4 = $result;
                        $result3 = hasNext;
                        $this$produce2 = $this$produce;
                        otherIterator3 = otherIterator;
                        $this$consume$iv$iv2 = $this$consume$iv$iv;
                        cause$iv$iv2 = cause$iv$iv;
                        function22 = function2;
                        channelIterator = it;
                        i = $i$f$consume;
                        channelIterator2 = otherIterator2;
                        obj2 = obj4;
                        try {
                            if (((Boolean) $result3).booleanValue()) {
                                Unit unit = Unit.INSTANCE;
                                ChannelsKt.cancelConsumed($this$consume$iv$iv2, cause$iv$iv2);
                                return Unit.INSTANCE;
                            }
                            Object element13 = channelIterator.next();
                            i2 = 0;
                            channelsKt__DeprecatedKt$zip$2.L$0 = $this$produce2;
                            channelsKt__DeprecatedKt$zip$2.L$1 = otherIterator3;
                            channelsKt__DeprecatedKt$zip$2.L$2 = function22;
                            channelsKt__DeprecatedKt$zip$2.L$3 = $this$consume$iv$iv2;
                            channelsKt__DeprecatedKt$zip$2.L$4 = channelIterator;
                            channelsKt__DeprecatedKt$zip$2.L$5 = element13;
                            channelsKt__DeprecatedKt$zip$2.label = 2;
                            Object hasNext2 = otherIterator3.hasNext(channelsKt__DeprecatedKt$zip$2);
                            if (hasNext2 == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            Function2 function24 = function22;
                            element12 = element13;
                            element1 = hasNext2;
                            $this$produce3 = $this$produce2;
                            otherIterator4 = otherIterator3;
                            $this$consume$iv$iv3 = $this$consume$iv$iv2;
                            function23 = function24;
                            try {
                                if (((Boolean) element1).booleanValue()) {
                                    cause$iv$iv = cause$iv$iv2;
                                    $result = $result4;
                                    $result2 = obj2;
                                    otherIterator2 = channelIterator2;
                                    $i$f$consume = i;
                                    it = channelIterator;
                                    function2 = function23;
                                    $this$consume$iv$iv = $this$consume$iv$iv3;
                                    otherIterator = otherIterator4;
                                    $this$produce = $this$produce3;
                                    obj3 = null;
                                    channelsKt__DeprecatedKt$zip$2.L$0 = $this$produce;
                                    channelsKt__DeprecatedKt$zip$2.L$1 = otherIterator;
                                    channelsKt__DeprecatedKt$zip$2.L$2 = function2;
                                    channelsKt__DeprecatedKt$zip$2.L$3 = $this$consume$iv$iv;
                                    channelsKt__DeprecatedKt$zip$2.L$4 = it;
                                    channelsKt__DeprecatedKt$zip$2.L$5 = obj3;
                                    channelsKt__DeprecatedKt$zip$2.label = 1;
                                    hasNext = it.hasNext(channelsKt__DeprecatedKt$zip$2);
                                    if (hasNext != coroutine_suspended) {
                                    }
                                } else {
                                    try {
                                        Throwable cause$iv$iv3 = cause$iv$iv2;
                                        try {
                                            Object element2 = otherIterator4.next();
                                            Object invoke = function23.invoke(element12, element2);
                                            channelsKt__DeprecatedKt$zip$2.L$0 = $this$produce3;
                                            channelsKt__DeprecatedKt$zip$2.L$1 = otherIterator4;
                                            channelsKt__DeprecatedKt$zip$2.L$2 = function23;
                                            channelsKt__DeprecatedKt$zip$2.L$3 = $this$consume$iv$iv3;
                                            channelsKt__DeprecatedKt$zip$2.L$4 = channelIterator;
                                            channelsKt__DeprecatedKt$zip$2.L$5 = null;
                                            channelsKt__DeprecatedKt$zip$2.label = 3;
                                            if ($this$produce3.send(invoke, channelsKt__DeprecatedKt$zip$2) == coroutine_suspended) {
                                                return coroutine_suspended;
                                            }
                                            cause$iv$iv = cause$iv$iv3;
                                            $result = $result4;
                                            $result2 = obj2;
                                            otherIterator2 = channelIterator2;
                                            $i$f$consume = i;
                                            $this$consume$iv$iv = $this$consume$iv$iv3;
                                            otherIterator5 = otherIterator4;
                                            it = channelIterator;
                                            function2 = function23;
                                            otherIterator = otherIterator5;
                                            $this$produce = $this$produce3;
                                            obj3 = null;
                                            channelsKt__DeprecatedKt$zip$2.L$0 = $this$produce;
                                            channelsKt__DeprecatedKt$zip$2.L$1 = otherIterator;
                                            channelsKt__DeprecatedKt$zip$2.L$2 = function2;
                                            channelsKt__DeprecatedKt$zip$2.L$3 = $this$consume$iv$iv;
                                            channelsKt__DeprecatedKt$zip$2.L$4 = it;
                                            channelsKt__DeprecatedKt$zip$2.L$5 = obj3;
                                            channelsKt__DeprecatedKt$zip$2.label = 1;
                                            hasNext = it.hasNext(channelsKt__DeprecatedKt$zip$2);
                                            if (hasNext != coroutine_suspended) {
                                            }
                                        } catch (Throwable th) {
                                            e$iv$iv = th;
                                            $this$consume$iv$iv = $this$consume$iv$iv3;
                                        }
                                    } catch (Throwable th2) {
                                        e$iv$iv = th2;
                                        $this$consume$iv$iv = $this$consume$iv$iv3;
                                        Throwable cause$iv$iv4 = e$iv$iv;
                                        try {
                                            throw e$iv$iv;
                                        } catch (Throwable e$iv$iv) {
                                            ChannelsKt.cancelConsumed($this$consume$iv$iv, cause$iv$iv4);
                                            throw e$iv$iv;
                                        }
                                    }
                                }
                            } catch (Throwable th3) {
                                e$iv$iv = th3;
                                $this$consume$iv$iv = $this$consume$iv$iv3;
                            }
                        } catch (Throwable th4) {
                            e$iv$iv = th4;
                            $this$consume$iv$iv = $this$consume$iv$iv2;
                            Throwable cause$iv$iv42 = e$iv$iv;
                            throw e$iv$iv;
                        }
                    } catch (Throwable th5) {
                        e$iv$iv = th5;
                        Throwable cause$iv$iv422 = e$iv$iv;
                        throw e$iv$iv;
                    }
                case 1:
                    channelsKt__DeprecatedKt$zip$2 = this;
                    $result3 = obj;
                    ChannelIterator channelIterator3 = (ChannelIterator) channelsKt__DeprecatedKt$zip$2.L$4;
                    ReceiveChannel $this$consume$iv$iv4 = (ReceiveChannel) channelsKt__DeprecatedKt$zip$2.L$3;
                    Function2 function25 = (Function2) channelsKt__DeprecatedKt$zip$2.L$2;
                    ChannelIterator otherIterator7 = (ChannelIterator) channelsKt__DeprecatedKt$zip$2.L$1;
                    ProducerScope $this$produce5 = (ProducerScope) channelsKt__DeprecatedKt$zip$2.L$0;
                    ResultKt.throwOnFailure($result3);
                    $this$produce2 = $this$produce5;
                    otherIterator3 = otherIterator7;
                    $this$consume$iv$iv2 = $this$consume$iv$iv4;
                    cause$iv$iv2 = null;
                    function22 = function25;
                    channelIterator = channelIterator3;
                    i = 0;
                    channelIterator2 = null;
                    obj2 = null;
                    $result4 = $result3;
                    if (((Boolean) $result3).booleanValue()) {
                    }
                    break;
                case 2:
                    channelsKt__DeprecatedKt$zip$2 = this;
                    element1 = obj;
                    Object element14 = channelsKt__DeprecatedKt$zip$2.L$5;
                    ChannelIterator channelIterator4 = (ChannelIterator) channelsKt__DeprecatedKt$zip$2.L$4;
                    $this$consume$iv$iv = (ReceiveChannel) channelsKt__DeprecatedKt$zip$2.L$3;
                    function23 = (Function2) channelsKt__DeprecatedKt$zip$2.L$2;
                    ChannelIterator otherIterator8 = (ChannelIterator) channelsKt__DeprecatedKt$zip$2.L$1;
                    ProducerScope $this$produce6 = (ProducerScope) channelsKt__DeprecatedKt$zip$2.L$0;
                    try {
                        ResultKt.throwOnFailure(element1);
                        i2 = 0;
                        $this$produce3 = $this$produce6;
                        i = 0;
                        otherIterator4 = otherIterator8;
                        channelIterator2 = null;
                        $this$consume$iv$iv3 = $this$consume$iv$iv;
                        cause$iv$iv2 = null;
                        obj2 = null;
                        $result4 = element1;
                        element12 = element14;
                        channelIterator = channelIterator4;
                        if (((Boolean) element1).booleanValue()) {
                        }
                    } catch (Throwable th6) {
                        e$iv$iv = th6;
                        Throwable cause$iv$iv4222 = e$iv$iv;
                        throw e$iv$iv;
                    }
                    break;
                case 3:
                    channelsKt__DeprecatedKt$zip$2 = this;
                    $result = obj;
                    $result2 = null;
                    otherIterator2 = null;
                    $i$f$consume = 0;
                    channelIterator = (ChannelIterator) channelsKt__DeprecatedKt$zip$2.L$4;
                    cause$iv$iv = null;
                    $this$consume$iv$iv = (ReceiveChannel) channelsKt__DeprecatedKt$zip$2.L$3;
                    function23 = (Function2) channelsKt__DeprecatedKt$zip$2.L$2;
                    otherIterator5 = (ChannelIterator) channelsKt__DeprecatedKt$zip$2.L$1;
                    ProducerScope $this$produce7 = (ProducerScope) channelsKt__DeprecatedKt$zip$2.L$0;
                    ResultKt.throwOnFailure($result);
                    $this$produce3 = $this$produce7;
                    it = channelIterator;
                    function2 = function23;
                    otherIterator = otherIterator5;
                    $this$produce = $this$produce3;
                    obj3 = null;
                    channelsKt__DeprecatedKt$zip$2.L$0 = $this$produce;
                    channelsKt__DeprecatedKt$zip$2.L$1 = otherIterator;
                    channelsKt__DeprecatedKt$zip$2.L$2 = function2;
                    channelsKt__DeprecatedKt$zip$2.L$3 = $this$consume$iv$iv;
                    channelsKt__DeprecatedKt$zip$2.L$4 = it;
                    channelsKt__DeprecatedKt$zip$2.L$5 = obj3;
                    channelsKt__DeprecatedKt$zip$2.label = 1;
                    hasNext = it.hasNext(channelsKt__DeprecatedKt$zip$2);
                    if (hasNext != coroutine_suspended) {
                    }
                    break;
                default:
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
        } catch (Throwable th7) {
            e$iv$iv = th7;
        }
    }
}
