package androidx.profileinstaller;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import androidx.concurrent.futures.ResolvableFuture;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.Objects;

/* loaded from: classes.dex */
public final class ProfileVerifier {
    private static final String CUR_PROFILES_BASE_DIR = "/data/misc/profiles/cur/0/";
    private static final String PROFILE_FILE_NAME = "primary.prof";
    private static final String PROFILE_INSTALLED_CACHE_FILE_NAME = "profileInstalled";
    private static final String REF_PROFILES_BASE_DIR = "/data/misc/profiles/ref/";
    private static final String TAG = "ProfileVerifier";
    private static final ResolvableFuture<CompilationStatus> sFuture = ResolvableFuture.create();
    private static final Object SYNC_OBJ = new Object();
    private static CompilationStatus sCompilationStatus = null;

    private ProfileVerifier() {
    }

    public static CompilationStatus writeProfileVerification(Context context) {
        return writeProfileVerification(context, false);
    }

    /* JADX WARN: Can't wrap try/catch for region: R(19:24|25|26|(3:71|72|73)(1:28)|29|(2:31|(12:36|(1:41)|(1:64)(2:47|(7:49|50|(2:58|59)|54|55|56|57))|63|50|(1:52)|58|59|54|55|56|57))(1:70)|(1:68)(1:69)|(2:39|41)|(1:43)|64|63|50|(0)|58|59|54|55|56|57) */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x00f3, code lost:
    
        r8 = androidx.profileinstaller.ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x00b1, code lost:
    
