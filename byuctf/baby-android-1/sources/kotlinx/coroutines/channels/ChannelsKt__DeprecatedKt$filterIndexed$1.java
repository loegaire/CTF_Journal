package kotlinx.coroutines.channels;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;

/* JADX INFO: Add missing generic type declarations: [E] */
/* compiled from: Deprecated.kt */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u008a@"}, d2 = {"<anonymous>", "", "E", "Lkotlinx/coroutines/channels/ProducerScope;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlinx.coroutines.channels.ChannelsKt__DeprecatedKt$filterIndexed$1", f = "Deprecated.kt", i = {0, 0, 1, 1, 1, 2, 2}, l = {211, 212, 212}, m = "invokeSuspend", n = {"$this$produce", "index", "$this$produce", "e", "index", "$this$produce", "index"}, s = {"L$0", "I$0", "L$0", "L$2", "I$0", "L$0", "I$0"})
/* loaded from: classes.dex */
final class ChannelsKt__DeprecatedKt$filterIndexed$1<E> extends SuspendLambda implements Function2<ProducerScope<? super E>, Continuation<? super Unit>, Object> {
    final /* synthetic */ Function3<Integer, E, Continuation<? super Boolean>, Object> $predicate;
    final /* synthetic */ ReceiveChannel<E> $this_filterIndexed;
    int I$0;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    ChannelsKt__DeprecatedKt$filterIndexed$1(ReceiveChannel<? extends E> receiveChannel, Function3<? super Integer, ? super E, ? super Continuation<? super Boolean>, ? extends Object> function3, Continuation<? super ChannelsKt__DeprecatedKt$filterIndexed$1> continuation) {
        super(2, continuation);
        this.$this_filterIndexed = receiveChannel;
        this.$predicate = function3;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        ChannelsKt__DeprecatedKt$filterIndexed$1 channelsKt__DeprecatedKt$filterIndexed$1 = new ChannelsKt__DeprecatedKt$filterIndexed$1(this.$this_filterIndexed, this.$predicate, continuation);
        channelsKt__DeprecatedKt$filterIndexed$1.L$0 = obj;
        return channelsKt__DeprecatedKt$filterIndexed$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ProducerScope<? super E> producerScope, Continuation<? super Unit> continuation) {
        return ((ChannelsKt__DeprecatedKt$filterIndexed$1) create(producerScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:10:0x0075  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0085  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x00ae  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00ca  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0074 A[RETURN] */
    /* JADX WARN: Type inference failed for: r6v10 */
    /* JADX WARN: Type inference failed for: r6v3, types: [java.lang.Object, kotlinx.coroutines.channels.ProducerScope] */
    /* JADX WARN: Type inference failed for: r6v9 */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x00c3 -> B:7:0x0060). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:23:0x00ca -> B:7:0x0060). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        ChannelsKt__DeprecatedKt$filterIndexed$1<E> channelsKt__DeprecatedKt$filterIndexed$1;
        ProducerScope producerScope;
        int i;
        ChannelIterator<E> it;
        ProducerScope producerScope2;
        ChannelIterator<E> channelIterator;
        int i2;
        ChannelsKt__DeprecatedKt$filterIndexed$1<E> channelsKt__DeprecatedKt$filterIndexed$12;
        Object obj2;
        Object obj3;
        Object obj4;
        int i3;
        ?? r6;
        Object hasNext;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (this.label) {
            case 0:
                ResultKt.throwOnFailure(obj);
                channelsKt__DeprecatedKt$filterIndexed$1 = this;
                producerScope = (ProducerScope) channelsKt__DeprecatedKt$filterIndexed$1.L$0;
                i = 0;
                it = channelsKt__DeprecatedKt$filterIndexed$1.$this_filterIndexed.iterator();
                channelsKt__DeprecatedKt$filterIndexed$1.L$0 = producerScope;
                channelsKt__DeprecatedKt$filterIndexed$1.L$1 = it;
                channelsKt__DeprecatedKt$filterIndexed$1.L$2 = null;
                channelsKt__DeprecatedKt$filterIndexed$1.I$0 = i;
                channelsKt__DeprecatedKt$filterIndexed$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$filterIndexed$1);
                if (hasNext != coroutine_suspended) {
                    return coroutine_suspended;
                }
                Object obj5 = coroutine_suspended;
                obj3 = obj;
                obj = hasNext;
                producerScope2 = producerScope;
                channelIterator = it;
                i2 = i;
                channelsKt__DeprecatedKt$filterIndexed$12 = channelsKt__DeprecatedKt$filterIndexed$1;
                obj2 = obj5;
                if (((Boolean) obj).booleanValue()) {
                    return Unit.INSTANCE;
                }
                E next = channelIterator.next();
                Function3<Integer, E, Continuation<? super Boolean>, Object> function3 = channelsKt__DeprecatedKt$filterIndexed$12.$predicate;
                i3 = i2 + 1;
                Integer boxInt = Boxing.boxInt(i2);
                channelsKt__DeprecatedKt$filterIndexed$12.L$0 = producerScope2;
                channelsKt__DeprecatedKt$filterIndexed$12.L$1 = channelIterator;
                channelsKt__DeprecatedKt$filterIndexed$12.L$2 = next;
                channelsKt__DeprecatedKt$filterIndexed$12.I$0 = i3;
                channelsKt__DeprecatedKt$filterIndexed$12.label = 2;
                Object invoke = function3.invoke(boxInt, next, channelsKt__DeprecatedKt$filterIndexed$12);
                if (invoke == obj2) {
                    return obj2;
                }
                obj4 = next;
                obj = invoke;
                r6 = producerScope2;
                if (((Boolean) obj).booleanValue()) {
                    obj = obj3;
                    coroutine_suspended = obj2;
                    channelsKt__DeprecatedKt$filterIndexed$1 = channelsKt__DeprecatedKt$filterIndexed$12;
                    it = channelIterator;
                    producerScope = r6;
                    i = i3;
                } else {
                    channelsKt__DeprecatedKt$filterIndexed$12.L$0 = r6;
                    channelsKt__DeprecatedKt$filterIndexed$12.L$1 = channelIterator;
                    channelsKt__DeprecatedKt$filterIndexed$12.L$2 = null;
                    channelsKt__DeprecatedKt$filterIndexed$12.I$0 = i3;
                    channelsKt__DeprecatedKt$filterIndexed$12.label = 3;
                    if (r6.send(obj4, channelsKt__DeprecatedKt$filterIndexed$12) == obj2) {
                        return obj2;
                    }
                    obj = obj3;
                    coroutine_suspended = obj2;
                    channelsKt__DeprecatedKt$filterIndexed$1 = channelsKt__DeprecatedKt$filterIndexed$12;
                    it = channelIterator;
                    producerScope = r6;
                    i = i3;
                }
                channelsKt__DeprecatedKt$filterIndexed$1.L$0 = producerScope;
                channelsKt__DeprecatedKt$filterIndexed$1.L$1 = it;
                channelsKt__DeprecatedKt$filterIndexed$1.L$2 = null;
                channelsKt__DeprecatedKt$filterIndexed$1.I$0 = i;
                channelsKt__DeprecatedKt$filterIndexed$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$filterIndexed$1);
                if (hasNext != coroutine_suspended) {
                }
            case 1:
                int i4 = this.I$0;
                ChannelIterator<E> channelIterator2 = (ChannelIterator) this.L$1;
                ProducerScope producerScope3 = (ProducerScope) this.L$0;
                ResultKt.throwOnFailure(obj);
                producerScope2 = producerScope3;
                channelIterator = channelIterator2;
                i2 = i4;
                channelsKt__DeprecatedKt$filterIndexed$12 = this;
                obj2 = coroutine_suspended;
                obj3 = obj;
                if (((Boolean) obj).booleanValue()) {
                }
                break;
            case 2:
                int i5 = this.I$0;
                obj4 = this.L$2;
                channelIterator = (ChannelIterator) this.L$1;
                ProducerScope producerScope4 = (ProducerScope) this.L$0;
                ResultKt.throwOnFailure(obj);
                i3 = i5;
                channelsKt__DeprecatedKt$filterIndexed$12 = this;
                obj2 = coroutine_suspended;
                obj3 = obj;
                r6 = producerScope4;
                if (((Boolean) obj).booleanValue()) {
                }
                channelsKt__DeprecatedKt$filterIndexed$1.L$0 = producerScope;
                channelsKt__DeprecatedKt$filterIndexed$1.L$1 = it;
                channelsKt__DeprecatedKt$filterIndexed$1.L$2 = null;
                channelsKt__DeprecatedKt$filterIndexed$1.I$0 = i;
                channelsKt__DeprecatedKt$filterIndexed$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$filterIndexed$1);
                if (hasNext != coroutine_suspended) {
                }
                break;
            case 3:
                channelsKt__DeprecatedKt$filterIndexed$1 = this;
                i = channelsKt__DeprecatedKt$filterIndexed$1.I$0;
                it = (ChannelIterator) channelsKt__DeprecatedKt$filterIndexed$1.L$1;
                producerScope = (ProducerScope) channelsKt__DeprecatedKt$filterIndexed$1.L$0;
                ResultKt.throwOnFailure(obj);
                channelsKt__DeprecatedKt$filterIndexed$1.L$0 = producerScope;
                channelsKt__DeprecatedKt$filterIndexed$1.L$1 = it;
                channelsKt__DeprecatedKt$filterIndexed$1.L$2 = null;
                channelsKt__DeprecatedKt$filterIndexed$1.I$0 = i;
                channelsKt__DeprecatedKt$filterIndexed$1.label = 1;
                hasNext = it.hasNext(channelsKt__DeprecatedKt$filterIndexed$1);
                if (hasNext != coroutine_suspended) {
                }
                break;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }
}
