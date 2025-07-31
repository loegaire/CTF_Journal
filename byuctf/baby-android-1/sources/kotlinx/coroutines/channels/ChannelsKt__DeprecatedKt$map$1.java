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

/* JADX INFO: Add missing generic type declarations: [R] */
/* compiled from: Deprecated.kt */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u0003*\b\u0012\u0004\u0012\u0002H\u00030\u0004H\u008a@"}, d2 = {"<anonymous>", "", "E", "R", "Lkotlinx/coroutines/channels/ProducerScope;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlinx.coroutines.channels.ChannelsKt__DeprecatedKt$map$1", f = "Deprecated.kt", i = {0, 0, 1, 1, 2, 2}, l = {487, 333, 333}, m = "invokeSuspend", n = {"$this$produce", "$this$consume$iv$iv", "$this$produce", "$this$consume$iv$iv", "$this$produce", "$this$consume$iv$iv"}, s = {"L$0", "L$2", "L$0", "L$2", "L$0", "L$2"})
/* loaded from: classes.dex */
final class ChannelsKt__DeprecatedKt$map$1<R> extends SuspendLambda implements Function2<ProducerScope<? super R>, Continuation<? super Unit>, Object> {
    final /* synthetic */ ReceiveChannel<E> $this_map;
    final /* synthetic */ Function2<E, Continuation<? super R>, Object> $transform;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    ChannelsKt__DeprecatedKt$map$1(ReceiveChannel<? extends E> receiveChannel, Function2<? super E, ? super Continuation<? super R>, ? extends Object> function2, Continuation<? super ChannelsKt__DeprecatedKt$map$1> continuation) {
        super(2, continuation);
        this.$this_map = receiveChannel;
        this.$transform = function2;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        ChannelsKt__DeprecatedKt$map$1 channelsKt__DeprecatedKt$map$1 = new ChannelsKt__DeprecatedKt$map$1(this.$this_map, this.$transform, continuation);
        channelsKt__DeprecatedKt$map$1.L$0 = obj;
        return channelsKt__DeprecatedKt$map$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ProducerScope<? super R> producerScope, Continuation<? super Unit> continuation) {
        return ((ChannelsKt__DeprecatedKt$map$1) create(producerScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x00b6 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00b7  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00c6 A[Catch: all -> 0x0110, TryCatch #0 {all -> 0x0110, blocks: (B:16:0x00be, B:18:0x00c6, B:22:0x00e4, B:26:0x0105), top: B:15:0x00be }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00f8 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00f9  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0105 A[Catch: all -> 0x0110, TRY_LEAVE, TryCatch #0 {all -> 0x0110, blocks: (B:16:0x00be, B:18:0x00c6, B:22:0x00e4, B:26:0x0105), top: B:15:0x00be }] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:25:0x00f9 -> B:10:0x0102). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        ReceiveChannel $this$consume$iv$iv;
        ChannelsKt__DeprecatedKt$map$1 channelsKt__DeprecatedKt$map$1;
        Object $result;
        ProducerScope $this$produce;
        int $i$f$consumeEach;
        Throwable cause$iv$iv;
        ChannelIterator it;
        Function2 function2;
        Object $result2;
        Object $result3;
        Function2 function22;
        ProducerScope $this$produce2;
        ReceiveChannel $this$consume$iv$iv2;
        Throwable cause$iv$iv2;
        Object $result4;
        ChannelIterator channelIterator;
        Function2 function23;
        ProducerScope $this$produce3;
        ProducerScope $this$produce4;
        int $i$f$consumeEach2;
        Function2 function24;
        Object hasNext;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        try {
            switch (this.label) {
                case 0:
                    ResultKt.throwOnFailure(obj);
                    channelsKt__DeprecatedKt$map$1 = this;
                    $result = obj;
                    $this$produce = (ProducerScope) channelsKt__DeprecatedKt$map$1.L$0;
                    ReceiveChannel $this$consumeEach$iv = channelsKt__DeprecatedKt$map$1.$this_map;
                    Function2 function25 = channelsKt__DeprecatedKt$map$1.$transform;
                    $i$f$consumeEach = 0;
                    $this$consume$iv$iv = $this$consumeEach$iv;
                    cause$iv$iv = null;
                    try {
                        it = $this$consume$iv$iv.iterator();
                        function2 = function25;
                        channelsKt__DeprecatedKt$map$1.L$0 = $this$produce;
                        channelsKt__DeprecatedKt$map$1.L$1 = function2;
                        channelsKt__DeprecatedKt$map$1.L$2 = $this$consume$iv$iv;
                        channelsKt__DeprecatedKt$map$1.L$3 = it;
                        channelsKt__DeprecatedKt$map$1.label = 1;
                        hasNext = it.hasNext(channelsKt__DeprecatedKt$map$1);
                        if (hasNext == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        ProducerScope producerScope = $this$produce;
                        $result3 = $result;
                        $result2 = hasNext;
                        $this$consume$iv$iv2 = $this$consume$iv$iv;
                        cause$iv$iv2 = cause$iv$iv;
                        function22 = function2;
                        $this$produce2 = producerScope;
                        try {
                            if (((Boolean) $result2).booleanValue()) {
                                Unit unit = Unit.INSTANCE;
                                ChannelsKt.cancelConsumed($this$consume$iv$iv2, cause$iv$iv2);
                                return Unit.INSTANCE;
                            }
                            Object it2 = it.next();
                            $this$produce4 = null;
                            channelsKt__DeprecatedKt$map$1.L$0 = $this$produce2;
                            channelsKt__DeprecatedKt$map$1.L$1 = function22;
                            channelsKt__DeprecatedKt$map$1.L$2 = $this$consume$iv$iv2;
                            channelsKt__DeprecatedKt$map$1.L$3 = it;
                            channelsKt__DeprecatedKt$map$1.L$4 = $this$produce2;
                            channelsKt__DeprecatedKt$map$1.label = 2;
                            Object invoke = function22.invoke(it2, channelsKt__DeprecatedKt$map$1);
                            if (invoke == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            $result4 = invoke;
                            $this$produce3 = $this$produce2;
                            ChannelIterator channelIterator2 = it;
                            function23 = function22;
                            channelIterator = channelIterator2;
                            channelsKt__DeprecatedKt$map$1.L$0 = $this$produce3;
                            channelsKt__DeprecatedKt$map$1.L$1 = function23;
                            channelsKt__DeprecatedKt$map$1.L$2 = $this$consume$iv$iv2;
                            channelsKt__DeprecatedKt$map$1.L$3 = channelIterator;
                            channelsKt__DeprecatedKt$map$1.L$4 = null;
                            channelsKt__DeprecatedKt$map$1.label = 3;
                            if ($this$produce2.send($result4, channelsKt__DeprecatedKt$map$1) != coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            $result = $result3;
                            $i$f$consumeEach2 = $i$f$consumeEach;
                            $this$produce = $this$produce3;
                            Function2 function26 = function23;
                            it = channelIterator;
                            cause$iv$iv = cause$iv$iv2;
                            $this$consume$iv$iv = $this$consume$iv$iv2;
                            function24 = function26;
                            $i$f$consumeEach = $i$f$consumeEach2;
                            function2 = function24;
                            channelsKt__DeprecatedKt$map$1.L$0 = $this$produce;
                            channelsKt__DeprecatedKt$map$1.L$1 = function2;
                            channelsKt__DeprecatedKt$map$1.L$2 = $this$consume$iv$iv;
                            channelsKt__DeprecatedKt$map$1.L$3 = it;
                            channelsKt__DeprecatedKt$map$1.label = 1;
                            hasNext = it.hasNext(channelsKt__DeprecatedKt$map$1);
                            if (hasNext == coroutine_suspended) {
                            }
                        } catch (Throwable th) {
                            e$iv$iv = th;
                            $this$consume$iv$iv = $this$consume$iv$iv2;
                            Throwable cause$iv$iv3 = e$iv$iv;
                            try {
                                throw e$iv$iv;
                            } catch (Throwable e$iv$iv) {
                                ChannelsKt.cancelConsumed($this$consume$iv$iv, cause$iv$iv3);
                                throw e$iv$iv;
                            }
                        }
                    } catch (Throwable th2) {
                        e$iv$iv = th2;
                        Throwable cause$iv$iv32 = e$iv$iv;
                        throw e$iv$iv;
                    }
                case 1:
                    channelsKt__DeprecatedKt$map$1 = this;
                    $result2 = obj;
                    ChannelIterator channelIterator3 = (ChannelIterator) channelsKt__DeprecatedKt$map$1.L$3;
                    ReceiveChannel $this$consume$iv$iv3 = (ReceiveChannel) channelsKt__DeprecatedKt$map$1.L$2;
                    Function2 function27 = (Function2) channelsKt__DeprecatedKt$map$1.L$1;
                    ProducerScope $this$produce5 = (ProducerScope) channelsKt__DeprecatedKt$map$1.L$0;
                    ResultKt.throwOnFailure($result2);
                    it = channelIterator3;
                    $i$f$consumeEach = 0;
                    $result3 = $result2;
                    function22 = function27;
                    $this$produce2 = $this$produce5;
                    $this$consume$iv$iv2 = $this$consume$iv$iv3;
                    cause$iv$iv2 = null;
                    if (((Boolean) $result2).booleanValue()) {
                    }
                    break;
                case 2:
                    channelsKt__DeprecatedKt$map$1 = this;
                    $result4 = obj;
                    $this$produce2 = (ProducerScope) channelsKt__DeprecatedKt$map$1.L$4;
                    channelIterator = (ChannelIterator) channelsKt__DeprecatedKt$map$1.L$3;
                    cause$iv$iv2 = null;
                    $this$consume$iv$iv2 = (ReceiveChannel) channelsKt__DeprecatedKt$map$1.L$2;
                    function23 = (Function2) channelsKt__DeprecatedKt$map$1.L$1;
                    ProducerScope $this$produce6 = (ProducerScope) channelsKt__DeprecatedKt$map$1.L$0;
                    try {
                        ResultKt.throwOnFailure($result4);
                        $this$produce3 = $this$produce6;
                        $this$produce4 = null;
                        $i$f$consumeEach = 0;
                        $result3 = $result4;
                        channelsKt__DeprecatedKt$map$1.L$0 = $this$produce3;
                        channelsKt__DeprecatedKt$map$1.L$1 = function23;
                        channelsKt__DeprecatedKt$map$1.L$2 = $this$consume$iv$iv2;
                        channelsKt__DeprecatedKt$map$1.L$3 = channelIterator;
                        channelsKt__DeprecatedKt$map$1.L$4 = null;
                        channelsKt__DeprecatedKt$map$1.label = 3;
                        if ($this$produce2.send($result4, channelsKt__DeprecatedKt$map$1) != coroutine_suspended) {
                        }
                    } catch (Throwable th3) {
                        e$iv$iv = th3;
                        $this$consume$iv$iv = $this$consume$iv$iv2;
                        Throwable cause$iv$iv322 = e$iv$iv;
                        throw e$iv$iv;
                    }
                    break;
                case 3:
                    channelsKt__DeprecatedKt$map$1 = this;
                    $result = obj;
                    ChannelIterator channelIterator4 = (ChannelIterator) channelsKt__DeprecatedKt$map$1.L$3;
                    cause$iv$iv = null;
                    $this$consume$iv$iv = (ReceiveChannel) channelsKt__DeprecatedKt$map$1.L$2;
                    function24 = (Function2) channelsKt__DeprecatedKt$map$1.L$1;
                    ProducerScope $this$produce7 = (ProducerScope) channelsKt__DeprecatedKt$map$1.L$0;
                    ResultKt.throwOnFailure($result);
                    $i$f$consumeEach2 = 0;
                    $this$produce = $this$produce7;
                    it = channelIterator4;
                    $i$f$consumeEach = $i$f$consumeEach2;
                    function2 = function24;
                    channelsKt__DeprecatedKt$map$1.L$0 = $this$produce;
                    channelsKt__DeprecatedKt$map$1.L$1 = function2;
                    channelsKt__DeprecatedKt$map$1.L$2 = $this$consume$iv$iv;
                    channelsKt__DeprecatedKt$map$1.L$3 = it;
                    channelsKt__DeprecatedKt$map$1.label = 1;
                    hasNext = it.hasNext(channelsKt__DeprecatedKt$map$1);
                    if (hasNext == coroutine_suspended) {
                    }
                    break;
                default:
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
        } catch (Throwable th4) {
            e$iv$iv = th4;
        }
    }
}