        r8 = 1;
     */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00e8 A[Catch: all -> 0x0012, TRY_LEAVE, TryCatch #0 {all -> 0x0012, blocks: (B:91:0x000c, B:93:0x0010, B:9:0x0015, B:11:0x001c, B:12:0x0022, B:14:0x0024, B:19:0x004b, B:25:0x006f, B:26:0x0074, B:72:0x0087, B:31:0x009d, B:33:0x00a5, B:36:0x00aa, B:43:0x00c2, B:47:0x00c9, B:50:0x00d4, B:52:0x00e8, B:55:0x00f9, B:56:0x00fd, B:59:0x00ee, B:77:0x0093, B:78:0x0097, B:82:0x0100, B:83:0x010b), top: B:90:0x000c, inners: #2, #3 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static CompilationStatus writeProfileVerification(Context context, boolean forceVerifyCurrentProfile) {
        Cache currentCache;
        boolean hasReferenceProfile;
        int resultCode;
        int resultCode2;
        int resultCode3;
        Cache newCache;
        Cache currentCache2;
        CompilationStatus compilationStatus;
        if (!forceVerifyCurrentProfile && (compilationStatus = sCompilationStatus) != null) {
            return compilationStatus;
        }
        synchronized (SYNC_OBJ) {
            if (!forceVerifyCurrentProfile) {
                try {
                    CompilationStatus compilationStatus2 = sCompilationStatus;
                    if (compilationStatus2 != null) {
                        return compilationStatus2;
                    }
                } catch (Throwable th) {
                    throw th;
                }
            }
            boolean hasCurrentProfile = false;
            if (Build.VERSION.SDK_INT == 30) {
                return setCompilationStatus(262144, false, false);
            }
            File referenceProfileFile = new File(new File(REF_PROFILES_BASE_DIR, context.getPackageName()), PROFILE_FILE_NAME);
            long referenceProfileSize = referenceProfileFile.length();
            boolean hasReferenceProfile2 = referenceProfileFile.exists() && referenceProfileSize > 0;
            File currentProfileFile = new File(new File(CUR_PROFILES_BASE_DIR, context.getPackageName()), PROFILE_FILE_NAME);
            long currentProfileSize = currentProfileFile.length();
            if (currentProfileFile.exists() && currentProfileSize > 0) {
                hasCurrentProfile = true;
            }
            try {
                long packageLastUpdateTime = getPackageLastUpdateTime(context);
                File cacheFile = new File(context.getFilesDir(), PROFILE_INSTALLED_CACHE_FILE_NAME);
                if (!cacheFile.exists()) {
                    currentCache = null;
                } else {
                    try {
                        Cache currentCache3 = Cache.readFromFile(cacheFile);
                        currentCache = currentCache3;
                    } catch (IOException e) {
                        return setCompilationStatus(131072, hasReferenceProfile2, hasCurrentProfile);
                    }
                }
                if (currentCache != null) {
                    hasReferenceProfile = hasReferenceProfile2;
                    if (currentCache.mPackageLastUpdateTime == packageLastUpdateTime && currentCache.mResultCode != 2) {
                        resultCode = currentCache.mResultCode;
                        if (forceVerifyCurrentProfile && hasCurrentProfile && resultCode != 1) {
                            resultCode = 2;
                        }
                        if (currentCache != null || currentCache.mResultCode != 2 || resultCode != 1) {
                            resultCode2 = resultCode;
                        } else {
                            resultCode2 = resultCode;
                            if (referenceProfileSize < currentCache.mInstalledCurrentProfileSize) {
                                resultCode3 = 3;
                                currentCache2 = currentCache;
                                newCache = new Cache(1, resultCode3, packageLastUpdateTime, currentProfileSize);
                                if (currentCache2 != null || !currentCache2.equals(newCache)) {
                                    newCache.writeOnFile(cacheFile);
                                }
                                return setCompilationStatus(resultCode3, hasReferenceProfile, hasCurrentProfile);
                            }
                        }
                        resultCode3 = resultCode2;
                        currentCache2 = currentCache;
                        newCache = new Cache(1, resultCode3, packageLastUpdateTime, currentProfileSize);
                        if (currentCache2 != null) {
                        }
                        newCache.writeOnFile(cacheFile);
                        return setCompilationStatus(resultCode3, hasReferenceProfile, hasCurrentProfile);
                    }
                } else {
                    hasReferenceProfile = hasReferenceProfile2;
                }
                if (hasCurrentProfile) {
                    resultCode = 2;
                } else {
                    resultCode = 0;
                }
                if (forceVerifyCurrentProfile) {
                    resultCode = 2;
                }
                if (currentCache != null) {
                }
                resultCode2 = resultCode;
                resultCode3 = resultCode2;
                currentCache2 = currentCache;
                newCache = new Cache(1, resultCode3, packageLastUpdateTime, currentProfileSize);
                if (currentCache2 != null) {
                }
                newCache.writeOnFile(cacheFile);
                return setCompilationStatus(resultCode3, hasReferenceProfile, hasCurrentProfile);
            } catch (PackageManager.NameNotFoundException e2) {
                return setCompilationStatus(65536, hasReferenceProfile2, hasCurrentProfile);
            }
        }
    }

    private static CompilationStatus setCompilationStatus(int resultCode, boolean hasReferenceProfile, boolean hasCurrentProfile) {
        CompilationStatus compilationStatus = new CompilationStatus(resultCode, hasReferenceProfile, hasCurrentProfile);
        sCompilationStatus = compilationStatus;
        sFuture.set(compilationStatus);
        return sCompilationStatus;
    }

    private static long getPackageLastUpdateTime(Context context) throws PackageManager.NameNotFoundException {
        PackageManager packageManager = context.getApplicationContext().getPackageManager();
        if (Build.VERSION.SDK_INT >= 33) {
            return Api33Impl.getPackageInfo(packageManager, context).lastUpdateTime;
        }
        return packageManager.getPackageInfo(context.getPackageName(), 0).lastUpdateTime;
    }

    public static ListenableFuture<CompilationStatus> getCompilationStatusAsync() {
        return sFuture;
    }

    static class Cache {
        private static final int SCHEMA = 1;
        final long mInstalledCurrentProfileSize;
        final long mPackageLastUpdateTime;
        final int mResultCode;
        final int mSchema;

