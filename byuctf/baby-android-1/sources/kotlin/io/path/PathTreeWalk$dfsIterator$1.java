package kotlin.io.path;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.nio.file.FileSystemLoopException;
import java.nio.file.Files;
import java.nio.file.LinkOption;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.Iterator;
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
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.SequenceScope;

/* compiled from: PathTreeWalk.kt */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlin/sequences/SequenceScope;", "Ljava/nio/file/Path;"}, k = 3, mv = {1, 8, 0}, xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(c = "kotlin.io.path.PathTreeWalk$dfsIterator$1", f = "PathTreeWalk.kt", i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3}, l = {184, 190, 199, 205}, m = "invokeSuspend", n = {"$this$iterator", "stack", "entriesReader", "startNode", "this_$iv", "path$iv", "$this$iterator", "stack", "entriesReader", "$this$iterator", "stack", "entriesReader", "pathNode", "this_$iv", "path$iv", "$this$iterator", "stack", "entriesReader"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2"})
/* loaded from: classes.dex */
final class PathTreeWalk$dfsIterator$1 extends RestrictedSuspendLambda implements Function2<SequenceScope<? super Path>, Continuation<? super Unit>, Object> {
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    Object L$5;
    int label;
    final /* synthetic */ PathTreeWalk this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    PathTreeWalk$dfsIterator$1(PathTreeWalk pathTreeWalk, Continuation<? super PathTreeWalk$dfsIterator$1> continuation) {
        super(2, continuation);
        this.this$0 = pathTreeWalk;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        PathTreeWalk$dfsIterator$1 pathTreeWalk$dfsIterator$1 = new PathTreeWalk$dfsIterator$1(this.this$0, continuation);
        pathTreeWalk$dfsIterator$1.L$0 = obj;
        return pathTreeWalk$dfsIterator$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(SequenceScope<? super Path> sequenceScope, Continuation<? super Unit> continuation) {
        return ((PathTreeWalk$dfsIterator$1) create(sequenceScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x017b  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x0207  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x012f  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:23:0x0205 -> B:7:0x0171). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:24:0x0207 -> B:7:0x0171). Please report as a decompilation issue!!! */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object $result) {
        PathTreeWalk$dfsIterator$1 pathTreeWalk$dfsIterator$1;
        SequenceScope $this$iterator;
        ArrayDeque stack;
        boolean followLinks;
        DirectoryEntriesReader entriesReader;
        PathNode startNode;
        Path path;
        Path path2;
        Object keyOf;
        PathTreeWalk this_$iv;
        Path path$iv;
        boolean createsCycle;
        ArrayDeque stack2;
        PathTreeWalk this_$iv2;
        DirectoryEntriesReader entriesReader2;
        Path path$iv2;
        PathNode startNode2;
        PathNode startNode3;
        SequenceScope $this$iterator2;
        LinkOption[] linkOptionArr;
        PathNode pathNode;
        Path path$iv3;
        PathTreeWalk this_$iv3;
        PathNode pathNode2;
        DirectoryEntriesReader entriesReader3;
        ArrayDeque stack3;
        SequenceScope $this$iterator3;
        Path path$iv4;
        PathTreeWalk this_$iv4;
        PathNode pathNode3;
        LinkOption[] linkOptionArr2;
        boolean createsCycle2;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (this.label) {
            case 0:
                ResultKt.throwOnFailure($result);
                pathTreeWalk$dfsIterator$1 = this;
                $this$iterator = (SequenceScope) pathTreeWalk$dfsIterator$1.L$0;
                stack = new ArrayDeque();
                followLinks = pathTreeWalk$dfsIterator$1.this$0.getFollowLinks();
                entriesReader = new DirectoryEntriesReader(followLinks);
                path = pathTreeWalk$dfsIterator$1.this$0.start;
                path2 = pathTreeWalk$dfsIterator$1.this$0.start;
                keyOf = PathTreeWalkKt.keyOf(path2, pathTreeWalk$dfsIterator$1.this$0.getLinkOptions());
                startNode = new PathNode(path, keyOf, null);
                this_$iv = pathTreeWalk$dfsIterator$1.this$0;
                path$iv = startNode.getPath();
                LinkOption[] linkOptions = this_$iv.getLinkOptions();
                LinkOption[] linkOptionArr3 = (LinkOption[]) Arrays.copyOf(linkOptions, linkOptions.length);
                if (!Files.isDirectory(path$iv, (LinkOption[]) Arrays.copyOf(linkOptionArr3, linkOptionArr3.length))) {
                    if (Files.exists(path$iv, (LinkOption[]) Arrays.copyOf(new LinkOption[]{LinkOption.NOFOLLOW_LINKS}, 1))) {
                        pathTreeWalk$dfsIterator$1.L$0 = $this$iterator;
                        pathTreeWalk$dfsIterator$1.L$1 = stack;
                        pathTreeWalk$dfsIterator$1.L$2 = entriesReader;
                        pathTreeWalk$dfsIterator$1.label = 2;
                        if ($this$iterator.yield(path$iv, pathTreeWalk$dfsIterator$1) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                    }
                    while (!stack.isEmpty()) {
                    }
                    return Unit.INSTANCE;
                }
                createsCycle = PathTreeWalkKt.createsCycle(startNode);
                if (createsCycle) {
                    throw new FileSystemLoopException(path$iv.toString());
                }
                if (this_$iv.getIncludeDirectories()) {
                    pathTreeWalk$dfsIterator$1.L$0 = $this$iterator;
                    pathTreeWalk$dfsIterator$1.L$1 = stack;
                    pathTreeWalk$dfsIterator$1.L$2 = entriesReader;
                    pathTreeWalk$dfsIterator$1.L$3 = startNode;
                    pathTreeWalk$dfsIterator$1.L$4 = this_$iv;
                    pathTreeWalk$dfsIterator$1.L$5 = path$iv;
                    pathTreeWalk$dfsIterator$1.label = 1;
                    if ($this$iterator.yield(path$iv, pathTreeWalk$dfsIterator$1) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    stack2 = stack;
                    this_$iv2 = this_$iv;
                    entriesReader2 = entriesReader;
                    path$iv2 = path$iv;
                    startNode2 = startNode;
                    startNode3 = null;
                    $this$iterator2 = $this$iterator;
                    path$iv = path$iv2;
                    entriesReader = entriesReader2;
                    this_$iv = this_$iv2;
                    stack = stack2;
                    startNode = startNode2;
                    $this$iterator = $this$iterator2;
                }
                LinkOption[] linkOptions2 = this_$iv.getLinkOptions();
                linkOptionArr = (LinkOption[]) Arrays.copyOf(linkOptions2, linkOptions2.length);
                if (Files.isDirectory(path$iv, (LinkOption[]) Arrays.copyOf(linkOptionArr, linkOptionArr.length))) {
                    List entries = entriesReader.readEntries(startNode);
                    startNode.setContentIterator(entries.iterator());
                    stack.addLast(startNode);
                }
                while (!stack.isEmpty()) {
                    PathNode topNode = (PathNode) stack.last();
                    Iterator topIterator = topNode.getContentIterator();
                    Intrinsics.checkNotNull(topIterator);
                    if (topIterator.hasNext()) {
                        pathNode3 = topIterator.next();
                        this_$iv4 = pathTreeWalk$dfsIterator$1.this$0;
                        SequenceScope $this$yieldIfNeeded$iv = $this$iterator;
                        path$iv4 = pathNode3.getPath();
                        LinkOption[] linkOptions3 = this_$iv4.getLinkOptions();
                        LinkOption[] linkOptionArr4 = (LinkOption[]) Arrays.copyOf(linkOptions3, linkOptions3.length);
                        if (Files.isDirectory(path$iv4, (LinkOption[]) Arrays.copyOf(linkOptionArr4, linkOptionArr4.length))) {
                            createsCycle2 = PathTreeWalkKt.createsCycle(pathNode3);
                            if (createsCycle2) {
                                throw new FileSystemLoopException(path$iv4.toString());
                            }
                            if (this_$iv4.getIncludeDirectories()) {
                                pathTreeWalk$dfsIterator$1.L$0 = $this$iterator;
                                pathTreeWalk$dfsIterator$1.L$1 = stack;
                                pathTreeWalk$dfsIterator$1.L$2 = entriesReader;
                                pathTreeWalk$dfsIterator$1.L$3 = pathNode3;
                                pathTreeWalk$dfsIterator$1.L$4 = this_$iv4;
                                pathTreeWalk$dfsIterator$1.L$5 = path$iv4;
                                pathTreeWalk$dfsIterator$1.label = 3;
                                if ($this$yieldIfNeeded$iv.yield(path$iv4, pathTreeWalk$dfsIterator$1) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                stack3 = stack;
                                this_$iv3 = this_$iv4;
                                entriesReader3 = entriesReader;
                                path$iv3 = path$iv4;
                                SequenceScope sequenceScope = $this$iterator;
                                pathNode2 = pathNode3;
                                pathNode = null;
                                $this$iterator3 = sequenceScope;
                                path$iv4 = path$iv3;
                                entriesReader = entriesReader3;
                                this_$iv4 = this_$iv3;
                                stack = stack3;
                                pathNode3 = pathNode2;
                                $this$iterator = $this$iterator3;
                            }
                            LinkOption[] linkOptions4 = this_$iv4.getLinkOptions();
                            linkOptionArr2 = (LinkOption[]) Arrays.copyOf(linkOptions4, linkOptions4.length);
                            if (Files.isDirectory(path$iv4, (LinkOption[]) Arrays.copyOf(linkOptionArr2, linkOptionArr2.length))) {
                                List entries2 = entriesReader.readEntries(pathNode3);
                                pathNode3.setContentIterator(entries2.iterator());
                                stack.addLast(pathNode3);
                            }
                            while (!stack.isEmpty()) {
                            }
                        } else if (Files.exists(path$iv4, (LinkOption[]) Arrays.copyOf(new LinkOption[]{LinkOption.NOFOLLOW_LINKS}, 1))) {
                            pathTreeWalk$dfsIterator$1.L$0 = $this$iterator;
                            pathTreeWalk$dfsIterator$1.L$1 = stack;
                            pathTreeWalk$dfsIterator$1.L$2 = entriesReader;
                            pathTreeWalk$dfsIterator$1.L$3 = null;
                            pathTreeWalk$dfsIterator$1.L$4 = null;
                            pathTreeWalk$dfsIterator$1.L$5 = null;
                            pathTreeWalk$dfsIterator$1.label = 4;
                            if ($this$yieldIfNeeded$iv.yield(path$iv4, pathTreeWalk$dfsIterator$1) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                        } else {
                            continue;
                        }
                    } else {
                        stack.removeLast();
                    }
                }
                return Unit.INSTANCE;
            case 1:
                pathTreeWalk$dfsIterator$1 = this;
                startNode3 = null;
                path$iv2 = (Path) pathTreeWalk$dfsIterator$1.L$5;
                this_$iv2 = (PathTreeWalk) pathTreeWalk$dfsIterator$1.L$4;
                startNode2 = (PathNode) pathTreeWalk$dfsIterator$1.L$3;
                entriesReader2 = (DirectoryEntriesReader) pathTreeWalk$dfsIterator$1.L$2;
                stack2 = (ArrayDeque) pathTreeWalk$dfsIterator$1.L$1;
                $this$iterator2 = (SequenceScope) pathTreeWalk$dfsIterator$1.L$0;
                ResultKt.throwOnFailure($result);
                path$iv = path$iv2;
                entriesReader = entriesReader2;
                this_$iv = this_$iv2;
                stack = stack2;
                startNode = startNode2;
                $this$iterator = $this$iterator2;
                LinkOption[] linkOptions22 = this_$iv.getLinkOptions();
                linkOptionArr = (LinkOption[]) Arrays.copyOf(linkOptions22, linkOptions22.length);
                if (Files.isDirectory(path$iv, (LinkOption[]) Arrays.copyOf(linkOptionArr, linkOptionArr.length))) {
                }
                while (!stack.isEmpty()) {
                }
                return Unit.INSTANCE;
            case 2:
                pathTreeWalk$dfsIterator$1 = this;
                entriesReader = (DirectoryEntriesReader) pathTreeWalk$dfsIterator$1.L$2;
                stack = (ArrayDeque) pathTreeWalk$dfsIterator$1.L$1;
                $this$iterator = (SequenceScope) pathTreeWalk$dfsIterator$1.L$0;
                ResultKt.throwOnFailure($result);
                while (!stack.isEmpty()) {
                }
                return Unit.INSTANCE;
            case 3:
                pathTreeWalk$dfsIterator$1 = this;
                pathNode = null;
                path$iv3 = (Path) pathTreeWalk$dfsIterator$1.L$5;
                this_$iv3 = (PathTreeWalk) pathTreeWalk$dfsIterator$1.L$4;
                pathNode2 = (PathNode) pathTreeWalk$dfsIterator$1.L$3;
                entriesReader3 = (DirectoryEntriesReader) pathTreeWalk$dfsIterator$1.L$2;
                stack3 = (ArrayDeque) pathTreeWalk$dfsIterator$1.L$1;
                $this$iterator3 = (SequenceScope) pathTreeWalk$dfsIterator$1.L$0;
                ResultKt.throwOnFailure($result);
                path$iv4 = path$iv3;
                entriesReader = entriesReader3;
                this_$iv4 = this_$iv3;
                stack = stack3;
                pathNode3 = pathNode2;
                $this$iterator = $this$iterator3;
                LinkOption[] linkOptions42 = this_$iv4.getLinkOptions();
                linkOptionArr2 = (LinkOption[]) Arrays.copyOf(linkOptions42, linkOptions42.length);
                if (Files.isDirectory(path$iv4, (LinkOption[]) Arrays.copyOf(linkOptionArr2, linkOptionArr2.length))) {
                }
                while (!stack.isEmpty()) {
                }
                return Unit.INSTANCE;
            case 4:
                pathTreeWalk$dfsIterator$1 = this;
                entriesReader = (DirectoryEntriesReader) pathTreeWalk$dfsIterator$1.L$2;
                stack = (ArrayDeque) pathTreeWalk$dfsIterator$1.L$1;
                $this$iterator = (SequenceScope) pathTreeWalk$dfsIterator$1.L$0;
                ResultKt.throwOnFailure($result);
                while (!stack.isEmpty()) {
                }
                return Unit.INSTANCE;
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }
}
