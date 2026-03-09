package kotlinx.coroutines.channels;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.List;
import java.util.concurrent.CancellationException;
import kotlin.Deprecated;
import kotlin.DeprecationLevel;
import kotlin.Metadata;
import kotlin.ReplaceWith;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.InlineMarker;
import kotlinx.coroutines.ExceptionsKt;
import kotlinx.coroutines.channels.ReceiveChannel;
import kotlinx.coroutines.selects.SelectClause1;

/* compiled from: Channels.common.kt */
@Metadata(d1 = {"\u0000>\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010 \n\u0000\u001a\u001a\u0010\u0002\u001a\u00020\u0003*\u0006\u0012\u0002\b\u00030\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006H\u0001\u001aC\u0010\u0007\u001a\u0002H\b\"\u0004\b\u0000\u0010\t\"\u0004\b\u0001\u0010\b*\b\u0012\u0004\u0012\u0002H\t0\n2\u001d\u0010\u000b\u001a\u0019\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\t0\u0004\u0012\u0004\u0012\u0002H\b0\f¢\u0006\u0002\b\rH\u0087\b¢\u0006\u0002\u0010\u000e\u001aP\u0010\u0007\u001a\u0002H\b\"\u0004\b\u0000\u0010\t\"\u0004\b\u0001\u0010\b*\b\u0012\u0004\u0012\u0002H\t0\u00042\u001d\u0010\u000b\u001a\u0019\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\t0\u0004\u0012\u0004\u0012\u0002H\b0\f¢\u0006\u0002\b\rH\u0086\b\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0002\u0010\u000f\u001a5\u0010\u0010\u001a\u00020\u0003\"\u0004\b\u0000\u0010\t*\b\u0012\u0004\u0012\u0002H\t0\n2\u0012\u0010\u0011\u001a\u000e\u0012\u0004\u0012\u0002H\t\u0012\u0004\u0012\u00020\u00030\fH\u0087Hø\u0001\u0000¢\u0006\u0002\u0010\u0012\u001a5\u0010\u0010\u001a\u00020\u0003\"\u0004\b\u0000\u0010\t*\b\u0012\u0004\u0012\u0002H\t0\u00042\u0012\u0010\u0011\u001a\u000e\u0012\u0004\u0012\u0002H\t\u0012\u0004\u0012\u00020\u00030\fH\u0086Hø\u0001\u0000¢\u0006\u0002\u0010\u0013\u001a$\u0010\u0014\u001a\n\u0012\u0006\u0012\u0004\u0018\u0001H\t0\u0015\"\b\b\u0000\u0010\t*\u00020\u0016*\b\u0012\u0004\u0012\u0002H\t0\u0004H\u0007\u001a'\u0010\u0017\u001a\u0004\u0018\u0001H\t\"\b\b\u0000\u0010\t*\u00020\u0016*\b\u0012\u0004\u0012\u0002H\t0\u0004H\u0087@ø\u0001\u0000¢\u0006\u0002\u0010\u0018\u001a'\u0010\u0019\u001a\b\u0012\u0004\u0012\u0002H\t0\u001a\"\u0004\b\u0000\u0010\t*\b\u0012\u0004\u0012\u0002H\t0\u0004H\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0018\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0080T¢\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001b"}, d2 = {"DEFAULT_CLOSE_MESSAGE", "", "cancelConsumed", "", "Lkotlinx/coroutines/channels/ReceiveChannel;", "cause", "", "consume", "R", "E", "Lkotlinx/coroutines/channels/BroadcastChannel;", "block", "Lkotlin/Function1;", "Lkotlin/ExtensionFunctionType;", "(Lkotlinx/coroutines/channels/BroadcastChannel;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "(Lkotlinx/coroutines/channels/ReceiveChannel;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "consumeEach", "action", "(Lkotlinx/coroutines/channels/BroadcastChannel;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "(Lkotlinx/coroutines/channels/ReceiveChannel;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onReceiveOrNull", "Lkotlinx/coroutines/selects/SelectClause1;", "", "receiveOrNull", "(Lkotlinx/coroutines/channels/ReceiveChannel;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "toList", "", "kotlinx-coroutines-core"}, k = 5, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE, xs = "kotlinx/coroutines/channels/ChannelsKt")
/* loaded from: classes.dex */
final /* synthetic */ class ChannelsKt__Channels_commonKt {
    public static final <E, R> R consume(BroadcastChannel<E> broadcastChannel, Function1<? super ReceiveChannel<? extends E>, ? extends R> function1) {
        ReceiveChannel channel = broadcastChannel.openSubscription();
        try {
            return function1.invoke(channel);
        } finally {
            InlineMarker.finallyStart(1);
            ReceiveChannel.DefaultImpls.cancel$default(channel, (CancellationException) null, 1, (Object) null);
            InlineMarker.finallyEnd(1);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Deprecated(level = DeprecationLevel.ERROR, message = "Deprecated in the favour of 'receiveCatching'", replaceWith = @ReplaceWith(expression = "receiveCatching().getOrNull()", imports = {}))
    public static final <E> Object receiveOrNull(ReceiveChannel<? extends E> receiveChannel, Continuation<? super E> continuation) {
        return receiveChannel.receiveOrNull(continuation);
    }

    @Deprecated(level = DeprecationLevel.ERROR, message = "Deprecated in the favour of 'onReceiveCatching'")
    public static final <E> SelectClause1<E> onReceiveOrNull(ReceiveChannel<? extends E> receiveChannel) {
        return receiveChannel.getOnReceiveOrNull();
    }

    public static final <E, R> R consume(ReceiveChannel<? extends E> receiveChannel, Function1<? super ReceiveChannel<? extends E>, ? extends R> function1) {
        try {
            R invoke = function1.invoke(receiveChannel);
            InlineMarker.finallyStart(1);
            ChannelsKt.cancelConsumed(receiveChannel, null);
            InlineMarker.finallyEnd(1);
            return invoke;
        } finally {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002e  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0081 A[Catch: all -> 0x00a0, TryCatch #0 {all -> 0x00a0, blocks: (B:16:0x0079, B:18:0x0081, B:24:0x0090), top: B:15:0x0079 }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x006f A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0090 A[Catch: all -> 0x00a0, TRY_LEAVE, TryCatch #0 {all -> 0x00a0, blocks: (B:16:0x0079, B:18:0x0081, B:24:0x0090), top: B:15:0x0079 }] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0026  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x0070 -> B:15:0x0079). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <E> Object consumeEach(ReceiveChannel<? extends E> receiveChannel, Function1<? super E, Unit> function1, Continuation<? super Unit> continuation) {
        ChannelsKt__Channels_commonKt$consumeEach$1 channelsKt__Channels_commonKt$consumeEach$1;
        ChannelsKt__Channels_commonKt$consumeEach$1 channelsKt__Channels_commonKt$consumeEach$12;
        ReceiveChannel $this$consume$iv;
        Object $result;
        Function1 action;
        ReceiveChannel $this$consume$iv2;
        Throwable cause$iv;
        ChannelIterator channelIterator;
        int i;
        Object obj;
        if (continuation instanceof ChannelsKt__Channels_commonKt$consumeEach$1) {
            channelsKt__Channels_commonKt$consumeEach$1 = (ChannelsKt__Channels_commonKt$consumeEach$1) continuation;
            if ((channelsKt__Channels_commonKt$consumeEach$1.label & Integer.MIN_VALUE) != 0) {
                channelsKt__Channels_commonKt$consumeEach$1.label -= Integer.MIN_VALUE;
                channelsKt__Channels_commonKt$consumeEach$12 = channelsKt__Channels_commonKt$consumeEach$1;
                Object e = channelsKt__Channels_commonKt$consumeEach$12.result;
                Object $result2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (channelsKt__Channels_commonKt$consumeEach$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(e);
                        $this$consume$iv = receiveChannel;
                        Throwable cause$iv2 = null;
                        try {
                            ChannelIterator it = $this$consume$iv.iterator();
                            int $i$f$consumeEach = 0;
                            Function1 action2 = function1;
                            channelsKt__Channels_commonKt$consumeEach$12.L$0 = action2;
                            channelsKt__Channels_commonKt$consumeEach$12.L$1 = $this$consume$iv;
                            channelsKt__Channels_commonKt$consumeEach$12.L$2 = it;
                            channelsKt__Channels_commonKt$consumeEach$12.label = 1;
                            Object hasNext = it.hasNext(channelsKt__Channels_commonKt$consumeEach$12);
                            if (hasNext != $result2) {
                                return $result2;
                            }
                            Object obj2 = $result2;
                            $result = e;
                            e = hasNext;
                            action = action2;
                            $this$consume$iv2 = $this$consume$iv;
                            cause$iv = cause$iv2;
                            channelIterator = it;
                            i = $i$f$consumeEach;
                            obj = obj2;
                            try {
                                if (((Boolean) e).booleanValue()) {
                                    Unit unit = Unit.INSTANCE;
                                    InlineMarker.finallyStart(1);
                                    ChannelsKt.cancelConsumed($this$consume$iv2, cause$iv);
                                    InlineMarker.finallyEnd(1);
                                    return Unit.INSTANCE;
                                }
                                action.invoke(channelIterator.next());
                                e = $result;
                                $result2 = obj;
                                $i$f$consumeEach = i;
                                it = channelIterator;
                                cause$iv2 = cause$iv;
                                $this$consume$iv = $this$consume$iv2;
                                action2 = action;
                                channelsKt__Channels_commonKt$consumeEach$12.L$0 = action2;
                                channelsKt__Channels_commonKt$consumeEach$12.L$1 = $this$consume$iv;
                                channelsKt__Channels_commonKt$consumeEach$12.L$2 = it;
                                channelsKt__Channels_commonKt$consumeEach$12.label = 1;
                                Object hasNext2 = it.hasNext(channelsKt__Channels_commonKt$consumeEach$12);
                                if (hasNext2 != $result2) {
                                }
                            } catch (Throwable th) {
                                $this$consume$iv = $this$consume$iv2;
                                e$iv = th;
                                Throwable cause$iv3 = e$iv;
                                try {
                                    throw e$iv;
                                } catch (Throwable e$iv) {
                                    InlineMarker.finallyStart(1);
                                    ChannelsKt.cancelConsumed($this$consume$iv, cause$iv3);
                                    InlineMarker.finallyEnd(1);
                                    throw e$iv;
                                }
                            }
                        } catch (Throwable th2) {
                            e$iv = th2;
                            Throwable cause$iv32 = e$iv;
                            throw e$iv;
                        }
                    case 1:
                        ChannelIterator channelIterator2 = (ChannelIterator) channelsKt__Channels_commonKt$consumeEach$12.L$2;
                        $this$consume$iv = (ReceiveChannel) channelsKt__Channels_commonKt$consumeEach$12.L$1;
                        Function1 action3 = (Function1) channelsKt__Channels_commonKt$consumeEach$12.L$0;
                        try {
                            ResultKt.throwOnFailure(e);
                            action = action3;
                            $this$consume$iv2 = $this$consume$iv;
                            cause$iv = null;
                            channelIterator = channelIterator2;
                            i = 0;
                            obj = $result2;
                            $result = e;
                            if (((Boolean) e).booleanValue()) {
                            }
                        } catch (Throwable th3) {
                            e$iv = th3;
                            Throwable cause$iv322 = e$iv;
                            throw e$iv;
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        channelsKt__Channels_commonKt$consumeEach$1 = new ChannelsKt__Channels_commonKt$consumeEach$1(continuation);
        channelsKt__Channels_commonKt$consumeEach$12 = channelsKt__Channels_commonKt$consumeEach$1;
        Object e2 = channelsKt__Channels_commonKt$consumeEach$12.result;
        Object $result22 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (channelsKt__Channels_commonKt$consumeEach$12.label) {
        }
    }

    private static final <E> Object consumeEach$$forInline(ReceiveChannel<? extends E> receiveChannel, Function1<? super E, Unit> function1, Continuation<? super Unit> continuation) {
        try {
            ChannelIterator<? extends E> it = receiveChannel.iterator();
            while (true) {
                InlineMarker.mark(3);
                InlineMarker.mark(0);
                Object hasNext = it.hasNext(null);
                InlineMarker.mark(1);
                if (!((Boolean) hasNext).booleanValue()) {
                    Unit unit = Unit.INSTANCE;
                    InlineMarker.finallyStart(1);
                    ChannelsKt.cancelConsumed(receiveChannel, null);
                    InlineMarker.finallyEnd(1);
                    return Unit.INSTANCE;
                }
                Object e = it.next();
                function1.invoke(e);
            }
        } finally {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0096 A[Catch: all -> 0x00b8, TryCatch #3 {all -> 0x00b8, blocks: (B:16:0x008e, B:18:0x0096, B:24:0x00aa), top: B:15:0x008e }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0081 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0082  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00aa A[Catch: all -> 0x00b8, TRY_LEAVE, TryCatch #3 {all -> 0x00b8, blocks: (B:16:0x008e, B:18:0x0096, B:24:0x00aa), top: B:15:0x008e }] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0053  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x0082 -> B:15:0x008e). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <E> Object toList(ReceiveChannel<? extends E> receiveChannel, Continuation<? super List<? extends E>> continuation) {
        ChannelsKt__Channels_commonKt$toList$1 channelsKt__Channels_commonKt$toList$1;
        ChannelsKt__Channels_commonKt$toList$1 channelsKt__Channels_commonKt$toList$12;
        ReceiveChannel $this$consume$iv$iv;
        Object $result;
        List list;
        List list2;
        ReceiveChannel $this$consume$iv$iv2;
        Throwable cause$iv$iv;
        ChannelIterator channelIterator;
        int i;
        List list3;
        int $i$f$consume;
        Object obj;
        if (continuation instanceof ChannelsKt__Channels_commonKt$toList$1) {
            channelsKt__Channels_commonKt$toList$1 = (ChannelsKt__Channels_commonKt$toList$1) continuation;
            if ((channelsKt__Channels_commonKt$toList$1.label & Integer.MIN_VALUE) != 0) {
                channelsKt__Channels_commonKt$toList$1.label -= Integer.MIN_VALUE;
                channelsKt__Channels_commonKt$toList$12 = channelsKt__Channels_commonKt$toList$1;
                Object e$iv = channelsKt__Channels_commonKt$toList$12.result;
                Object $result2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (channelsKt__Channels_commonKt$toList$12.label) {
                    case 0:
                        ResultKt.throwOnFailure(e$iv);
                        List $this$toList_u24lambda_u2d3 = CollectionsKt.createListBuilder();
                        $this$consume$iv$iv = receiveChannel;
                        Throwable cause$iv$iv2 = null;
                        try {
                            List $this$toList_u24lambda_u2d32 = $this$toList_u24lambda_u2d3;
                            List $this$toList_u24lambda_u2d33 = null;
                            int $i$f$consume2 = 0;
                            List $this$toList_u24lambda_u2d34 = $this$toList_u24lambda_u2d3;
                            int $i$f$consumeEach = 0;
                            ChannelIterator it = $this$consume$iv$iv.iterator();
                            channelsKt__Channels_commonKt$toList$12.L$0 = $this$toList_u24lambda_u2d34;
                            channelsKt__Channels_commonKt$toList$12.L$1 = $this$toList_u24lambda_u2d32;
                            channelsKt__Channels_commonKt$toList$12.L$2 = $this$consume$iv$iv;
                            channelsKt__Channels_commonKt$toList$12.L$3 = it;
                            channelsKt__Channels_commonKt$toList$12.label = 1;
                            Object hasNext = it.hasNext(channelsKt__Channels_commonKt$toList$12);
                            if (hasNext != $result2) {
                                return $result2;
                            }
                            Object obj2 = $result2;
                            $result = e$iv;
                            e$iv = hasNext;
                            list = $this$toList_u24lambda_u2d34;
                            list2 = $this$toList_u24lambda_u2d32;
                            $this$consume$iv$iv2 = $this$consume$iv$iv;
                            cause$iv$iv = cause$iv$iv2;
                            channelIterator = it;
                            i = $i$f$consume2;
                            list3 = $this$toList_u24lambda_u2d33;
                            $i$f$consume = $i$f$consumeEach;
                            obj = obj2;
                            try {
                                if (((Boolean) e$iv).booleanValue()) {
                                    Unit unit = Unit.INSTANCE;
                                    ChannelsKt.cancelConsumed($this$consume$iv$iv2, cause$iv$iv);
                                    return CollectionsKt.build(list);
                                }
                                list2.add(channelIterator.next());
                                e$iv = $result;
                                $result2 = obj;
                                $i$f$consumeEach = $i$f$consume;
                                $this$toList_u24lambda_u2d33 = list3;
                                $i$f$consume2 = i;
                                it = channelIterator;
                                cause$iv$iv2 = cause$iv$iv;
                                $this$consume$iv$iv = $this$consume$iv$iv2;
                                $this$toList_u24lambda_u2d32 = list2;
                                $this$toList_u24lambda_u2d34 = list;
                                channelsKt__Channels_commonKt$toList$12.L$0 = $this$toList_u24lambda_u2d34;
                                channelsKt__Channels_commonKt$toList$12.L$1 = $this$toList_u24lambda_u2d32;
                                channelsKt__Channels_commonKt$toList$12.L$2 = $this$consume$iv$iv;
                                channelsKt__Channels_commonKt$toList$12.L$3 = it;
                                channelsKt__Channels_commonKt$toList$12.label = 1;
                                Object hasNext2 = it.hasNext(channelsKt__Channels_commonKt$toList$12);
                                if (hasNext2 != $result2) {
                                }
                            } catch (Throwable th) {
                                $this$consume$iv$iv = $this$consume$iv$iv2;
                                e$iv$iv = th;
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
                        ChannelIterator channelIterator2 = (ChannelIterator) channelsKt__Channels_commonKt$toList$12.L$3;
                        $this$consume$iv$iv = (ReceiveChannel) channelsKt__Channels_commonKt$toList$12.L$2;
                        List $this$toList_u24lambda_u2d35 = (List) channelsKt__Channels_commonKt$toList$12.L$1;
                        List list4 = (List) channelsKt__Channels_commonKt$toList$12.L$0;
                        try {
                            ResultKt.throwOnFailure(e$iv);
                            list = list4;
                            list2 = $this$toList_u24lambda_u2d35;
                            $this$consume$iv$iv2 = $this$consume$iv$iv;
                            cause$iv$iv = null;
                            channelIterator = channelIterator2;
                            i = 0;
                            list3 = null;
                            $i$f$consume = 0;
                            obj = $result2;
                            $result = e$iv;
                            if (((Boolean) e$iv).booleanValue()) {
                            }
                        } catch (Throwable th3) {
                            e$iv$iv = th3;
                            Throwable cause$iv$iv322 = e$iv$iv;
                            throw e$iv$iv;
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        channelsKt__Channels_commonKt$toList$1 = new ChannelsKt__Channels_commonKt$toList$1(continuation);
        channelsKt__Channels_commonKt$toList$12 = channelsKt__Channels_commonKt$toList$1;
        Object e$iv2 = channelsKt__Channels_commonKt$toList$12.result;
        Object $result22 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (channelsKt__Channels_commonKt$toList$12.label) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0080 A[Catch: all -> 0x009e, TryCatch #2 {all -> 0x009e, blocks: (B:16:0x0078, B:18:0x0080, B:24:0x008e), top: B:15:0x0078 }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x006f A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x008e A[Catch: all -> 0x009e, TRY_LEAVE, TryCatch #2 {all -> 0x009e, blocks: (B:16:0x0078, B:18:0x0080, B:24:0x008e), top: B:15:0x0078 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0027  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x0070 -> B:15:0x0078). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final <E> Object consumeEach(BroadcastChannel<E> broadcastChannel, Function1<? super E, Unit> function1, Continuation<? super Unit> continuation) {
        ChannelsKt__Channels_commonKt$consumeEach$3 channelsKt__Channels_commonKt$consumeEach$3;
        ChannelsKt__Channels_commonKt$consumeEach$3 channelsKt__Channels_commonKt$consumeEach$32;
        ReceiveChannel channel$iv;
        Object $result;
        Function1 action;
        ReceiveChannel channel$iv2;
        ChannelIterator channelIterator;
        int i;
        Object obj;
        if (continuation instanceof ChannelsKt__Channels_commonKt$consumeEach$3) {
            channelsKt__Channels_commonKt$consumeEach$3 = (ChannelsKt__Channels_commonKt$consumeEach$3) continuation;
            if ((channelsKt__Channels_commonKt$consumeEach$3.label & Integer.MIN_VALUE) != 0) {
                channelsKt__Channels_commonKt$consumeEach$3.label -= Integer.MIN_VALUE;
                channelsKt__Channels_commonKt$consumeEach$32 = channelsKt__Channels_commonKt$consumeEach$3;
                Object element = channelsKt__Channels_commonKt$consumeEach$32.result;
                Object $result2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (channelsKt__Channels_commonKt$consumeEach$32.label) {
                    case 0:
                        ResultKt.throwOnFailure(element);
                        channel$iv = broadcastChannel.openSubscription();
                        try {
                            int $i$f$consumeEach = 0;
                            Function1 action2 = function1;
                            ChannelIterator it = channel$iv.iterator();
                            channelsKt__Channels_commonKt$consumeEach$32.L$0 = action2;
                            channelsKt__Channels_commonKt$consumeEach$32.L$1 = channel$iv;
                            channelsKt__Channels_commonKt$consumeEach$32.L$2 = it;
                            channelsKt__Channels_commonKt$consumeEach$32.label = 1;
                            Object hasNext = it.hasNext(channelsKt__Channels_commonKt$consumeEach$32);
                            if (hasNext != $result2) {
                                return $result2;
                            }
                            Object obj2 = $result2;
                            $result = element;
                            element = hasNext;
                            action = action2;
                            channel$iv2 = channel$iv;
                            channelIterator = it;
                            i = $i$f$consumeEach;
                            obj = obj2;
                            try {
                                if (((Boolean) element).booleanValue()) {
                                    Unit unit = Unit.INSTANCE;
                                    InlineMarker.finallyStart(1);
                                    ReceiveChannel.DefaultImpls.cancel$default(channel$iv2, (CancellationException) null, 1, (Object) null);
                                    InlineMarker.finallyEnd(1);
                                    return Unit.INSTANCE;
                                }
                                action.invoke(channelIterator.next());
                                element = $result;
                                $result2 = obj;
                                $i$f$consumeEach = i;
                                it = channelIterator;
                                channel$iv = channel$iv2;
                                action2 = action;
                                channelsKt__Channels_commonKt$consumeEach$32.L$0 = action2;
                                channelsKt__Channels_commonKt$consumeEach$32.L$1 = channel$iv;
                                channelsKt__Channels_commonKt$consumeEach$32.L$2 = it;
                                channelsKt__Channels_commonKt$consumeEach$32.label = 1;
                                Object hasNext2 = it.hasNext(channelsKt__Channels_commonKt$consumeEach$32);
                                if (hasNext2 != $result2) {
                                }
                            } catch (Throwable th) {
                                channel$iv = channel$iv2;
                                th = th;
                                InlineMarker.finallyStart(1);
                                ReceiveChannel.DefaultImpls.cancel$default(channel$iv, (CancellationException) null, 1, (Object) null);
                                InlineMarker.finallyEnd(1);
                                throw th;
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            InlineMarker.finallyStart(1);
                            ReceiveChannel.DefaultImpls.cancel$default(channel$iv, (CancellationException) null, 1, (Object) null);
                            InlineMarker.finallyEnd(1);
                            throw th;
                        }
                    case 1:
                        ChannelIterator channelIterator2 = (ChannelIterator) channelsKt__Channels_commonKt$consumeEach$32.L$2;
                        channel$iv = (ReceiveChannel) channelsKt__Channels_commonKt$consumeEach$32.L$1;
                        Function1 action3 = (Function1) channelsKt__Channels_commonKt$consumeEach$32.L$0;
                        try {
                            ResultKt.throwOnFailure(element);
                            action = action3;
                            channel$iv2 = channel$iv;
                            channelIterator = channelIterator2;
                            i = 0;
                            obj = $result2;
                            $result = element;
                            if (((Boolean) element).booleanValue()) {
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            InlineMarker.finallyStart(1);
                            ReceiveChannel.DefaultImpls.cancel$default(channel$iv, (CancellationException) null, 1, (Object) null);
                            InlineMarker.finallyEnd(1);
                            throw th;
                        }
                        break;
                    default:
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
        }
        channelsKt__Channels_commonKt$consumeEach$3 = new ChannelsKt__Channels_commonKt$consumeEach$3(continuation);
        channelsKt__Channels_commonKt$consumeEach$32 = channelsKt__Channels_commonKt$consumeEach$3;
        Object element2 = channelsKt__Channels_commonKt$consumeEach$32.result;
        Object $result22 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (channelsKt__Channels_commonKt$consumeEach$32.label) {
        }
    }

    private static final <E> Object consumeEach$$forInline(BroadcastChannel<E> broadcastChannel, Function1<? super E, Unit> function1, Continuation<? super Unit> continuation) {
        ReceiveChannel channel$iv = broadcastChannel.openSubscription();
        try {
            ChannelIterator<E> it = channel$iv.iterator();
            while (true) {
                InlineMarker.mark(3);
                InlineMarker.mark(0);
                Object hasNext = it.hasNext(null);
                InlineMarker.mark(1);
                if (!((Boolean) hasNext).booleanValue()) {
                    Unit unit = Unit.INSTANCE;
                    InlineMarker.finallyStart(1);
                    ReceiveChannel.DefaultImpls.cancel$default(channel$iv, (CancellationException) null, 1, (Object) null);
                    InlineMarker.finallyEnd(1);
                    return Unit.INSTANCE;
                }
                Object element = it.next();
                function1.invoke(element);
            }
        } catch (Throwable th) {
            InlineMarker.finallyStart(1);
            ReceiveChannel.DefaultImpls.cancel$default(channel$iv, (CancellationException) null, 1, (Object) null);
            InlineMarker.finallyEnd(1);
            throw th;
        }
    }

    public static final void cancelConsumed(ReceiveChannel<?> receiveChannel, Throwable cause) {
        if (cause != null) {
            r0 = cause instanceof CancellationException ? (CancellationException) cause : null;
            if (r0 == null) {
                r0 = ExceptionsKt.CancellationException("Channel was consumed, consumer had failed", cause);
            }
        }
        receiveChannel.cancel(r0);
    }
}