        Cache(int schema, int resultCode, long packageLastUpdateTime, long installedCurrentProfileSize) {
            this.mSchema = schema;
            this.mResultCode = resultCode;
            this.mPackageLastUpdateTime = packageLastUpdateTime;
            this.mInstalledCurrentProfileSize = installedCurrentProfileSize;
        }

        public boolean equals(Object o) {
            if (this == o) {
                return true;
            }
            if (o == null || !(o instanceof Cache)) {
                return false;
            }
            Cache cacheFile = (Cache) o;
            if (this.mResultCode == cacheFile.mResultCode && this.mPackageLastUpdateTime == cacheFile.mPackageLastUpdateTime && this.mSchema == cacheFile.mSchema && this.mInstalledCurrentProfileSize == cacheFile.mInstalledCurrentProfileSize) {
                return true;
            }
            return false;
        }

        public int hashCode() {
            return Objects.hash(Integer.valueOf(this.mResultCode), Long.valueOf(this.mPackageLastUpdateTime), Integer.valueOf(this.mSchema), Long.valueOf(this.mInstalledCurrentProfileSize));
        }

        void writeOnFile(File file) throws IOException {
            file.delete();
            DataOutputStream dos = new DataOutputStream(new FileOutputStream(file));
            try {
                dos.writeInt(this.mSchema);
                dos.writeInt(this.mResultCode);
                dos.writeLong(this.mPackageLastUpdateTime);
                dos.writeLong(this.mInstalledCurrentProfileSize);
                dos.close();
            } catch (Throwable th) {
                try {
                    dos.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        }

        static Cache readFromFile(File file) throws IOException {
            DataInputStream dis = new DataInputStream(new FileInputStream(file));
            try {
                Cache cache = new Cache(dis.readInt(), dis.readInt(), dis.readLong(), dis.readLong());
                dis.close();
                return cache;
            } catch (Throwable th) {
                try {
                    dis.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        }
    }

    public static class CompilationStatus {
        public static final int RESULT_CODE_COMPILED_WITH_PROFILE = 1;
        public static final int RESULT_CODE_COMPILED_WITH_PROFILE_NON_MATCHING = 3;
        public static final int RESULT_CODE_ERROR_CACHE_FILE_EXISTS_BUT_CANNOT_BE_READ = 131072;
        public static final int RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE = 196608;
        private static final int RESULT_CODE_ERROR_CODE_BIT_SHIFT = 16;
        public static final int RESULT_CODE_ERROR_PACKAGE_NAME_DOES_NOT_EXIST = 65536;
        public static final int RESULT_CODE_ERROR_UNSUPPORTED_API_VERSION = 262144;
        public static final int RESULT_CODE_NO_PROFILE = 0;
        public static final int RESULT_CODE_PROFILE_ENQUEUED_FOR_COMPILATION = 2;
        private final boolean mHasCurrentProfile;
        private final boolean mHasReferenceProfile;
        final int mResultCode;

        @Retention(RetentionPolicy.SOURCE)
        public @interface ResultCode {
        }

        CompilationStatus(int resultCode, boolean hasReferenceProfile, boolean hasCurrentProfile) {
            this.mResultCode = resultCode;
            this.mHasCurrentProfile = hasCurrentProfile;
            this.mHasReferenceProfile = hasReferenceProfile;
        }

        public int getProfileInstallResultCode() {
            return this.mResultCode;
        }

        public boolean isCompiledWithProfile() {
            return this.mHasReferenceProfile;
        }

        public boolean hasProfileEnqueuedForCompilation() {
            return this.mHasCurrentProfile;
        }
    }

    private static class Api33Impl {
        private Api33Impl() {
        }

        static PackageInfo getPackageInfo(PackageManager packageManager, Context context) throws PackageManager.NameNotFoundException {
            return packageManager.getPackageInfo(context.getPackageName(), PackageManager.PackageInfoFlags.of(0L));
        }
    }
}
