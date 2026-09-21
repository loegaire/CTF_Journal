package kotlinx.coroutines.flow.internal;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.collections.IndexedValue;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.YieldKt;
import kotlinx.coroutines.channels.Channel;
import kotlinx.coroutines.channels.ChannelKt;
import kotlinx.coroutines.channels.ChannelResult;
import kotlinx.coroutines.channels.SendChannel;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* compiled from: Combine.kt */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u0003*\u00020\u0004H\u008a@"}, d2 = {"<anonymous>", "", "R", "T", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlinx.coroutines.flow.internal.CombineKt$combineInternal$2", f = "Combine.kt", i = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2}, l = {57, 79, 82}, m = "invokeSuspend", n = {"latestValues", "resultChannel", "lastReceivedEpoch", "remainingAbsentValues", "currentEpoch", "latestValues", "resultChannel", "lastReceivedEpoch", "remainingAbsentValues", "currentEpoch", "latestValues", "resultChannel", "lastReceivedEpoch", "remainingAbsentValues", "currentEpoch"}, s = {"L$0", "L$1", "L$2", "I$0", "I$1", "L$0", "L$1", "L$2", "I$0", "I$1", "L$0", "L$1", "L$2", "I$0", "I$1"})
/* loaded from: classes.dex */
final class CombineKt$combineInternal$2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ Function0<T[]> $arrayFactory;
    final /* synthetic */ Flow<T>[] $flows;
    final /* synthetic */ FlowCollector<R> $this_combineInternal;
    final /* synthetic */ Function3<FlowCollector<? super R>, T[], Continuation<? super Unit>, Object> $transform;
    int I$0;
    int I$1;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    CombineKt$combineInternal$2(Flow<? extends T>[] flowArr, Function0<T[]> function0, Function3<? super FlowCollector<? super R>, ? super T[], ? super Continuation<? super Unit>, ? extends Object> function3, FlowCollector<? super R> flowCollector, Continuation<? super CombineKt$combineInternal$2> continuation) {
        super(2, continuation);
        this.$flows = flowArr;
        this.$arrayFactory = function0;
        this.$transform = function3;
        this.$this_combineInternal = flowCollector;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        CombineKt$combineInternal$2 combineKt$combineInternal$2 = new CombineKt$combineInternal$2(this.$flows, this.$arrayFactory, this.$transform, this.$this_combineInternal, continuation);
        combineKt$combineInternal$2.L$0 = obj;
        return combineKt$combineInternal$2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((CombineKt$combineInternal$2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x00e9  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x00f6 A[LOOP:0: B:15:0x00f6->B:35:?, LOOP_START, PHI: r5 r8
      0x00f6: PHI (r5v11 'remainingAbsentValues' int) = (r5v10 'remainingAbsentValues' int), (r5v12 'remainingAbsentValues' int) binds: [B:12:0x00f0, B:35:?] A[DONT_GENERATE, DONT_INLINE]
      0x00f6: PHI (r8v8 'element' kotlin.collections.IndexedValue) = (r8v7 'element' kotlin.collections.IndexedValue), (r8v20 'element' kotlin.collections.IndexedValue) binds: [B:12:0x00f0, B:35:?] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0120  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x016a  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x00e8 A[RETURN] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:28:0x0142 -> B:7:0x00ce). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:32:0x0167 -> B:7:0x00ce). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:33:0x016a -> B:7:0x00ce). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object $result) {
        CombineKt$combineInternal$2 combineKt$combineInternal$2;
        Object[] latestValues;
        byte[] lastReceivedEpoch;
        int remainingAbsentValues;
        Channel resultChannel;
        int remainingAbsentValues2;
        Object[] latestValues2;
        Object holder;
        IndexedValue element;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (this.label) {
            case 0:
                ResultKt.throwOnFailure($result);
                combineKt$combineInternal$2 = this;
                CoroutineScope $this$flowScope = (CoroutineScope) combineKt$combineInternal$2.L$0;
                int size = combineKt$combineInternal$2.$flows.length;
                if (size == 0) {
                    return Unit.INSTANCE;
                }
                latestValues = new Object[size];
                ArraysKt.fill$default(latestValues, NullSurrogateKt.UNINITIALIZED, 0, 0, 6, (Object) null);
                Channel resultChannel2 = ChannelKt.Channel$default(size, null, null, 6, null);
                AtomicInteger nonClosed = new AtomicInteger(size);
                for (int i = 0; i < size; i++) {
                    BuildersKt__Builders_commonKt.launch$default($this$flowScope, null, null, new AnonymousClass1(combineKt$combineInternal$2.$flows, i, nonClosed, resultChannel2, null), 3, null);
                }
                lastReceivedEpoch = new byte[size];
                remainingAbsentValues = 0;
                resultChannel = resultChannel2;
                remainingAbsentValues2 = size;
                remainingAbsentValues = (byte) (remainingAbsentValues + 1);
                combineKt$combineInternal$2.L$0 = latestValues;
                combineKt$combineInternal$2.L$1 = resultChannel;
                combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                combineKt$combineInternal$2.label = 1;
                holder = resultChannel.mo1667receiveCatchingJP2dKIU(combineKt$combineInternal$2);
                if (holder == coroutine_suspended) {
                    return coroutine_suspended;
                }
                latestValues2 = latestValues;
                element = (IndexedValue) ChannelResult.m1679getOrNullimpl(holder);
                if (element != null) {
                    return Unit.INSTANCE;
                }
                do {
                    int index = element.getIndex();
                    Object previous = latestValues2[index];
                    latestValues2[index] = element.getValue();
                    if (previous == NullSurrogateKt.UNINITIALIZED) {
                        remainingAbsentValues2--;
                    }
                    if (lastReceivedEpoch[index] != remainingAbsentValues) {
                        lastReceivedEpoch[index] = (byte) remainingAbsentValues;
                        element = (IndexedValue) ChannelResult.m1679getOrNullimpl(resultChannel.mo1668tryReceivePtdJZtk());
                    }
                    if (remainingAbsentValues2 != 0) {
                        latestValues = latestValues2;
                    } else {
                        Object[] results = (Object[]) combineKt$combineInternal$2.$arrayFactory.invoke();
                        if (results == null) {
                            Function3<FlowCollector<? super R>, T[], Continuation<? super Unit>, Object> function3 = combineKt$combineInternal$2.$transform;
                            Object obj = combineKt$combineInternal$2.$this_combineInternal;
                            combineKt$combineInternal$2.L$0 = latestValues2;
                            combineKt$combineInternal$2.L$1 = resultChannel;
                            combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                            combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                            combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                            combineKt$combineInternal$2.label = 2;
                            if (function3.invoke(obj, latestValues2, combineKt$combineInternal$2) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            latestValues = latestValues2;
                        } else {
                            ArraysKt.copyInto$default(latestValues2, results, 0, 0, 0, 14, (Object) null);
                            Function3<FlowCollector<? super R>, T[], Continuation<? super Unit>, Object> function32 = combineKt$combineInternal$2.$transform;
                            Object obj2 = combineKt$combineInternal$2.$this_combineInternal;
                            combineKt$combineInternal$2.L$0 = latestValues2;
                            combineKt$combineInternal$2.L$1 = resultChannel;
                            combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                            combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                            combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                            combineKt$combineInternal$2.label = 3;
                            if (function32.invoke(obj2, results, combineKt$combineInternal$2) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            latestValues = latestValues2;
                        }
                    }
                    remainingAbsentValues = (byte) (remainingAbsentValues + 1);
                    combineKt$combineInternal$2.L$0 = latestValues;
                    combineKt$combineInternal$2.L$1 = resultChannel;
                    combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                    combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                    combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                    combineKt$combineInternal$2.label = 1;
                    holder = resultChannel.mo1667receiveCatchingJP2dKIU(combineKt$combineInternal$2);
                    if (holder == coroutine_suspended) {
                    }
                } while (element != null);
                if (remainingAbsentValues2 != 0) {
                }
                remainingAbsentValues = (byte) (remainingAbsentValues + 1);
                combineKt$combineInternal$2.L$0 = latestValues;
                combineKt$combineInternal$2.L$1 = resultChannel;
                combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                combineKt$combineInternal$2.label = 1;
                holder = resultChannel.mo1667receiveCatchingJP2dKIU(combineKt$combineInternal$2);
                if (holder == coroutine_suspended) {
                }
            case 1:
                combineKt$combineInternal$2 = this;
                int i2 = combineKt$combineInternal$2.I$1;
                int remainingAbsentValues3 = combineKt$combineInternal$2.I$0;
                byte[] lastReceivedEpoch2 = (byte[]) combineKt$combineInternal$2.L$2;
                resultChannel = (Channel) combineKt$combineInternal$2.L$1;
                latestValues2 = (Object[]) combineKt$combineInternal$2.L$0;
                ResultKt.throwOnFailure($result);
                holder = ((ChannelResult) $result).getHolder();
                remainingAbsentValues = i2;
                lastReceivedEpoch = lastReceivedEpoch2;
                remainingAbsentValues2 = remainingAbsentValues3;
                element = (IndexedValue) ChannelResult.m1679getOrNullimpl(holder);
                if (element != null) {
                }
                break;
            case 2:
                combineKt$combineInternal$2 = this;
                int i3 = combineKt$combineInternal$2.I$1;
                int remainingAbsentValues4 = combineKt$combineInternal$2.I$0;
                byte[] lastReceivedEpoch3 = (byte[]) combineKt$combineInternal$2.L$2;
                resultChannel = (Channel) combineKt$combineInternal$2.L$1;
                Object[] latestValues3 = (Object[]) combineKt$combineInternal$2.L$0;
                ResultKt.throwOnFailure($result);
                latestValues = latestValues3;
                remainingAbsentValues = i3;
                lastReceivedEpoch = lastReceivedEpoch3;
                remainingAbsentValues2 = remainingAbsentValues4;
                remainingAbsentValues = (byte) (remainingAbsentValues + 1);
                combineKt$combineInternal$2.L$0 = latestValues;
                combineKt$combineInternal$2.L$1 = resultChannel;
                combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                combineKt$combineInternal$2.label = 1;
                holder = resultChannel.mo1667receiveCatchingJP2dKIU(combineKt$combineInternal$2);
                if (holder == coroutine_suspended) {
                }
                break;
            case 3:
                combineKt$combineInternal$2 = this;
                int i4 = combineKt$combineInternal$2.I$1;
                int remainingAbsentValues5 = combineKt$combineInternal$2.I$0;
                byte[] lastReceivedEpoch4 = (byte[]) combineKt$combineInternal$2.L$2;
                resultChannel = (Channel) combineKt$combineInternal$2.L$1;
                Object[] latestValues4 = (Object[]) combineKt$combineInternal$2.L$0;
                ResultKt.throwOnFailure($result);
                latestValues = latestValues4;
                remainingAbsentValues = i4;
                lastReceivedEpoch = lastReceivedEpoch4;
                remainingAbsentValues2 = remainingAbsentValues5;
                remainingAbsentValues = (byte) (remainingAbsentValues + 1);
                combineKt$combineInternal$2.L$0 = latestValues;
                combineKt$combineInternal$2.L$1 = resultChannel;
                combineKt$combineInternal$2.L$2 = lastReceivedEpoch;
                combineKt$combineInternal$2.I$0 = remainingAbsentValues2;
                combineKt$combineInternal$2.I$1 = remainingAbsentValues;
                combineKt$combineInternal$2.label = 1;
                holder = resultChannel.mo1667receiveCatchingJP2dKIU(combineKt$combineInternal$2);
                if (holder == coroutine_suspended) {
                }
                break;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* compiled from: Combine.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u0003*\u00020\u0004H\u008a@"}, d2 = {"<anonymous>", "", "R", "T", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(c = "kotlinx.coroutines.flow.internal.CombineKt$combineInternal$2$1", f = "Combine.kt", i = {}, l = {34}, m = "invokeSuspend", n = {}, s = {})
    /* renamed from: kotlinx.coroutines.flow.internal.CombineKt$combineInternal$2$1, reason: invalid class name */
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Flow<T>[] $flows;
        final /* synthetic */ int $i;
        final /* synthetic */ AtomicInteger $nonClosed;
        final /* synthetic */ Channel<IndexedValue<Object>> $resultChannel;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass1(Flow<? extends T>[] flowArr, int i, AtomicInteger atomicInteger, Channel<IndexedValue<Object>> channel, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$flows = flowArr;
            this.$i = i;
            this.$nonClosed = atomicInteger;
            this.$resultChannel = channel;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(this.$flows, this.$i, this.$nonClosed, this.$resultChannel, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Removed duplicated region for block: B:11:0x0045  */
        /* JADX WARN: Removed duplicated region for block: B:18:0x005c  */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object invokeSuspend(Object $result) {
            Throwable th;
            AnonymousClass1 anonymousClass1;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            switch (this.label) {
                case 0:
                    ResultKt.throwOnFailure($result);
                    try {
                        this.label = 1;
                        if (this.$flows[this.$i].collect(new C00051(this.$resultChannel, this.$i), this) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        anonymousClass1 = this;
                        if (anonymousClass1.$nonClosed.decrementAndGet() == 0) {
                            SendChannel.DefaultImpls.close$default(anonymousClass1.$resultChannel, null, 1, null);
                        }
                        return Unit.INSTANCE;
                    } catch (Throwable th2) {
                        th = th2;
                        anonymousClass1 = this;
                        if (anonymousClass1.$nonClosed.decrementAndGet() == 0) {
                            SendChannel.DefaultImpls.close$default(anonymousClass1.$resultChannel, null, 1, null);
                        }
                        throw th;
                    }
                case 1:
                    anonymousClass1 = this;
                    try {
                        ResultKt.throwOnFailure($result);
                        if (anonymousClass1.$nonClosed.decrementAndGet() == 0) {
                        }
                        return Unit.INSTANCE;
                    } catch (Throwable th3) {
                        th = th3;
                        if (anonymousClass1.$nonClosed.decrementAndGet() == 0) {
                        }
                        throw th;
                    }
                default:
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
        }

        /* compiled from: Combine.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u00032\u0006\u0010\u0004\u001a\u0002H\u0003H\u008a@¢\u0006\u0004\b\u0005\u0010\u0006"}, d2 = {"<anonymous>", "", "R", "T", "value", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;"}, k = 3, mv = {1, 6, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
        /* renamed from: kotlinx.coroutines.flow.internal.CombineKt$combineInternal$2$1$1, reason: invalid class name and collision with other inner class name */
        static final class C00051<T> implements FlowCollector {
            final /* synthetic */ int $i;
            final /* synthetic */ Channel<IndexedValue<Object>> $resultChannel;

            C00051(Channel<IndexedValue<Object>> channel, int i) {
                this.$resultChannel = channel;
                this.$i = i;
            }

            /* JADX WARN: Removed duplicated region for block: B:11:0x002d  */
            /* JADX WARN: Removed duplicated region for block: B:14:0x0031  */
            /* JADX WARN: Removed duplicated region for block: B:17:0x0055 A[RETURN] */
            /* JADX WARN: Removed duplicated region for block: B:18:0x0035  */
            /* JADX WARN: Removed duplicated region for block: B:8:0x0025  */
            @Override // kotlinx.coroutines.flow.FlowCollector
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public final Object emit(T t, Continuation<? super Unit> continuation) {
                CombineKt$combineInternal$2$1$1$emit$1 combineKt$combineInternal$2$1$1$emit$1;
                CombineKt$combineInternal$2$1$1$emit$1 combineKt$combineInternal$2$1$1$emit$12;
                if (continuation instanceof CombineKt$combineInternal$2$1$1$emit$1) {
                    combineKt$combineInternal$2$1$1$emit$1 = (CombineKt$combineInternal$2$1$1$emit$1) continuation;
                    if ((combineKt$combineInternal$2$1$1$emit$1.label & Integer.MIN_VALUE) != 0) {
                        combineKt$combineInternal$2$1$1$emit$1.label -= Integer.MIN_VALUE;
                        combineKt$combineInternal$2$1$1$emit$12 = combineKt$combineInternal$2$1$1$emit$1;
                        Object $result = combineKt$combineInternal$2$1$1$emit$12.result;
                        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                        switch (combineKt$combineInternal$2$1$1$emit$12.label) {
                            case 0:
                                ResultKt.throwOnFailure($result);
                                Channel<IndexedValue<Object>> channel = this.$resultChannel;
                                IndexedValue<Object> indexedValue = new IndexedValue<>(this.$i, t);
                                combineKt$combineInternal$2$1$1$emit$12.label = 1;
                                Object value = channel.send(indexedValue, combineKt$combineInternal$2$1$1$emit$12);
                                if (value == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                combineKt$combineInternal$2$1$1$emit$12.label = 2;
                                if (YieldKt.yield(combineKt$combineInternal$2$1$1$emit$12) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                return Unit.INSTANCE;
                            case 1:
                                ResultKt.throwOnFailure($result);
                                combineKt$combineInternal$2$1$1$emit$12.label = 2;
                                if (YieldKt.yield(combineKt$combineInternal$2$1$1$emit$12) == coroutine_suspended) {
                                }
                                return Unit.INSTANCE;
                            case 2:
                                ResultKt.throwOnFailure($result);
                                return Unit.INSTANCE;
                            default:
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                    }
                }
                combineKt$combineInternal$2$1$1$emit$1 = new CombineKt$combineInternal$2$1$1$emit$1(this, continuation);
                combineKt$combineInternal$2$1$1$emit$12 = combineKt$combineInternal$2$1$1$emit$1;
                Object $result2 = combineKt$combineInternal$2$1$1$emit$12.result;
                Object coroutine_suspended2 = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                switch (combineKt$combineInternal$2$1$1$emit$12.label) {
                }
            }
        }
    }
}
