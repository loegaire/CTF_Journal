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
@DebugMetadata(c = "kotlinx.coroutines.channels.ChannelsKt__DeprecatedKt$flatMap$1", f = "Deprecated.kt", i = {0, 1, 2}, l = {321, 322, 322}, m = "invokeSuspend", n = {"$this$produce", "$this$produce", "$this$produce"}, s = {"L$0", "L$0", "L$0"})
/* loaded from: classes.dex */
final class ChannelsKt__DeprecatedKt$flatMap$1<R> extends SuspendLambda implements Function2<ProducerScope<? super R>, Continuation<? super Unit>, Object> {
    final /* synthetic */ ReceiveChannel<E> $this_flatMap;
    final /* synthetic */ Function2<E, Continuation<? super ReceiveChannel<? extends R>>, Object> $transform;
    private /* synthetic */ Object L$0;
    Object L$1;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    ChannelsKt__DeprecatedKt$flatMap$1(ReceiveChannel<? extends E> receiveChannel, Function2<? super E, ? super Continuation<? super ReceiveChannel<? extends R>>, ? extends Object> function2, Continuation<? super ChannelsKt__DeprecatedKt$flatMap$1> continuation) {
        super(2, continuation);
        this.$this_flatMap = receiveChannel;
        this.$transform = function2;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        ChannelsKt__DeprecatedKt$flatMap$1 channelsKt__DeprecatedKt$flatMap$1 = new ChannelsKt__DeprecatedKt$flatMap$1(this.$this_flatMap, this.$transform, continuation);
        channelsKt__DeprecatedKt$flatMap$1.L$0 = obj;
        return channelsKt__DeprecatedKt$flatMap$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ProducerScope<? super R> producerScope, Continuation<? super Unit> continuation) {
        return ((ChannelsKt__DeprecatedKt$flatMap$1) create(producerScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0075  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x009e A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x00a5  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0065 A[RETURN] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:19:0x009f -> B:7:0x0055). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object $result) {
        ChannelsKt__DeprecatedKt$flatMap$1 channelsKt__DeprecatedKt$flatMap$1;
        ProducerScope $this$produce;
        ChannelIterator it;
        ProducerScope $this$produce2;
        ChannelIterator channelIterator;
        ChannelsKt__DeprecatedKt$flatMap$1 channelsKt__DeprecatedKt$flatMap$12;
        Object obj;
        Object $result2;
        Object hasNext;
        Object $result3 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (this.label) {
            case 0:
                ResultKt.throwOnFailure($result);
                channelsKt__DeprecatedKt$flatMap$1 = this;
                ProducerScope $this$produce3 = (ProducerScope) channelsKt__DeprecatedKt$flatMap$1.L$0;
                $this$produce = $this$produce3;
                it = channelsKt__DeprecatedKt$flatMap$1.$this_flatMap.iterator();
                channelsKt__DeprecatedKt$flatMap$1.L$0 = $this$produce;
                channelsKt__DeprecatedKt$flatMap$1.L$1 = it;
                channelsKt__DeprecatedKt$flatMap$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$flatMap$1);
                if (hasNext == $result3) {
                    return $result3;
                }
                Object obj2 = $result3;
                $result2 = $result;
                $result = hasNext;
                $this$produce2 = $this$produce;
                channelIterator = it;
                channelsKt__DeprecatedKt$flatMap$12 = channelsKt__DeprecatedKt$flatMap$1;
                obj = obj2;
                if (((Boolean) $result).booleanValue()) {
                    return Unit.INSTANCE;
                }
                Object e = channelIterator.next();
                Function2<E, Continuation<? super ReceiveChannel<? extends R>>, Object> function2 = channelsKt__DeprecatedKt$flatMap$12.$transform;
                channelsKt__DeprecatedKt$flatMap$12.L$0 = $this$produce2;
                channelsKt__DeprecatedKt$flatMap$12.L$1 = channelIterator;
                channelsKt__DeprecatedKt$flatMap$12.label = 2;
                $result = function2.invoke(e, channelsKt__DeprecatedKt$flatMap$12);
                if ($result == obj) {
                    return obj;
                }
                channelsKt__DeprecatedKt$flatMap$12.L$0 = $this$produce2;
                channelsKt__DeprecatedKt$flatMap$12.L$1 = channelIterator;
                channelsKt__DeprecatedKt$flatMap$12.label = 3;
                if (ChannelsKt.toChannel((ReceiveChannel) $result, $this$produce2, channelsKt__DeprecatedKt$flatMap$12) != obj) {
                    return obj;
                }
                $result = $result2;
                $result3 = obj;
                channelsKt__DeprecatedKt$flatMap$1 = channelsKt__DeprecatedKt$flatMap$12;
                it = channelIterator;
                $this$produce = $this$produce2;
                channelsKt__DeprecatedKt$flatMap$1.L$0 = $this$produce;
                channelsKt__DeprecatedKt$flatMap$1.L$1 = it;
                channelsKt__DeprecatedKt$flatMap$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$flatMap$1);
                if (hasNext == $result3) {
                }
            case 1:
                ChannelIterator channelIterator2 = (ChannelIterator) this.L$1;
                ProducerScope $this$produce4 = (ProducerScope) this.L$0;
                ResultKt.throwOnFailure($result);
                $this$produce2 = $this$produce4;
                channelIterator = channelIterator2;
                channelsKt__DeprecatedKt$flatMap$12 = this;
                obj = $result3;
                $result2 = $result;
                if (((Boolean) $result).booleanValue()) {
                }
                break;
            case 2:
                ChannelIterator channelIterator3 = (ChannelIterator) this.L$1;
                ProducerScope $this$produce5 = (ProducerScope) this.L$0;
                ResultKt.throwOnFailure($result);
                $this$produce2 = $this$produce5;
                channelIterator = channelIterator3;
                channelsKt__DeprecatedKt$flatMap$12 = this;
                obj = $result3;
                $result2 = $result;
                channelsKt__DeprecatedKt$flatMap$12.L$0 = $this$produce2;
                channelsKt__DeprecatedKt$flatMap$12.L$1 = channelIterator;
                channelsKt__DeprecatedKt$flatMap$12.label = 3;
                if (ChannelsKt.toChannel((ReceiveChannel) $result, $this$produce2, channelsKt__DeprecatedKt$flatMap$12) != obj) {
                }
                break;
            case 3:
                channelsKt__DeprecatedKt$flatMap$1 = this;
                it = (ChannelIterator) channelsKt__DeprecatedKt$flatMap$1.L$1;
                $this$produce = (ProducerScope) channelsKt__DeprecatedKt$flatMap$1.L$0;
                ResultKt.throwOnFailure($result);
                channelsKt__DeprecatedKt$flatMap$1.L$0 = $this$produce;
                channelsKt__DeprecatedKt$flatMap$1.L$1 = it;
                channelsKt__DeprecatedKt$flatMap$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$flatMap$1);
                if (hasNext == $result3) {
                }
                break;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }
}
