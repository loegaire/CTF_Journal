package androidx.core.graphics;

import android.graphics.Bitmap;
import android.graphics.BlendMode;
import android.graphics.Canvas;
import android.graphics.ColorSpace;
import android.graphics.Paint;
import android.graphics.Rect;
import android.os.Build;

/* loaded from: classes.dex */
public final class BitmapCompat {
    public static boolean hasMipMap(Bitmap bitmap) {
        return bitmap.hasMipMap();
    }

    public static void setHasMipMap(Bitmap bitmap, boolean hasMipMap) {
        bitmap.setHasMipMap(hasMipMap);
    }

    public static int getAllocationByteCount(Bitmap bitmap) {
        return bitmap.getAllocationByteCount();
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x01f1  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x01fb  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x01fe  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x01f4  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x01a0  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x018e  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0187  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x019d  */
    /* JADX WARN: Type inference failed for: r3v15 */
    /* JADX WARN: Type inference failed for: r3v16, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r3v18 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Bitmap createScaledBitmap(Bitmap srcBm, int dstW, int dstH, Rect srcRect, boolean scaleInLinearSpace) {
        int srcX;
        int stepsX;
        Paint paint;
        int stepsY;
        int allocW;
        int allocH;
        int srcX2;
        int totalStepsY;
        int srcX3;
        Rect currRect;
        Rect nextRect;
        Bitmap dst;
        int stepsY2;
        int srcY;
        int srcY2;
        boolean lastStep;
        ?? r3;
        int i;
        int totalStepsY2;
        int i2 = dstW;
        int i3 = dstH;
        if (i2 <= 0 || i3 <= 0) {
            throw new IllegalArgumentException("dstW and dstH must be > 0!");
        }
        if (srcRect != null && (srcRect.isEmpty() || srcRect.left < 0 || srcRect.right > srcBm.getWidth() || srcRect.top < 0 || srcRect.bottom > srcBm.getHeight())) {
            throw new IllegalArgumentException("srcRect must be contained by srcBm!");
        }
        Bitmap src = Api27Impl.copyBitmapIfHardware(srcBm);
        int srcW = srcRect != null ? srcRect.width() : srcBm.getWidth();
        int srcH = srcRect != null ? srcRect.height() : srcBm.getHeight();
        float sx = i2 / srcW;
        float sy = i3 / srcH;
        int srcX4 = srcRect != null ? srcRect.left : 0;
        int srcY3 = srcRect != null ? srcRect.top : 0;
        if (srcX4 == 0 && srcY3 == 0 && i2 == srcBm.getWidth() && i3 == srcBm.getHeight()) {
            if (srcBm.isMutable() && srcBm == src) {
                return srcBm.copy(srcBm.getConfig(), true);
            }
            return src;
        }
        Paint paint2 = new Paint(1);
        paint2.setFilterBitmap(true);
        Api29Impl.setPaintBlendMode(paint2);
        if (srcW == i2 && srcH == i3) {
            Bitmap out = Bitmap.createBitmap(i2, i3, src.getConfig());
            Canvas canvasForCopy = new Canvas(out);
            canvasForCopy.drawBitmap(src, -srcX4, -srcY3, paint2);
            return out;
        }
        double log2 = Math.log(2.0d);
        if (sx > 1.0f) {
            srcX = srcX4;
            stepsX = (int) Math.ceil(Math.log(sx) / log2);
        } else {
            srcX = srcX4;
            stepsX = (int) Math.floor(Math.log(sx) / log2);
        }
        if (sy > 1.0f) {
            paint = paint2;
            stepsY = (int) Math.ceil(Math.log(sy) / log2);
        } else {
            paint = paint2;
            stepsY = (int) Math.floor(Math.log(sy) / log2);
        }
        int totalStepsX = stepsX;
        int totalStepsY3 = stepsY;
        Bitmap dst2 = null;
        int i4 = 0;
        if (!scaleInLinearSpace) {
            allocW = stepsX;
            allocH = stepsY;
            srcX2 = srcX;
            totalStepsY = totalStepsY3;
        } else {
            if (!Api27Impl.isAlreadyF16AndLinear(srcBm)) {
                if (stepsX > 0) {
                    r3 = 1;
                    i = sizeAtStep(srcW, i2, 1, totalStepsX);
                } else {
                    r3 = 1;
                    i = srcW;
                }
                int allocW2 = i;
                if (stepsY > 0) {
                    totalStepsY = totalStepsY3;
                    totalStepsY2 = sizeAtStep(srcH, i3, r3, totalStepsY);
                } else {
                    totalStepsY = totalStepsY3;
                    totalStepsY2 = srcH;
                }
                int allocH2 = totalStepsY2;
                allocW = stepsX;
                allocH = stepsY;
                Bitmap dst3 = Api27Impl.createBitmapWithSourceColorspace(allocW2, allocH2, srcBm, r3);
                Canvas canvasForCopy2 = new Canvas(dst3);
                int allocW3 = srcX;
                int allocH3 = -allocW3;
                canvasForCopy2.drawBitmap(src, allocH3, -srcY3, paint);
                srcX3 = 0;
                srcY3 = 0;
                dst2 = src;
                src = dst3;
                i4 = 1;
                currRect = new Rect(srcX3, srcY3, srcW, srcH);
                nextRect = new Rect();
                dst = dst2;
                stepsY2 = allocH;
                while (true) {
                    if (allocW != 0 && stepsY2 == 0) {
                        break;
                    }
                    if (allocW >= 0) {
                        int stepsX2 = allocW + 1;
                        srcY = srcY3;
                        srcY2 = stepsX2;
                    } else if (allocW <= 0) {
                        srcY = srcY3;
                        srcY2 = allocW;
                    } else {
                        int stepsX3 = allocW - 1;
                        srcY = srcY3;
                        srcY2 = stepsX3;
                    }
                    if (stepsY2 >= 0) {
                        stepsY2++;
                    } else if (stepsY2 > 0) {
                        stepsY2--;
                    }
                    double log22 = log2;
                    int nextW = sizeAtStep(srcW, i2, srcY2, totalStepsX);
                    int nextH = sizeAtStep(srcH, i3, stepsY2, totalStepsY);
                    Rect currRect2 = currRect;
                    nextRect.set(0, 0, nextW, nextH);
                    lastStep = srcY2 != 0 && stepsY2 == 0;
                    boolean dstSizeIsFinal = dst == null && dst.getWidth() == i2 && dst.getHeight() == i3;
                    if (dst != null || dst == srcBm || ((scaleInLinearSpace && !Api27Impl.isAlreadyF16AndLinear(dst)) || (lastStep && (!dstSizeIsFinal || i4 != 0)))) {
                        if (dst != srcBm && dst != null) {
                            dst.recycle();
                        }
                        int lastScratchStep = i4;
                        int allocW4 = sizeAtStep(srcW, i2, srcY2 <= 0 ? lastScratchStep : srcY2, totalStepsX);
                        int allocH4 = sizeAtStep(srcH, i3, stepsY2 <= 0 ? lastScratchStep : stepsY2, totalStepsY);
                        boolean linear = (scaleInLinearSpace || lastStep) ? false : true;
                        dst = Api27Impl.createBitmapWithSourceColorspace(allocW4, allocH4, srcBm, linear);
                    }
                    Canvas canvas = new Canvas(dst);
                    canvas.drawBitmap(src, currRect2, nextRect, paint);
                    Bitmap swap = src;
                    src = dst;
                    dst = swap;
                    currRect2.set(nextRect);
                    i2 = dstW;
                    currRect = currRect2;
                    log2 = log22;
                    i3 = dstH;
                    allocW = srcY2;
                    srcY3 = srcY;
                }
                if (dst != srcBm && dst != null) {
                    dst.recycle();
                }
                return src;
            }
            allocW = stepsX;
            allocH = stepsY;
            srcX2 = srcX;
            totalStepsY = totalStepsY3;
        }
        srcX3 = srcX2;
        currRect = new Rect(srcX3, srcY3, srcW, srcH);
        nextRect = new Rect();
        dst = dst2;
        stepsY2 = allocH;
        while (true) {
            if (allocW != 0) {
            }
            if (allocW >= 0) {
            }
            if (stepsY2 >= 0) {
            }
            double log222 = log2;
            int nextW2 = sizeAtStep(srcW, i2, srcY2, totalStepsX);
            int nextH2 = sizeAtStep(srcH, i3, stepsY2, totalStepsY);
            Rect currRect22 = currRect;
            nextRect.set(0, 0, nextW2, nextH2);
            if (srcY2 != 0) {
            }
            if (dst == null) {
            }
            if (dst != null) {
            }
            if (dst != srcBm) {
                dst.recycle();
            }
            int lastScratchStep2 = i4;
            int allocW42 = sizeAtStep(srcW, i2, srcY2 <= 0 ? lastScratchStep2 : srcY2, totalStepsX);
            int allocH42 = sizeAtStep(srcH, i3, stepsY2 <= 0 ? lastScratchStep2 : stepsY2, totalStepsY);
            boolean linear2 = (scaleInLinearSpace || lastStep) ? false : true;
            dst = Api27Impl.createBitmapWithSourceColorspace(allocW42, allocH42, srcBm, linear2);
            Canvas canvas2 = new Canvas(dst);
            canvas2.drawBitmap(src, currRect22, nextRect, paint);
            Bitmap swap2 = src;
            src = dst;
            dst = swap2;
            currRect22.set(nextRect);
            i2 = dstW;
            currRect = currRect22;
            log2 = log222;
            i3 = dstH;
            allocW = srcY2;
            srcY3 = srcY;
        }
        if (dst != srcBm) {
            dst.recycle();
        }
        return src;
    }

    static int sizeAtStep(int srcSize, int dstSize, int step, int totalSteps) {
        if (step == 0) {
            return dstSize;
        }
        return step > 0 ? (1 << (totalSteps - step)) * srcSize : dstSize << ((-step) - 1);
    }

    private BitmapCompat() {
    }

    static class Api27Impl {
        private Api27Impl() {
        }

        static Bitmap createBitmapWithSourceColorspace(int w, int h, Bitmap src, boolean linear) {
            Bitmap.Config config = src.getConfig();
            ColorSpace colorSpace = src.getColorSpace();
            ColorSpace linearCs = ColorSpace.get(ColorSpace.Named.LINEAR_EXTENDED_SRGB);
            if (linear && !src.getColorSpace().equals(linearCs)) {
                config = Bitmap.Config.RGBA_F16;
                colorSpace = linearCs;
            } else if (src.getConfig() == Bitmap.Config.HARDWARE) {
                config = Bitmap.Config.ARGB_8888;
                if (Build.VERSION.SDK_INT >= 31) {
                    config = Api31Impl.getHardwareBitmapConfig(src);
                }
            }
            return Bitmap.createBitmap(w, h, config, src.hasAlpha(), colorSpace);
        }

        static boolean isAlreadyF16AndLinear(Bitmap b) {
            ColorSpace linearCs = ColorSpace.get(ColorSpace.Named.LINEAR_EXTENDED_SRGB);
            return b.getConfig() == Bitmap.Config.RGBA_F16 && b.getColorSpace().equals(linearCs);
        }

        static Bitmap copyBitmapIfHardware(Bitmap bm) {
            if (bm.getConfig() == Bitmap.Config.HARDWARE) {
                Bitmap.Config newConfig = Bitmap.Config.ARGB_8888;
                if (Build.VERSION.SDK_INT >= 31) {
                    newConfig = Api31Impl.getHardwareBitmapConfig(bm);
                }
                return bm.copy(newConfig, true);
            }
            return bm;
        }
    }

    static class Api29Impl {
        private Api29Impl() {
        }

        static void setPaintBlendMode(Paint paint) {
            paint.setBlendMode(BlendMode.SRC);
        }
    }

    static class Api31Impl {
        private Api31Impl() {
        }

        static Bitmap.Config getHardwareBitmapConfig(Bitmap bm) {
            if (bm.getHardwareBuffer().getFormat() == 22) {
                return Bitmap.Config.RGBA_F16;
            }
            return Bitmap.Config.ARGB_8888;
        }
    }
}
