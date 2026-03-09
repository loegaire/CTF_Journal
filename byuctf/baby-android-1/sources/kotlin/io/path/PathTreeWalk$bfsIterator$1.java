package kotlin.io.path;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.nio.file.FileSystemLoopException;
import java.nio.file.Files;
import java.nio.file.LinkOption;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.List;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.RestrictedSuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.sequences.SequenceScope;

/* compiled from: PathTreeWalk.kt */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlin/sequences/SequenceScope;", "Ljava/nio/file/Path;"}, k = 3, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlin.io.path.PathTreeWalk$bfsIterator$1", f = "PathTreeWalk.kt", i = {0, 0, 0, 0, 0, 0, 1, 1, 1}, l = {184, 190}, m = "invokeSuspend", n = {"$this$iterator", "queue", "entriesReader", "pathNode", "this_$iv", "path$iv", "$this$iterator", "queue", "entriesReader"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2"})
/* loaded from: classes.dex */
final class PathTreeWalk$bfsIterator$1 extends RestrictedSuspendLambda implements Function2<SequenceScope<? super Path>, Continuation<? super Unit>, Object> {
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    Object L$5;
    int label;
    final /* synthetic */ PathTreeWalk this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    PathTreeWalk$bfsIterator$1(PathTreeWalk pathTreeWalk, Continuation<? super PathTreeWalk$bfsIterator$1> continuation) {
        super(2, continuation);
        this.this$0 = pathTreeWalk;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        PathTreeWalk$bfsIterator$1 pathTreeWalk$bfsIterator$1 = new PathTreeWalk$bfsIterator$1(this.this$0, continuation);
        pathTreeWalk$bfsIterator$1.L$0 = obj;
        return pathTreeWalk$bfsIterator$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(SequenceScope<? super Path> sequenceScope, Continuation<? super Unit> continuation) {
        return ((PathTreeWalk$bfsIterator$1) create(sequenceScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0106  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:21:0x0104 -> B:7:0x0089). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x0106 -> B:7:0x0089). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object $result) {
        PathTreeWalk$bfsIterator$1 pathTreeWalk$bfsIterator$1;
        boolean followLinks;
        Path path;
        Path path2;
        Object keyOf;
        SequenceScope $this$iterator;
        ArrayDeque queue;
        DirectoryEntriesReader entriesReader;
        PathNode pathNode;
        Path path$iv;
        PathTreeWalk this_$iv;
        PathNode pathNode2;
        DirectoryEntriesReader entriesReader2;
        ArrayDeque queue2;
        SequenceScope $this$iterator2;
        Path path$iv2;
        PathTreeWalk this_$iv2;
        PathNode pathNode3;
        LinkOption[] linkOptionArr;
        boolean createsCycle;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (this.label) {
            case 0:
                ResultKt.throwOnFailure($result);
                pathTreeWalk$bfsIterator$1 = this;
                SequenceScope $this$iterator3 = (SequenceScope) pathTreeWalk$bfsIterator$1.L$0;
                ArrayDeque queue3 = new ArrayDeque();
                followLinks = pathTreeWalk$bfsIterator$1.this$0.getFollowLinks();
                DirectoryEntriesReader entriesReader3 = new DirectoryEntriesReader(followLinks);
                path = pathTreeWalk$bfsIterator$1.this$0.start;
                path2 = pathTreeWalk$bfsIterator$1.this$0.start;
                keyOf = PathTreeWalkKt.keyOf(path2, pathTreeWalk$bfsIterator$1.this$0.getLinkOptions());
                queue3.addLast(new PathNode(path, keyOf, null));
                $this$iterator = $this$iterator3;
                queue = queue3;
                entriesReader = entriesReader3;
                while (!queue.isEmpty()) {
                    pathNode3 = (PathNode) queue.removeFirst();
                    this_$iv2 = pathTreeWalk$bfsIterator$1.this$0;
                    SequenceScope $this$yieldIfNeeded$iv = $this$iterator;
                    path$iv2 = pathNode3.getPath();
                    LinkOption[] linkOptions = this_$iv2.getLinkOptions();
                    LinkOption[] linkOptionArr2 = (LinkOption[]) Arrays.copyOf(linkOptions, linkOptions.length);
                    if (Files.isDirectory(path$iv2, (LinkOption[]) Arrays.copyOf(linkOptionArr2, linkOptionArr2.length))) {
                        createsCycle = PathTreeWalkKt.createsCycle(pathNode3);
                        if (!createsCycle) {
                            if (this_$iv2.getIncludeDirectories()) {
                                pathTreeWalk$bfsIterator$1.L$0 = $this$iterator;
                                pathTreeWalk$bfsIterator$1.L$1 = queue;
                                pathTreeWalk$bfsIterator$1.L$2 = entriesReader;
                                pathTreeWalk$bfsIterator$1.L$3 = pathNode3;
                                pathTreeWalk$bfsIterator$1.L$4 = this_$iv2;
                                pathTreeWalk$bfsIterator$1.L$5 = path$iv2;
                                pathTreeWalk$bfsIterator$1.label = 1;
                                if ($this$yieldIfNeeded$iv.yield(path$iv2, pathTreeWalk$bfsIterator$1) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                entriesReader2 = entriesReader;
                                $this$iterator2 = $this$iterator;
                                path$iv = path$iv2;
                                pathNode2 = pathNode3;
                                pathNode = null;
                                queue2 = queue;
                                this_$iv = this_$iv2;
                                path$iv2 = path$iv;
                                pathNode3 = pathNode2;
                                entriesReader = entriesReader2;
                                $this$iterator = $this$iterator2;
                                ArrayDeque arrayDeque = queue2;
                                this_$iv2 = this_$iv;
                                queue = arrayDeque;
                            }
                            LinkOption[] linkOptions2 = this_$iv2.getLinkOptions();
                            linkOptionArr = (LinkOption[]) Arrays.copyOf(linkOptions2, linkOptions2.length);
                            if (Files.isDirectory(path$iv2, (LinkOption[]) Arrays.copyOf(linkOptionArr, linkOptionArr.length))) {
                                List entries = entriesReader.readEntries(pathNode3);
                                queue.addAll(entries);
                            }
                            while (!queue.isEmpty()) {
                            }
                        } else {
                            throw new FileSystemLoopException(path$iv2.toString());
                        }
                    } else if (Files.exists(path$iv2, (LinkOption[]) Arrays.copyOf(new LinkOption[]{LinkOption.NOFOLLOW_LINKS}, 1))) {
                        pathTreeWalk$bfsIterator$1.L$0 = $this$iterator;
                        pathTreeWalk$bfsIterator$1.L$1 = queue;
                        pathTreeWalk$bfsIterator$1.L$2 = entriesReader;
                        pathTreeWalk$bfsIterator$1.L$3 = null;
                        pathTreeWalk$bfsIterator$1.L$4 = null;
                        pathTreeWalk$bfsIterator$1.L$5 = null;
                        pathTreeWalk$bfsIterator$1.label = 2;
                        if ($this$yieldIfNeeded$iv.yield(path$iv2, pathTreeWalk$bfsIterator$1) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                    }
                }
                return Unit.INSTANCE;
            case 1:
                pathTreeWalk$bfsIterator$1 = this;
                pathNode = null;
                path$iv = (Path) pathTreeWalk$bfsIterator$1.L$5;
                this_$iv = (PathTreeWalk) pathTreeWalk$bfsIterator$1.L$4;
                pathNode2 = (PathNode) pathTreeWalk$bfsIterator$1.L$3;
                entriesReader2 = (DirectoryEntriesReader) pathTreeWalk$bfsIterator$1.L$2;
                queue2 = (ArrayDeque) pathTreeWalk$bfsIterator$1.L$1;
                $this$iterator2 = (SequenceScope) pathTreeWalk$bfsIterator$1.L$0;
                ResultKt.throwOnFailure($result);
                path$iv2 = path$iv;
                pathNode3 = pathNode2;
                entriesReader = entriesReader2;
                $this$iterator = $this$iterator2;
                ArrayDeque arrayDeque2 = queue2;
                this_$iv2 = this_$iv;
                queue = arrayDeque2;
                LinkOption[] linkOptions22 = this_$iv2.getLinkOptions();
                linkOptionArr = (LinkOption[]) Arrays.copyOf(linkOptions22, linkOptions22.length);
                if (Files.isDirectory(path$iv2, (LinkOption[]) Arrays.copyOf(linkOptionArr, linkOptionArr.length))) {
                }
                while (!queue.isEmpty()) {
                }
                return Unit.INSTANCE;
            case 2:
                pathTreeWalk$bfsIterator$1 = this;
                entriesReader = (DirectoryEntriesReader) pathTreeWalk$bfsIterator$1.L$2;
                queue = (ArrayDeque) pathTreeWalk$bfsIterator$1.L$1;
                $this$iterator = (SequenceScope) pathTreeWalk$bfsIterator$1.L$0;
                ResultKt.throwOnFailure($result);
                while (!queue.isEmpty()) {
                }
                return Unit.INSTANCE;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }
}
