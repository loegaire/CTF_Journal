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

/* JADX INFO: Add missing generic type declarations: [E] */
/* compiled from: Deprecated.kt */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u008a@"}, d2 = {"<anonymous>", "", "E", "Lkotlinx/coroutines/channels/ProducerScope;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlinx.coroutines.channels.ChannelsKt__DeprecatedKt$take$1", f = "Deprecated.kt", i = {0, 0, 1, 1}, l = {254, 255}, m = "invokeSuspend", n = {"$this$produce", "remaining", "$this$produce", "remaining"}, s = {"L$0", "I$0", "L$0", "I$0"})
/* loaded from: classes.dex */
final class ChannelsKt__DeprecatedKt$take$1<E> extends SuspendLambda implements Function2<ProducerScope<? super E>, Continuation<? super Unit>, Object> {
    final /* synthetic */ int $n;
    final /* synthetic */ ReceiveChannel<E> $this_take;
    int I$0;
    private /* synthetic */ Object L$0;
    Object L$1;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    ChannelsKt__DeprecatedKt$take$1(int i, ReceiveChannel<? extends E> receiveChannel, Continuation<? super ChannelsKt__DeprecatedKt$take$1> continuation) {
        super(2, continuation);
        this.$n = i;
        this.$this_take = receiveChannel;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        ChannelsKt__DeprecatedKt$take$1 channelsKt__DeprecatedKt$take$1 = new ChannelsKt__DeprecatedKt$take$1(this.$n, this.$this_take, continuation);
        channelsKt__DeprecatedKt$take$1.L$0 = obj;
        return channelsKt__DeprecatedKt$take$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ProducerScope<? super E> producerScope, Continuation<? super Unit> continuation) {
        return ((ChannelsKt__DeprecatedKt$take$1) create(producerScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0066 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0075  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x009e  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0096  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:21:0x008c -> B:7:0x0092). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object $result) {
        ChannelsKt__DeprecatedKt$take$1 channelsKt__DeprecatedKt$take$1;
        int remaining;
        ChannelIterator<E> it;
        ProducerScope $this$produce;
        ChannelsKt__DeprecatedKt$take$1 channelsKt__DeprecatedKt$take$12;
        Object obj;
        Object $result2;
        int remaining2;
        ChannelIterator<E> channelIterator;
        ProducerScope $this$produce2;
        int remaining3;
        Object $result3 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (this.label) {
            case 0:
                ResultKt.throwOnFailure($result);
                channelsKt__DeprecatedKt$take$1 = this;
                ProducerScope $this$produce3 = (ProducerScope) channelsKt__DeprecatedKt$take$1.L$0;
                int i = channelsKt__DeprecatedKt$take$1.$n;
                if (i == 0) {
                    return Unit.INSTANCE;
                }
                if (!(i >= 0)) {
                    throw new IllegalArgumentException(("Requested element count " + i + " is less than zero.").toString());
                }
                remaining = channelsKt__DeprecatedKt$take$1.$n;
                it = channelsKt__DeprecatedKt$take$1.$this_take.iterator();
                channelsKt__DeprecatedKt$take$1.L$0 = $this$produce3;
                channelsKt__DeprecatedKt$take$1.L$1 = it;
                channelsKt__DeprecatedKt$take$1.I$0 = remaining;
                channelsKt__DeprecatedKt$take$1.label = 1;
                Object hasNext = it.hasNext(channelsKt__DeprecatedKt$take$1);
                if (hasNext != $result3) {
                    return $result3;
                }
                Object obj2 = $result3;
                $result2 = $result;
                $result = hasNext;
                $this$produce = $this$produce3;
                channelsKt__DeprecatedKt$take$12 = channelsKt__DeprecatedKt$take$1;
                obj = obj2;
                if (((Boolean) $result).booleanValue()) {
                    return Unit.INSTANCE;
                }
                channelsKt__DeprecatedKt$take$12.L$0 = $this$produce;
                channelsKt__DeprecatedKt$take$12.L$1 = it;
                channelsKt__DeprecatedKt$take$12.I$0 = remaining;
                channelsKt__DeprecatedKt$take$12.label = 2;
                Object e = $this$produce.send(it.next(), channelsKt__DeprecatedKt$take$12);
                if (e == obj) {
                    return obj;
                }
                $result = $result2;
                $result3 = obj;
                channelsKt__DeprecatedKt$take$1 = channelsKt__DeprecatedKt$take$12;
                remaining2 = remaining;
                channelIterator = it;
                $this$produce2 = $this$produce;
                remaining3 = remaining2 - 1;
                if (remaining3 != 0) {
                    return Unit.INSTANCE;
                }
                ChannelIterator<E> channelIterator2 = channelIterator;
                remaining = remaining3;
                $this$produce3 = $this$produce2;
                it = channelIterator2;
                channelsKt__DeprecatedKt$take$1.L$0 = $this$produce3;
                channelsKt__DeprecatedKt$take$1.L$1 = it;
                channelsKt__DeprecatedKt$take$1.I$0 = remaining;
                channelsKt__DeprecatedKt$take$1.label = 1;
                Object hasNext2 = it.hasNext(channelsKt__DeprecatedKt$take$1);
                if (hasNext2 != $result3) {
                }
            case 1:
                int remaining4 = this.I$0;
                ChannelIterator<E> channelIterator3 = (ChannelIterator) this.L$1;
                ProducerScope $this$produce4 = (ProducerScope) this.L$0;
                ResultKt.throwOnFailure($result);
                $this$produce = $this$produce4;
                it = channelIterator3;
                remaining = remaining4;
                channelsKt__DeprecatedKt$take$12 = this;
                obj = $result3;
                $result2 = $result;
                if (((Boolean) $result).booleanValue()) {
                }
                break;
            case 2:
                channelsKt__DeprecatedKt$take$1 = this;
                remaining2 = channelsKt__DeprecatedKt$take$1.I$0;
                channelIterator = (ChannelIterator) channelsKt__DeprecatedKt$take$1.L$1;
                $this$produce2 = (ProducerScope) channelsKt__DeprecatedKt$take$1.L$0;
                ResultKt.throwOnFailure($result);
                remaining3 = remaining2 - 1;
                if (remaining3 != 0) {
                }
                break;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }
}
