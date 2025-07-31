package androidx.fragment.app;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.content.Context;
import android.graphics.Rect;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import androidx.collection.ArrayMap;
import androidx.core.app.SharedElementCallback;
import androidx.core.os.CancellationSignal;
import androidx.core.util.Preconditions;
import androidx.core.view.OneShotPreDrawListener;
import androidx.core.view.ViewCompat;
import androidx.core.view.ViewGroupCompat;
import androidx.fragment.app.FragmentAnim;
import androidx.fragment.app.SpecialEffectsController;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
class DefaultSpecialEffectsController extends SpecialEffectsController {
    DefaultSpecialEffectsController(ViewGroup container) {
        super(container);
    }

    @Override // androidx.fragment.app.SpecialEffectsController
    void executeOperations(List<SpecialEffectsController.Operation> operations, boolean isPop) {
        SpecialEffectsController.Operation firstOut = null;
        SpecialEffectsController.Operation lastIn = null;
        for (SpecialEffectsController.Operation operation : operations) {
            SpecialEffectsController.Operation.State currentState = SpecialEffectsController.Operation.State.from(operation.getFragment().mView);
            switch (AnonymousClass10.$SwitchMap$androidx$fragment$app$SpecialEffectsController$Operation$State[operation.getFinalState().ordinal()]) {
                case 1:
                case 2:
                case 3:
                    if (currentState == SpecialEffectsController.Operation.State.VISIBLE && firstOut == null) {
                        firstOut = operation;
                        break;
                    }
                    break;
                case 4:
                    if (currentState != SpecialEffectsController.Operation.State.VISIBLE) {
                        lastIn = operation;
                        break;
                    } else {
                        break;
                    }
            }
        }
        if (FragmentManager.isLoggingEnabled(2)) {
            Log.v(FragmentManager.TAG, "Executing operations from " + firstOut + " to " + lastIn);
        }
        List<AnimationInfo> animations = new ArrayList<>();
        List<TransitionInfo> transitions = new ArrayList<>();
        final List<SpecialEffectsController.Operation> awaitingContainerChanges = new ArrayList<>(operations);
        syncAnimations(operations);
        Iterator<SpecialEffectsController.Operation> it = operations.iterator();
        while (it.hasNext()) {
            final SpecialEffectsController.Operation operation2 = it.next();
            CancellationSignal animCancellationSignal = new CancellationSignal();
            operation2.markStartedSpecialEffect(animCancellationSignal);
            animations.add(new AnimationInfo(operation2, animCancellationSignal, isPop));
            CancellationSignal transitionCancellationSignal = new CancellationSignal();
            operation2.markStartedSpecialEffect(transitionCancellationSignal);
            transitions.add(new TransitionInfo(operation2, transitionCancellationSignal, isPop, !isPop ? operation2 != lastIn : operation2 != firstOut));
            operation2.addCompletionListener(new Runnable() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.1
                @Override // java.lang.Runnable
                public void run() {
                    if (awaitingContainerChanges.contains(operation2)) {
                        awaitingContainerChanges.remove(operation2);
                        DefaultSpecialEffectsController.this.applyContainerChanges(operation2);
                    }
                }
            });
        }
        Map<SpecialEffectsController.Operation, Boolean> startedTransitions = startTransitions(transitions, awaitingContainerChanges, isPop, firstOut, lastIn);
        boolean startedAnyTransition = startedTransitions.containsValue(true);
        startAnimations(animations, awaitingContainerChanges, startedAnyTransition, startedTransitions);
        Iterator<SpecialEffectsController.Operation> it2 = awaitingContainerChanges.iterator();
        while (it2.hasNext()) {
            applyContainerChanges(it2.next());
        }
        awaitingContainerChanges.clear();
        if (FragmentManager.isLoggingEnabled(2)) {
            Log.v(FragmentManager.TAG, "Completed executing operations from " + firstOut + " to " + lastIn);
        }
    }

    /* renamed from: androidx.fragment.app.DefaultSpecialEffectsController$10, reason: invalid class name */
    static /* synthetic */ class AnonymousClass10 {
        static final /* synthetic */ int[] $SwitchMap$androidx$fragment$app$SpecialEffectsController$Operation$State;

        static {
            int[] iArr = new int[SpecialEffectsController.Operation.State.values().length];
            $SwitchMap$androidx$fragment$app$SpecialEffectsController$Operation$State = iArr;
            try {
                iArr[SpecialEffectsController.Operation.State.GONE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$androidx$fragment$app$SpecialEffectsController$Operation$State[SpecialEffectsController.Operation.State.INVISIBLE.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$androidx$fragment$app$SpecialEffectsController$Operation$State[SpecialEffectsController.Operation.State.REMOVED.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$androidx$fragment$app$SpecialEffectsController$Operation$State[SpecialEffectsController.Operation.State.VISIBLE.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
        }
    }

    private void syncAnimations(List<SpecialEffectsController.Operation> operations) {
        Fragment lastOpFragment = operations.get(operations.size() - 1).getFragment();
        for (SpecialEffectsController.Operation operation : operations) {
            operation.getFragment().mAnimationInfo.mEnterAnim = lastOpFragment.mAnimationInfo.mEnterAnim;
            operation.getFragment().mAnimationInfo.mExitAnim = lastOpFragment.mAnimationInfo.mExitAnim;
            operation.getFragment().mAnimationInfo.mPopEnterAnim = lastOpFragment.mAnimationInfo.mPopEnterAnim;
            operation.getFragment().mAnimationInfo.mPopExitAnim = lastOpFragment.mAnimationInfo.mPopExitAnim;
        }
    }

    /* JADX WARN: Incorrect condition in loop: B:3:0x001d */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void startAnimations(List<AnimationInfo> animationInfos, List<SpecialEffectsController.Operation> awaitingContainerChanges, boolean startedAnyTransition, Map<SpecialEffectsController.Operation, Boolean> startedTransitions) {
        boolean startedAnyAnimator;
        View viewToAnimate;
        final SpecialEffectsController.Operation operation;
        final ViewGroup container = getContainer();
        Context context = container.getContext();
        ArrayList<AnimationInfo> animationsToRun = new ArrayList<>();
        Iterator<AnimationInfo> it = animationInfos.iterator();
        boolean startedAnyAnimator2 = false;
        while (startedAnyAnimator) {
            final AnimationInfo animationInfo = it.next();
            if (animationInfo.isVisibilityUnchanged()) {
                animationInfo.completeSpecialEffect();
            } else {
                FragmentAnim.AnimationOrAnimator anim = animationInfo.getAnimation(context);
                if (anim == null) {
                    animationInfo.completeSpecialEffect();
                } else {
                    final Animator animator = anim.animator;
                    if (animator == null) {
                        animationsToRun.add(animationInfo);
                    } else {
                        final SpecialEffectsController.Operation operation2 = animationInfo.getOperation();
                        Fragment fragment = operation2.getFragment();
                        boolean startedTransition = Boolean.TRUE.equals(startedTransitions.get(operation2));
                        if (startedTransition) {
                            if (FragmentManager.isLoggingEnabled(2)) {
                                Log.v(FragmentManager.TAG, "Ignoring Animator set on " + fragment + " as this Fragment was involved in a Transition.");
                            }
                            animationInfo.completeSpecialEffect();
                        } else {
                            final boolean isHideOperation = operation2.getFinalState() == SpecialEffectsController.Operation.State.GONE;
                            if (isHideOperation) {
                                awaitingContainerChanges.remove(operation2);
                            }
                            final View viewToAnimate2 = fragment.mView;
                            container.startViewTransition(viewToAnimate2);
                            animator.addListener(new AnimatorListenerAdapter() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.2
                                @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                                public void onAnimationEnd(Animator anim2) {
                                    container.endViewTransition(viewToAnimate2);
                                    if (isHideOperation) {
                                        operation2.getFinalState().applyState(viewToAnimate2);
                                    }
                                    animationInfo.completeSpecialEffect();
                                    if (FragmentManager.isLoggingEnabled(2)) {
                                        Log.v(FragmentManager.TAG, "Animator from operation " + operation2 + " has ended.");
                                    }
                                }
                            });
                            animator.setTarget(viewToAnimate2);
                            animator.start();
                            if (!FragmentManager.isLoggingEnabled(2)) {
                                operation = operation2;
                            } else {
                                operation = operation2;
                                Log.v(FragmentManager.TAG, "Animator from operation " + operation + " has started.");
                            }
                            CancellationSignal signal = animationInfo.getSignal();
                            signal.setOnCancelListener(new CancellationSignal.OnCancelListener() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.3
                                @Override // androidx.core.os.CancellationSignal.OnCancelListener
                                public void onCancel() {
                                    animator.end();
                                    if (FragmentManager.isLoggingEnabled(2)) {
                                        Log.v(FragmentManager.TAG, "Animator from operation " + operation + " has been canceled.");
                                    }
                                }
                            });
                            startedAnyAnimator2 = true;
                        }
                    }
                }
            }
        }
        Iterator<AnimationInfo> it2 = animationsToRun.iterator();
        while (it2.hasNext()) {
            final AnimationInfo animationInfo2 = it2.next();
            final SpecialEffectsController.Operation operation3 = animationInfo2.getOperation();
            Fragment fragment2 = operation3.getFragment();
            if (startedAnyTransition) {
                if (FragmentManager.isLoggingEnabled(2)) {
                    Log.v(FragmentManager.TAG, "Ignoring Animation set on " + fragment2 + " as Animations cannot run alongside Transitions.");
                }
                animationInfo2.completeSpecialEffect();
            } else if (startedAnyAnimator2) {
                if (FragmentManager.isLoggingEnabled(2)) {
                    Log.v(FragmentManager.TAG, "Ignoring Animation set on " + fragment2 + " as Animations cannot run alongside Animators.");
                }
                animationInfo2.completeSpecialEffect();
            } else {
                final View viewToAnimate3 = fragment2.mView;
                Animation anim2 = (Animation) Preconditions.checkNotNull(((FragmentAnim.AnimationOrAnimator) Preconditions.checkNotNull(animationInfo2.getAnimation(context))).animation);
                SpecialEffectsController.Operation.State finalState = operation3.getFinalState();
                if (finalState != SpecialEffectsController.Operation.State.REMOVED) {
                    viewToAnimate3.startAnimation(anim2);
                    animationInfo2.completeSpecialEffect();
                    viewToAnimate = viewToAnimate3;
                    startedAnyAnimator = startedAnyAnimator2;
                } else {
                    container.startViewTransition(viewToAnimate3);
                    Animation animation = new FragmentAnim.EndViewTransitionAnimation(anim2, container, viewToAnimate3);
                    startedAnyAnimator = startedAnyAnimator2;
                    final ViewGroup viewGroup = container;
                    animation.setAnimationListener(new Animation.AnimationListener() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.4
                        @Override // android.view.animation.Animation.AnimationListener
                        public void onAnimationStart(Animation animation2) {
                            if (FragmentManager.isLoggingEnabled(2)) {
                                Log.v(FragmentManager.TAG, "Animation from operation " + operation3 + " has reached onAnimationStart.");
                            }
                        }

                        @Override // android.view.animation.Animation.AnimationListener
                        public void onAnimationEnd(Animation animation2) {
                            viewGroup.post(new Runnable() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.4.1
                                @Override // java.lang.Runnable
                                public void run() {
                                    viewGroup.endViewTransition(viewToAnimate3);
                                    animationInfo2.completeSpecialEffect();
                                }
                            });
                            if (FragmentManager.isLoggingEnabled(2)) {
                                Log.v(FragmentManager.TAG, "Animation from operation " + operation3 + " has ended.");
                            }
                        }

                        @Override // android.view.animation.Animation.AnimationListener
                        public void onAnimationRepeat(Animation animation2) {
                        }
                    });
                    viewToAnimate = viewToAnimate3;
                    viewToAnimate.startAnimation(animation);
                    if (FragmentManager.isLoggingEnabled(2)) {
                        Log.v(FragmentManager.TAG, "Animation from operation " + operation3 + " has started.");
                    }
                }
                CancellationSignal signal2 = animationInfo2.getSignal();
                final View view = viewToAnimate;
                final ViewGroup viewGroup2 = container;
                signal2.setOnCancelListener(new CancellationSignal.OnCancelListener() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.5
                    @Override // androidx.core.os.CancellationSignal.OnCancelListener
                    public void onCancel() {
                        view.clearAnimation();
                        viewGroup2.endViewTransition(view);
                        animationInfo2.completeSpecialEffect();
                        if (FragmentManager.isLoggingEnabled(2)) {
                            Log.v(FragmentManager.TAG, "Animation from operation " + operation3 + " has been cancelled.");
                        }
                    }
                });
                startedAnyAnimator2 = startedAnyAnimator;
                container = container;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:201:0x05a3, code lost:
    
        if (r13 == r42) goto L170;
     */
    /* JADX WARN: Removed duplicated region for block: B:211:0x05c3  */
    /* JADX WARN: Removed duplicated region for block: B:216:0x05fa  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private Map<SpecialEffectsController.Operation, Boolean> startTransitions(List<TransitionInfo> transitionInfos, List<SpecialEffectsController.Operation> awaitingContainerChanges, final boolean isPop, final SpecialEffectsController.Operation firstOut, final SpecialEffectsController.Operation lastIn) {
        String str;
        boolean involvedInSharedElementTransition;
        Iterator<TransitionInfo> it;
        Object mergedNonOverlappingTransition;
        ArrayList<View> sharedElementFirstOutViews;
        View nonExistentView;
        String str2;
        ArrayList<View> sharedElementLastInViews;
        Object transition;
        View firstOutEpicenterView;
        Rect lastInEpicenterRect;
        ArrayMap<String, String> sharedElementNameMapping;
        ArrayList<View> sharedElementFirstOutViews2;
        final Rect lastInEpicenterRect2;
        View nonExistentView2;
        ArrayMap<String, String> sharedElementNameMapping2;
        SpecialEffectsController.Operation operation;
        Map<SpecialEffectsController.Operation, Boolean> startedTransitions;
        ArrayList<View> sharedElementLastInViews2;
        FragmentTransitionImpl transitionImpl;
        View firstOutEpicenterView2;
        SharedElementCallback exitingCallback;
        SharedElementCallback exitingCallback2;
        ArrayList<String> exitingNames;
        SharedElementCallback exitingCallback3;
        SharedElementCallback enteringCallback;
        ArrayList<String> exitingNames2;
        SharedElementCallback exitingCallback4;
        boolean z = isPop;
        SpecialEffectsController.Operation operation2 = firstOut;
        SpecialEffectsController.Operation operation3 = lastIn;
        Map<SpecialEffectsController.Operation, Boolean> startedTransitions2 = new HashMap<>();
        FragmentTransitionImpl transitionImpl2 = null;
        for (TransitionInfo transitionInfo : transitionInfos) {
            if (!transitionInfo.isVisibilityUnchanged()) {
                FragmentTransitionImpl handlingImpl = transitionInfo.getHandlingImpl();
                if (transitionImpl2 == null) {
                    transitionImpl2 = handlingImpl;
                } else if (handlingImpl != null && transitionImpl2 != handlingImpl) {
                    throw new IllegalArgumentException("Mixing framework transitions and AndroidX transitions is not allowed. Fragment " + transitionInfo.getOperation().getFragment() + " returned Transition " + transitionInfo.getTransition() + " which uses a different Transition  type than other Fragments.");
                }
            }
        }
        if (transitionImpl2 == null) {
            for (TransitionInfo transitionInfo2 : transitionInfos) {
                startedTransitions2.put(transitionInfo2.getOperation(), false);
                transitionInfo2.completeSpecialEffect();
            }
            return startedTransitions2;
        }
        View nonExistentView3 = new View(getContainer().getContext());
        Object sharedElementTransition = null;
        Rect lastInEpicenterRect3 = new Rect();
        ArrayList<View> sharedElementFirstOutViews3 = new ArrayList<>();
        ArrayList<View> sharedElementLastInViews3 = new ArrayList<>();
        ArrayMap<String, String> sharedElementNameMapping3 = new ArrayMap<>();
        Iterator<TransitionInfo> it2 = transitionInfos.iterator();
        View firstOutEpicenterView3 = null;
        boolean hasLastInEpicenter = false;
        while (true) {
            boolean hasNext = it2.hasNext();
            str = FragmentManager.TAG;
            if (!hasNext) {
                break;
            }
            TransitionInfo transitionInfo3 = it2.next();
            boolean hasSharedElementTransition = transitionInfo3.hasSharedElementTransition();
            if (hasSharedElementTransition && operation2 != null && operation3 != null) {
                Object sharedElementTransition2 = transitionImpl2.wrapTransitionInSet(transitionImpl2.cloneTransition(transitionInfo3.getSharedElementTransition()));
                ArrayList<String> exitingNames3 = lastIn.getFragment().getSharedElementSourceNames();
                ArrayList<String> firstOutSourceNames = firstOut.getFragment().getSharedElementSourceNames();
                Map<SpecialEffectsController.Operation, Boolean> startedTransitions3 = startedTransitions2;
                ArrayList<String> firstOutTargetNames = firstOut.getFragment().getSharedElementTargetNames();
                int index = 0;
                while (true) {
                    firstOutEpicenterView2 = firstOutEpicenterView3;
                    if (index >= firstOutTargetNames.size()) {
                        break;
                    }
                    int nameIndex = exitingNames3.indexOf(firstOutTargetNames.get(index));
                    ArrayList<String> firstOutTargetNames2 = firstOutTargetNames;
                    if (nameIndex != -1) {
                        exitingNames3.set(nameIndex, firstOutSourceNames.get(index));
                    }
                    index++;
                    firstOutEpicenterView3 = firstOutEpicenterView2;
                    firstOutTargetNames = firstOutTargetNames2;
                }
                ArrayList<String> enteringNames = lastIn.getFragment().getSharedElementTargetNames();
                if (!z) {
                    SharedElementCallback exitingCallback5 = firstOut.getFragment().getExitTransitionCallback();
                    exitingCallback = exitingCallback5;
                    exitingCallback2 = lastIn.getFragment().getEnterTransitionCallback();
                } else {
                    SharedElementCallback exitingCallback6 = firstOut.getFragment().getEnterTransitionCallback();
                    exitingCallback = exitingCallback6;
                    exitingCallback2 = lastIn.getFragment().getExitTransitionCallback();
                }
                View nonExistentView4 = nonExistentView3;
                int numSharedElements = exitingNames3.size();
                int i = 0;
                while (i < numSharedElements) {
                    int numSharedElements2 = numSharedElements;
                    String exitingName = exitingNames3.get(i);
                    Rect lastInEpicenterRect4 = lastInEpicenterRect3;
                    String enteringName = enteringNames.get(i);
                    sharedElementNameMapping3.put(exitingName, enteringName);
                    i++;
                    numSharedElements = numSharedElements2;
                    lastInEpicenterRect3 = lastInEpicenterRect4;
                }
                Rect lastInEpicenterRect5 = lastInEpicenterRect3;
                if (FragmentManager.isLoggingEnabled(2)) {
                    Log.v(FragmentManager.TAG, ">>> entering view names <<<");
                    for (Iterator<String> it3 = enteringNames.iterator(); it3.hasNext(); it3 = it3) {
                        Log.v(FragmentManager.TAG, "Name: " + it3.next());
                    }
                    Log.v(FragmentManager.TAG, ">>> exiting view names <<<");
                    for (Iterator<String> it4 = exitingNames3.iterator(); it4.hasNext(); it4 = it4) {
                        Log.v(FragmentManager.TAG, "Name: " + it4.next());
                    }
                }
                ArrayMap<String, View> firstOutViews = new ArrayMap<>();
                findNamedViews(firstOutViews, firstOut.getFragment().mView);
                firstOutViews.retainAll(exitingNames3);
                if (exitingCallback != null) {
                    if (FragmentManager.isLoggingEnabled(2)) {
                        Log.v(FragmentManager.TAG, "Executing exit callback for operation " + operation2);
                    }
                    exitingCallback.onMapSharedElements(exitingNames3, firstOutViews);
                    int i2 = exitingNames3.size() - 1;
                    while (i2 >= 0) {
                        String name = exitingNames3.get(i2);
                        View view = firstOutViews.get(name);
                        if (view == null) {
                            sharedElementNameMapping3.remove(name);
                            exitingNames2 = exitingNames3;
                            exitingCallback4 = exitingCallback;
                        } else {
                            exitingNames2 = exitingNames3;
                            if (name.equals(ViewCompat.getTransitionName(view))) {
                                exitingCallback4 = exitingCallback;
                            } else {
                                String targetValue = sharedElementNameMapping3.remove(name);
                                exitingCallback4 = exitingCallback;
                                sharedElementNameMapping3.put(ViewCompat.getTransitionName(view), targetValue);
                            }
                        }
                        i2--;
                        exitingNames3 = exitingNames2;
                        exitingCallback = exitingCallback4;
                    }
                    exitingNames = exitingNames3;
                    exitingCallback3 = exitingCallback;
                } else {
                    exitingNames = exitingNames3;
                    exitingCallback3 = exitingCallback;
                    sharedElementNameMapping3.retainAll(firstOutViews.keySet());
                }
                final ArrayMap<String, View> lastInViews = new ArrayMap<>();
                findNamedViews(lastInViews, lastIn.getFragment().mView);
                lastInViews.retainAll(enteringNames);
                lastInViews.retainAll(sharedElementNameMapping3.values());
                if (exitingCallback2 != null) {
                    if (FragmentManager.isLoggingEnabled(2)) {
                        Log.v(FragmentManager.TAG, "Executing enter callback for operation " + operation3);
                    }
                    exitingCallback2.onMapSharedElements(enteringNames, lastInViews);
                    int i3 = enteringNames.size() - 1;
                    while (i3 >= 0) {
                        String name2 = enteringNames.get(i3);
                        View view2 = lastInViews.get(name2);
                        if (view2 == null) {
                            String key = FragmentTransition.findKeyForValue(sharedElementNameMapping3, name2);
                            if (key != null) {
                                sharedElementNameMapping3.remove(key);
                            }
                            enteringCallback = exitingCallback2;
                        } else if (name2.equals(ViewCompat.getTransitionName(view2))) {
                            enteringCallback = exitingCallback2;
                        } else {
                            String key2 = FragmentTransition.findKeyForValue(sharedElementNameMapping3, name2);
                            if (key2 == null) {
                                enteringCallback = exitingCallback2;
                            } else {
                                enteringCallback = exitingCallback2;
                                sharedElementNameMapping3.put(key2, ViewCompat.getTransitionName(view2));
                            }
                        }
                        i3--;
                        exitingCallback2 = enteringCallback;
                    }
                } else {
                    FragmentTransition.retainValues(sharedElementNameMapping3, lastInViews);
                }
                retainMatchingViews(firstOutViews, sharedElementNameMapping3.keySet());
                retainMatchingViews(lastInViews, sharedElementNameMapping3.values());
                if (sharedElementNameMapping3.isEmpty()) {
                    sharedElementTransition = null;
                    sharedElementFirstOutViews3.clear();
                    sharedElementLastInViews3.clear();
                    sharedElementNameMapping = sharedElementNameMapping3;
                    operation = operation3;
                    sharedElementFirstOutViews2 = sharedElementFirstOutViews3;
                    firstOutEpicenterView3 = firstOutEpicenterView2;
                    startedTransitions = startedTransitions3;
                    nonExistentView2 = nonExistentView4;
                    lastInEpicenterRect2 = lastInEpicenterRect5;
                    sharedElementNameMapping2 = null;
                    FragmentTransitionImpl fragmentTransitionImpl = transitionImpl2;
                    sharedElementLastInViews2 = sharedElementLastInViews3;
                    transitionImpl = fragmentTransitionImpl;
                } else {
                    FragmentTransition.callSharedElementStartEnd(lastIn.getFragment(), firstOut.getFragment(), z, firstOutViews, true);
                    sharedElementNameMapping = sharedElementNameMapping3;
                    ArrayList<View> sharedElementLastInViews4 = sharedElementLastInViews3;
                    OneShotPreDrawListener.add(getContainer(), new Runnable() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.6
                        @Override // java.lang.Runnable
                        public void run() {
                            FragmentTransition.callSharedElementStartEnd(lastIn.getFragment(), firstOut.getFragment(), isPop, lastInViews, false);
                        }
                    });
                    sharedElementFirstOutViews3.addAll(firstOutViews.values());
                    if (exitingNames.isEmpty()) {
                        firstOutEpicenterView3 = firstOutEpicenterView2;
                    } else {
                        String epicenterViewName = exitingNames.get(0);
                        firstOutEpicenterView3 = firstOutViews.get(epicenterViewName);
                        transitionImpl2.setEpicenter(sharedElementTransition2, firstOutEpicenterView3);
                    }
                    sharedElementLastInViews4.addAll(lastInViews.values());
                    if (enteringNames.isEmpty()) {
                        lastInEpicenterRect2 = lastInEpicenterRect5;
                    } else {
                        String epicenterViewName2 = enteringNames.get(0);
                        final View lastInEpicenterView = lastInViews.get(epicenterViewName2);
                        if (lastInEpicenterView == null) {
                            lastInEpicenterRect2 = lastInEpicenterRect5;
                        } else {
                            hasLastInEpicenter = true;
                            final FragmentTransitionImpl impl = transitionImpl2;
                            lastInEpicenterRect2 = lastInEpicenterRect5;
                            OneShotPreDrawListener.add(getContainer(), new Runnable() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.7
                                @Override // java.lang.Runnable
                                public void run() {
                                    impl.getBoundsOnScreen(lastInEpicenterView, lastInEpicenterRect2);
                                }
                            });
                        }
                    }
                    nonExistentView2 = nonExistentView4;
                    transitionImpl2.setSharedElementTargets(sharedElementTransition2, nonExistentView2, sharedElementFirstOutViews3);
                    sharedElementFirstOutViews2 = sharedElementFirstOutViews3;
                    sharedElementNameMapping2 = null;
                    transitionImpl = transitionImpl2;
                    transitionImpl2.scheduleRemoveTargets(sharedElementTransition2, null, null, null, null, sharedElementTransition2, sharedElementLastInViews4);
                    sharedElementLastInViews2 = sharedElementLastInViews4;
                    startedTransitions = startedTransitions3;
                    operation2 = firstOut;
                    startedTransitions.put(operation2, true);
                    operation = lastIn;
                    startedTransitions.put(operation, true);
                    sharedElementTransition = sharedElementTransition2;
                }
            } else {
                sharedElementNameMapping = sharedElementNameMapping3;
                sharedElementFirstOutViews2 = sharedElementFirstOutViews3;
                lastInEpicenterRect2 = lastInEpicenterRect3;
                nonExistentView2 = nonExistentView3;
                sharedElementNameMapping2 = null;
                operation = operation3;
                startedTransitions = startedTransitions2;
                FragmentTransitionImpl fragmentTransitionImpl2 = transitionImpl2;
                sharedElementLastInViews2 = sharedElementLastInViews3;
                transitionImpl = fragmentTransitionImpl2;
                firstOutEpicenterView3 = firstOutEpicenterView3;
            }
            z = isPop;
            lastInEpicenterRect3 = lastInEpicenterRect2;
            startedTransitions2 = startedTransitions;
            operation3 = operation;
            sharedElementNameMapping3 = sharedElementNameMapping;
            sharedElementFirstOutViews3 = sharedElementFirstOutViews2;
            nonExistentView3 = nonExistentView2;
            ArrayList<View> arrayList = sharedElementLastInViews2;
            transitionImpl2 = transitionImpl;
            sharedElementLastInViews3 = arrayList;
        }
        View firstOutEpicenterView4 = firstOutEpicenterView3;
        ArrayMap<String, String> sharedElementNameMapping4 = sharedElementNameMapping3;
        ArrayList<View> sharedElementFirstOutViews4 = sharedElementFirstOutViews3;
        Rect lastInEpicenterRect6 = lastInEpicenterRect3;
        View nonExistentView5 = nonExistentView3;
        boolean z2 = false;
        SpecialEffectsController.Operation operation4 = operation3;
        Map<SpecialEffectsController.Operation, Boolean> startedTransitions4 = startedTransitions2;
        FragmentTransitionImpl transitionImpl3 = transitionImpl2;
        ArrayList<View> sharedElementLastInViews5 = sharedElementLastInViews3;
        ArrayList<View> enteringViews = new ArrayList<>();
        Object mergedTransition = null;
        Object mergedNonOverlappingTransition2 = null;
        for (TransitionInfo transitionInfo4 : transitionInfos) {
            if (transitionInfo4.isVisibilityUnchanged()) {
                startedTransitions4.put(transitionInfo4.getOperation(), Boolean.valueOf(z2));
                transitionInfo4.completeSpecialEffect();
            } else {
                Object transition2 = transitionImpl3.cloneTransition(transitionInfo4.getTransition());
                SpecialEffectsController.Operation operation5 = transitionInfo4.getOperation();
                boolean involvedInSharedElementTransition2 = (sharedElementTransition == null || !(operation5 == operation2 || operation5 == operation4)) ? z2 : true;
                if (transition2 == null) {
                    if (!involvedInSharedElementTransition2) {
                        startedTransitions4.put(operation5, Boolean.valueOf(z2));
                        transitionInfo4.completeSpecialEffect();
                    }
                    lastInEpicenterRect = lastInEpicenterRect6;
                    nonExistentView = nonExistentView5;
                    str2 = str;
                    sharedElementLastInViews = sharedElementLastInViews5;
                    firstOutEpicenterView = firstOutEpicenterView4;
                } else {
                    final ArrayList<View> transitioningViews = new ArrayList<>();
                    captureTransitioningViews(transitioningViews, operation5.getFragment().mView);
                    if (!involvedInSharedElementTransition2) {
                        sharedElementFirstOutViews = sharedElementFirstOutViews4;
                    } else if (operation5 == operation2) {
                        sharedElementFirstOutViews = sharedElementFirstOutViews4;
                        transitioningViews.removeAll(sharedElementFirstOutViews);
                    } else {
                        sharedElementFirstOutViews = sharedElementFirstOutViews4;
                        transitioningViews.removeAll(sharedElementLastInViews5);
                    }
                    if (transitioningViews.isEmpty()) {
                        transitionImpl3.addTarget(transition2, nonExistentView5);
                        nonExistentView = nonExistentView5;
                        sharedElementFirstOutViews4 = sharedElementFirstOutViews;
                        str2 = str;
                        sharedElementLastInViews = sharedElementLastInViews5;
                        transition = transition2;
                    } else {
                        transitionImpl3.addTargets(transition2, transitioningViews);
                        nonExistentView = nonExistentView5;
                        str2 = str;
                        sharedElementFirstOutViews4 = sharedElementFirstOutViews;
                        sharedElementLastInViews = sharedElementLastInViews5;
                        transitionImpl3.scheduleRemoveTargets(transition2, transition2, transitioningViews, null, null, null, null);
                        if (operation5.getFinalState() != SpecialEffectsController.Operation.State.GONE) {
                            operation5 = operation5;
                            transition = transition2;
                            transitioningViews = transitioningViews;
                        } else {
                            operation5 = operation5;
                            awaitingContainerChanges.remove(operation5);
                            transitioningViews = transitioningViews;
                            ArrayList<View> transitioningViewsToHide = new ArrayList<>(transitioningViews);
                            transitioningViewsToHide.remove(operation5.getFragment().mView);
                            transition = transition2;
                            transitionImpl3.scheduleHideFragmentView(transition, operation5.getFragment().mView, transitioningViewsToHide);
                            OneShotPreDrawListener.add(getContainer(), new Runnable() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.8
                                @Override // java.lang.Runnable
                                public void run() {
                                    FragmentTransition.setViewVisibility(transitioningViews, 4);
                                }
                            });
                        }
                    }
                    if (operation5.getFinalState() == SpecialEffectsController.Operation.State.VISIBLE) {
                        enteringViews.addAll(transitioningViews);
                        if (!hasLastInEpicenter) {
                            firstOutEpicenterView = firstOutEpicenterView4;
                        } else {
                            transitionImpl3.setEpicenter(transition, lastInEpicenterRect6);
                            firstOutEpicenterView = firstOutEpicenterView4;
                        }
                    } else {
                        firstOutEpicenterView = firstOutEpicenterView4;
                        transitionImpl3.setEpicenter(transition, firstOutEpicenterView);
                    }
                    startedTransitions4.put(operation5, true);
                    lastInEpicenterRect = lastInEpicenterRect6;
                    if (transitionInfo4.isOverlapAllowed()) {
                        mergedTransition = transitionImpl3.mergeTransitionsTogether(mergedTransition, transition, null);
                    } else {
                        Object mergedTransition2 = transitionImpl3.mergeTransitionsTogether(mergedNonOverlappingTransition2, transition, null);
                        mergedNonOverlappingTransition2 = mergedTransition2;
                    }
                }
                operation4 = lastIn;
                sharedElementLastInViews5 = sharedElementLastInViews;
                firstOutEpicenterView4 = firstOutEpicenterView;
                lastInEpicenterRect6 = lastInEpicenterRect;
                z2 = false;
                str = str2;
                nonExistentView5 = nonExistentView;
            }
        }
        String str3 = str;
        ArrayList<View> sharedElementLastInViews6 = sharedElementLastInViews5;
        Object mergedTransition3 = transitionImpl3.mergeTransitionsInSequence(mergedTransition, mergedNonOverlappingTransition2, sharedElementTransition);
        if (mergedTransition3 == null) {
            return startedTransitions4;
        }
        Iterator<TransitionInfo> it5 = transitionInfos.iterator();
        while (it5.hasNext()) {
            final TransitionInfo transitionInfo5 = it5.next();
            if (!transitionInfo5.isVisibilityUnchanged()) {
                Object transition3 = transitionInfo5.getTransition();
                final SpecialEffectsController.Operation operation6 = transitionInfo5.getOperation();
                if (sharedElementTransition != null) {
                    if (operation6 != operation2) {
                    }
                    involvedInSharedElementTransition = true;
                    if (transition3 != null && !involvedInSharedElementTransition) {
                        it = it5;
                        mergedNonOverlappingTransition = mergedNonOverlappingTransition2;
                    } else if (ViewCompat.isLaidOut(getContainer())) {
                        if (!FragmentManager.isLoggingEnabled(2)) {
                            it = it5;
                        } else {
                            it = it5;
                            Log.v(str3, "SpecialEffectsController: Container " + getContainer() + " has not been laid out. Completing operation " + operation6);
                        }
                        transitionInfo5.completeSpecialEffect();
                        mergedNonOverlappingTransition = mergedNonOverlappingTransition2;
                    } else {
                        it = it5;
                        mergedNonOverlappingTransition = mergedNonOverlappingTransition2;
                        transitionImpl3.setListenerForTransitionEnd(transitionInfo5.getOperation().getFragment(), mergedTransition3, transitionInfo5.getSignal(), new Runnable() { // from class: androidx.fragment.app.DefaultSpecialEffectsController.9
                            @Override // java.lang.Runnable
                            public void run() {
                                transitionInfo5.completeSpecialEffect();
                                if (FragmentManager.isLoggingEnabled(2)) {
                                    Log.v(FragmentManager.TAG, "Transition for operation " + operation6 + "has completed");
                                }
                            }
                        });
                    }
                    operation2 = firstOut;
                    it5 = it;
                    mergedNonOverlappingTransition2 = mergedNonOverlappingTransition;
                }
                involvedInSharedElementTransition = false;
                if (transition3 != null) {
                }
                if (ViewCompat.isLaidOut(getContainer())) {
                }
                operation2 = firstOut;
                it5 = it;
                mergedNonOverlappingTransition2 = mergedNonOverlappingTransition;
            }
        }
        if (!ViewCompat.isLaidOut(getContainer())) {
            return startedTransitions4;
        }
        FragmentTransition.setViewVisibility(enteringViews, 4);
        ArrayList<String> inNames = transitionImpl3.prepareSetNameOverridesReordered(sharedElementLastInViews6);
        if (FragmentManager.isLoggingEnabled(2)) {
            Log.v(str3, ">>>>> Beginning transition <<<<<");
            Log.v(str3, ">>>>> SharedElementFirstOutViews <<<<<");
            Iterator<View> it6 = sharedElementFirstOutViews4.iterator();
            while (it6.hasNext()) {
                View view3 = it6.next();
                Log.v(str3, "View: " + view3 + " Name: " + ViewCompat.getTransitionName(view3));
            }
            Log.v(str3, ">>>>> SharedElementLastInViews <<<<<");
            Iterator<View> it7 = sharedElementLastInViews6.iterator();
            while (it7.hasNext()) {
                View view4 = it7.next();
                Log.v(str3, "View: " + view4 + " Name: " + ViewCompat.getTransitionName(view4));
            }
        }
        transitionImpl3.beginDelayedTransition(getContainer(), mergedTransition3);
        transitionImpl3.setNameOverridesReordered(getContainer(), sharedElementFirstOutViews4, sharedElementLastInViews6, inNames, sharedElementNameMapping4);
        FragmentTransition.setViewVisibility(enteringViews, 0);
        transitionImpl3.swapSharedElementTargets(sharedElementTransition, sharedElementFirstOutViews4, sharedElementLastInViews6);
        return startedTransitions4;
    }

    void retainMatchingViews(ArrayMap<String, View> sharedElementViews, Collection<String> transitionNames) {
        Iterator<Map.Entry<String, View>> iterator = sharedElementViews.entrySet().iterator();
        while (iterator.hasNext()) {
            Map.Entry<String, View> entry = iterator.next();
            if (!transitionNames.contains(ViewCompat.getTransitionName(entry.getValue()))) {
                iterator.remove();
            }
        }
    }

    void captureTransitioningViews(ArrayList<View> transitioningViews, View view) {
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            if (ViewGroupCompat.isTransitionGroup(viewGroup)) {
                if (!transitioningViews.contains(view)) {
                    transitioningViews.add(viewGroup);
                    return;
                }
                return;
            }
            int count = viewGroup.getChildCount();
            for (int i = 0; i < count; i++) {
                View child = viewGroup.getChildAt(i);
                if (child.getVisibility() == 0) {
                    captureTransitioningViews(transitioningViews, child);
                }
            }
            return;
        }
        if (!transitioningViews.contains(view)) {
            transitioningViews.add(view);
        }
    }

    void findNamedViews(Map<String, View> namedViews, View view) {
        String transitionName = ViewCompat.getTransitionName(view);
        if (transitionName != null) {
            namedViews.put(transitionName, view);
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            int count = viewGroup.getChildCount();
            for (int i = 0; i < count; i++) {
                View child = viewGroup.getChildAt(i);
                if (child.getVisibility() == 0) {
                    findNamedViews(namedViews, child);
                }
            }
        }
    }

    void applyContainerChanges(SpecialEffectsController.Operation operation) {
        View view = operation.getFragment().mView;
        operation.getFinalState().applyState(view);
    }

    private static class SpecialEffectsInfo {
        private final SpecialEffectsController.Operation mOperation;
        private final CancellationSignal mSignal;

        SpecialEffectsInfo(SpecialEffectsController.Operation operation, CancellationSignal signal) {
            this.mOperation = operation;
            this.mSignal = signal;
        }

        SpecialEffectsController.Operation getOperation() {
            return this.mOperation;
        }

        CancellationSignal getSignal() {
            return this.mSignal;
        }

        boolean isVisibilityUnchanged() {
            SpecialEffectsController.Operation.State currentState = SpecialEffectsController.Operation.State.from(this.mOperation.getFragment().mView);
            SpecialEffectsController.Operation.State finalState = this.mOperation.getFinalState();
            return currentState == finalState || !(currentState == SpecialEffectsController.Operation.State.VISIBLE || finalState == SpecialEffectsController.Operation.State.VISIBLE);
        }

        void completeSpecialEffect() {
            this.mOperation.completeSpecialEffect(this.mSignal);
        }
    }

    private static class AnimationInfo extends SpecialEffectsInfo {
        private FragmentAnim.AnimationOrAnimator mAnimation;
        private boolean mIsPop;
        private boolean mLoadedAnim;

        AnimationInfo(SpecialEffectsController.Operation operation, CancellationSignal signal, boolean isPop) {
            super(operation, signal);
            this.mLoadedAnim = false;
            this.mIsPop = isPop;
        }

        FragmentAnim.AnimationOrAnimator getAnimation(Context context) {
            if (this.mLoadedAnim) {
                return this.mAnimation;
            }
            FragmentAnim.AnimationOrAnimator loadAnimation = FragmentAnim.loadAnimation(context, getOperation().getFragment(), getOperation().getFinalState() == SpecialEffectsController.Operation.State.VISIBLE, this.mIsPop);
            this.mAnimation = loadAnimation;
            this.mLoadedAnim = true;
            return loadAnimation;
        }
    }

    private static class TransitionInfo extends SpecialEffectsInfo {
        private final boolean mOverlapAllowed;
        private final Object mSharedElementTransition;
        private final Object mTransition;

        TransitionInfo(SpecialEffectsController.Operation operation, CancellationSignal signal, boolean isPop, boolean providesSharedElementTransition) {
            super(operation, signal);
            Object exitTransition;
            Object enterTransition;
            boolean allowEnterTransitionOverlap;
            if (operation.getFinalState() == SpecialEffectsController.Operation.State.VISIBLE) {
                if (isPop) {
                    enterTransition = operation.getFragment().getReenterTransition();
                } else {
                    enterTransition = operation.getFragment().getEnterTransition();
                }
                this.mTransition = enterTransition;
                if (isPop) {
                    allowEnterTransitionOverlap = operation.getFragment().getAllowReturnTransitionOverlap();
                } else {
                    allowEnterTransitionOverlap = operation.getFragment().getAllowEnterTransitionOverlap();
                }
                this.mOverlapAllowed = allowEnterTransitionOverlap;
            } else {
                if (isPop) {
                    exitTransition = operation.getFragment().getReturnTransition();
                } else {
                    exitTransition = operation.getFragment().getExitTransition();
                }
                this.mTransition = exitTransition;
                this.mOverlapAllowed = true;
            }
            if (providesSharedElementTransition) {
                if (isPop) {
                    this.mSharedElementTransition = operation.getFragment().getSharedElementReturnTransition();
                    return;
                } else {
                    this.mSharedElementTransition = operation.getFragment().getSharedElementEnterTransition();
                    return;
                }
            }
            this.mSharedElementTransition = null;
        }

        Object getTransition() {
            return this.mTransition;
        }

        boolean isOverlapAllowed() {
            return this.mOverlapAllowed;
        }

        public boolean hasSharedElementTransition() {
            return this.mSharedElementTransition != null;
        }

        public Object getSharedElementTransition() {
            return this.mSharedElementTransition;
        }

        FragmentTransitionImpl getHandlingImpl() {
            FragmentTransitionImpl transitionImpl = getHandlingImpl(this.mTransition);
            FragmentTransitionImpl sharedElementTransitionImpl = getHandlingImpl(this.mSharedElementTransition);
            if (transitionImpl == null || sharedElementTransitionImpl == null || transitionImpl == sharedElementTransitionImpl) {
                return transitionImpl != null ? transitionImpl : sharedElementTransitionImpl;
            }
            throw new IllegalArgumentException("Mixing framework transitions and AndroidX transitions is not allowed. Fragment " + getOperation().getFragment() + " returned Transition " + this.mTransition + " which uses a different Transition  type than its shared element transition " + this.mSharedElementTransition);
        }

        private FragmentTransitionImpl getHandlingImpl(Object transition) {
            if (transition == null) {
                return null;
            }
            if (FragmentTransition.PLATFORM_IMPL != null && FragmentTransition.PLATFORM_IMPL.canHandle(transition)) {
                return FragmentTransition.PLATFORM_IMPL;
            }
            if (FragmentTransition.SUPPORT_IMPL != null && FragmentTransition.SUPPORT_IMPL.canHandle(transition)) {
                return FragmentTransition.SUPPORT_IMPL;
            }
            throw new IllegalArgumentException("Transition " + transition + " for fragment " + getOperation().getFragment() + " is not a valid framework Transition or AndroidX Transition");
        }
    }
}
