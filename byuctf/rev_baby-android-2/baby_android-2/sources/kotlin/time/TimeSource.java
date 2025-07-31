package kotlin.time;

import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.JvmInline;
import kotlin.jvm.internal.Intrinsics;
import kotlin.time.ComparableTimeMark;

/* compiled from: TimeSource.kt */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\bg\u0018\u0000 \u00042\u00020\u0001:\u0003\u0004\u0005\u0006J\b\u0010\u0002\u001a\u00020\u0003H&¨\u0006\u0007"}, d2 = {"Lkotlin/time/TimeSource;", "", "markNow", "Lkotlin/time/TimeMark;", "Companion", "Monotonic", "WithComparableMarks", "kotlin-stdlib"}, k = 1, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
/* loaded from: classes.dex */
public interface TimeSource {

    /* renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = Companion.$$INSTANCE;

    /* compiled from: TimeSource.kt */
    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bg\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H&¨\u0006\u0004"}, d2 = {"Lkotlin/time/TimeSource$WithComparableMarks;", "Lkotlin/time/TimeSource;", "markNow", "Lkotlin/time/ComparableTimeMark;", "kotlin-stdlib"}, k = 1, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public interface WithComparableMarks extends TimeSource {
        @Override // kotlin.time.TimeSource
        ComparableTimeMark markNow();
    }

    TimeMark markNow();

    /* compiled from: TimeSource.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001\tB\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0015\u0010\u0003\u001a\u00020\u0004H\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0005\u0010\u0006J\b\u0010\u0007\u001a\u00020\bH\u0016\u0082\u0002\b\n\u0002\b!\n\u0002\b\u0019¨\u0006\n"}, d2 = {"Lkotlin/time/TimeSource$Monotonic;", "Lkotlin/time/TimeSource$WithComparableMarks;", "()V", "markNow", "Lkotlin/time/TimeSource$Monotonic$ValueTimeMark;", "markNow-z9LOYto", "()J", "toString", "", "ValueTimeMark", "kotlin-stdlib"}, k = 1, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Monotonic implements WithComparableMarks {
        public static final Monotonic INSTANCE = new Monotonic();

        private Monotonic() {
        }

        @Override // kotlin.time.TimeSource.WithComparableMarks, kotlin.time.TimeSource
        public /* bridge */ /* synthetic */ ComparableTimeMark markNow() {
            return ValueTimeMark.m1629boximpl(m1628markNowz9LOYto());
        }

        @Override // kotlin.time.TimeSource
        public /* bridge */ /* synthetic */ TimeMark markNow() {
            return ValueTimeMark.m1629boximpl(m1628markNowz9LOYto());
        }

        /* renamed from: markNow-z9LOYto, reason: not valid java name */
        public long m1628markNowz9LOYto() {
            return MonotonicTimeSource.INSTANCE.m1623markNowz9LOYto();
        }

        public String toString() {
            return MonotonicTimeSource.INSTANCE.toString();
        }

        /* compiled from: TimeSource.kt */
        @Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\u0010\u0000\n\u0002\b\u0014\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0087@\u0018\u00002\u00020\u0001B\u0018\b\u0000\u0012\n\u0010\u0002\u001a\u00060\u0003j\u0002`\u0004ø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\u0006J\u001b\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0000H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\b\n\u0010\u000bJ\u0015\u0010\f\u001a\u00020\rH\u0016ø\u0001\u0001ø\u0001\u0000¢\u0006\u0004\b\u000e\u0010\u0006J\u001a\u0010\u000f\u001a\u00020\u00102\b\u0010\t\u001a\u0004\u0018\u00010\u0011HÖ\u0003¢\u0006\u0004\b\u0012\u0010\u0013J\u000f\u0010\u0014\u001a\u00020\u0010H\u0016¢\u0006\u0004\b\u0015\u0010\u0016J\u000f\u0010\u0017\u001a\u00020\u0010H\u0016¢\u0006\u0004\b\u0018\u0010\u0016J\u0010\u0010\u0019\u001a\u00020\bHÖ\u0001¢\u0006\u0004\b\u001a\u0010\u001bJ\u001e\u0010\u001c\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u0001H\u0096\u0002ø\u0001\u0001ø\u0001\u0000¢\u0006\u0004\b\u001d\u0010\u001eJ\u001b\u0010\u001c\u001a\u00020\u00002\u0006\u0010\u001f\u001a\u00020\rH\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b \u0010!J\u001b\u0010\u001c\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u0000H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\b\"\u0010!J\u001b\u0010#\u001a\u00020\u00002\u0006\u0010\u001f\u001a\u00020\rH\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b$\u0010!J\u0010\u0010%\u001a\u00020&HÖ\u0001¢\u0006\u0004\b'\u0010(R\u0012\u0010\u0002\u001a\u00060\u0003j\u0002`\u0004X\u0080\u0004¢\u0006\u0002\n\u0000\u0088\u0001\u0002\u0092\u0001\u00060\u0003j\u0002`\u0004ø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006)"}, d2 = {"Lkotlin/time/TimeSource$Monotonic$ValueTimeMark;", "Lkotlin/time/ComparableTimeMark;", "reading", "", "Lkotlin/time/ValueTimeMarkReading;", "constructor-impl", "(J)J", "compareTo", "", "other", "compareTo-6eNON_k", "(JJ)I", "elapsedNow", "Lkotlin/time/Duration;", "elapsedNow-UwyO8pc", "equals", "", "", "equals-impl", "(JLjava/lang/Object;)Z", "hasNotPassedNow", "hasNotPassedNow-impl", "(J)Z", "hasPassedNow", "hasPassedNow-impl", "hashCode", "hashCode-impl", "(J)I", "minus", "minus-UwyO8pc", "(JLkotlin/time/ComparableTimeMark;)J", TypedValues.TransitionType.S_DURATION, "minus-LRDsOJo", "(JJ)J", "minus-6eNON_k", "plus", "plus-LRDsOJo", "toString", "", "toString-impl", "(J)Ljava/lang/String;", "kotlin-stdlib"}, k = 1, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
        @JvmInline
        public static final class ValueTimeMark implements ComparableTimeMark {
            private final long reading;

            /* renamed from: box-impl, reason: not valid java name */
            public static final /* synthetic */ ValueTimeMark m1629boximpl(long j) {
                return new ValueTimeMark(j);
            }

            /* renamed from: constructor-impl, reason: not valid java name */
            public static long m1632constructorimpl(long j) {
                return j;
            }

            /* renamed from: equals-impl, reason: not valid java name */
            public static boolean m1634equalsimpl(long j, Object obj) {
                return (obj instanceof ValueTimeMark) && j == ((ValueTimeMark) obj).getReading();
            }

            /* renamed from: equals-impl0, reason: not valid java name */
            public static final boolean m1635equalsimpl0(long j, long j2) {
                return j == j2;
            }

            /* renamed from: hashCode-impl, reason: not valid java name */
            public static int m1638hashCodeimpl(long j) {
                return Long.hashCode(j);
            }

            /* renamed from: toString-impl, reason: not valid java name */
            public static String m1643toStringimpl(long j) {
                return "ValueTimeMark(reading=" + j + ')';
            }

            @Override // kotlin.time.ComparableTimeMark
            public boolean equals(Object obj) {
                return m1634equalsimpl(this.reading, obj);
            }

            @Override // kotlin.time.ComparableTimeMark
            public int hashCode() {
                return m1638hashCodeimpl(this.reading);
            }

            public String toString() {
                return m1643toStringimpl(this.reading);
            }

            /* renamed from: unbox-impl, reason: not valid java name and from getter */
            public final /* synthetic */ long getReading() {
                return this.reading;
            }

            @Override // java.lang.Comparable
            public int compareTo(ComparableTimeMark other) {
                return ComparableTimeMark.DefaultImpls.compareTo(this, other);
            }

            @Override // kotlin.time.ComparableTimeMark, kotlin.time.TimeMark
            /* renamed from: minus-LRDsOJo */
            public /* bridge */ /* synthetic */ ComparableTimeMark mo1480minusLRDsOJo(long duration) {
                return m1629boximpl(m1644minusLRDsOJo(duration));
            }

            @Override // kotlin.time.TimeMark
            /* renamed from: minus-LRDsOJo */
            public /* bridge */ /* synthetic */ TimeMark mo1480minusLRDsOJo(long duration) {
                return m1629boximpl(m1644minusLRDsOJo(duration));
            }

            @Override // kotlin.time.ComparableTimeMark, kotlin.time.TimeMark
            /* renamed from: plus-LRDsOJo */
            public /* bridge */ /* synthetic */ ComparableTimeMark mo1482plusLRDsOJo(long duration) {
                return m1629boximpl(m1645plusLRDsOJo(duration));
            }

            @Override // kotlin.time.TimeMark
            /* renamed from: plus-LRDsOJo */
            public /* bridge */ /* synthetic */ TimeMark mo1482plusLRDsOJo(long duration) {
                return m1629boximpl(m1645plusLRDsOJo(duration));
            }

            private /* synthetic */ ValueTimeMark(long reading) {
                this.reading = reading;
            }

            /* renamed from: compareTo-impl, reason: not valid java name */
            public static int m1631compareToimpl(long arg0, ComparableTimeMark other) {
                Intrinsics.checkNotNullParameter(other, "other");
                return m1629boximpl(arg0).compareTo(other);
            }

            /* renamed from: elapsedNow-UwyO8pc, reason: not valid java name */
            public static long m1633elapsedNowUwyO8pc(long arg0) {
                return MonotonicTimeSource.INSTANCE.m1622elapsedFrom6eNON_k(arg0);
            }

            @Override // kotlin.time.TimeMark
            /* renamed from: elapsedNow-UwyO8pc */
            public long mo1479elapsedNowUwyO8pc() {
                return m1633elapsedNowUwyO8pc(this.reading);
            }

            /* renamed from: plus-LRDsOJo, reason: not valid java name */
            public static long m1642plusLRDsOJo(long arg0, long duration) {
                return MonotonicTimeSource.INSTANCE.m1620adjustReading6QKq23U(arg0, duration);
            }

            /* renamed from: plus-LRDsOJo, reason: not valid java name */
            public long m1645plusLRDsOJo(long duration) {
                return m1642plusLRDsOJo(this.reading, duration);
            }

            /* renamed from: minus-LRDsOJo, reason: not valid java name */
            public static long m1640minusLRDsOJo(long arg0, long duration) {
                return MonotonicTimeSource.INSTANCE.m1620adjustReading6QKq23U(arg0, Duration.m1542unaryMinusUwyO8pc(duration));
            }

            /* renamed from: minus-LRDsOJo, reason: not valid java name */
            public long m1644minusLRDsOJo(long duration) {
                return m1640minusLRDsOJo(this.reading, duration);
            }

            /* renamed from: hasPassedNow-impl, reason: not valid java name */
            public static boolean m1637hasPassedNowimpl(long arg0) {
                return !Duration.m1523isNegativeimpl(m1633elapsedNowUwyO8pc(arg0));
            }

            @Override // kotlin.time.TimeMark
            public boolean hasPassedNow() {
                return m1637hasPassedNowimpl(this.reading);
            }

            /* renamed from: hasNotPassedNow-impl, reason: not valid java name */
            public static boolean m1636hasNotPassedNowimpl(long arg0) {
                return Duration.m1523isNegativeimpl(m1633elapsedNowUwyO8pc(arg0));
            }

            @Override // kotlin.time.TimeMark
            public boolean hasNotPassedNow() {
                return m1636hasNotPassedNowimpl(this.reading);
            }

            @Override // kotlin.time.ComparableTimeMark
            /* renamed from: minus-UwyO8pc */
            public long mo1481minusUwyO8pc(ComparableTimeMark other) {
                Intrinsics.checkNotNullParameter(other, "other");
                return m1641minusUwyO8pc(this.reading, other);
            }

            /* renamed from: minus-UwyO8pc, reason: not valid java name */
            public static long m1641minusUwyO8pc(long arg0, ComparableTimeMark other) {
                Intrinsics.checkNotNullParameter(other, "other");
                if (!(other instanceof ValueTimeMark)) {
                    throw new IllegalArgumentException("Subtracting or comparing time marks from different time sources is not possible: " + ((Object) m1643toStringimpl(arg0)) + " and " + other);
                }
                return m1639minus6eNON_k(arg0, ((ValueTimeMark) other).getReading());
            }

            /* renamed from: minus-6eNON_k, reason: not valid java name */
            public static final long m1639minus6eNON_k(long arg0, long other) {
                return MonotonicTimeSource.INSTANCE.m1621differenceBetweenfRLX17w(arg0, other);
            }

            /* renamed from: compareTo-6eNON_k, reason: not valid java name */
            public static final int m1630compareTo6eNON_k(long arg0, long other) {
                return Duration.m1489compareToLRDsOJo(m1639minus6eNON_k(arg0, other), Duration.INSTANCE.m1592getZEROUwyO8pc());
            }
        }
    }

    /* compiled from: TimeSource.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lkotlin/time/TimeSource$Companion;", "", "()V", "kotlin-stdlib"}, k = 1, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        static final /* synthetic */ Companion $$INSTANCE = new Companion();

        private Companion() {
        }
    }
}
