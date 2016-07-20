/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.android.internal.app;

import com.android.internal.os.IParcelFileDescriptorFactory;
import android.content.pm.PackageInfoLite;
import android.content.res.ObbInfo;

interface IMediaContainerService {
    String copyPackageToContainer(String packagePath, String containerId, String key,
            boolean isExternal, boolean isForwardLocked, String abiOverride);
    // EosTek Patch Begin
    String copyPackageToContainerUsb(String packagePath, String containerId, String key,
            boolean isExternal, boolean isForwardLocked, String abiOverride, boolean isUsb);
    // EosTek Patch End
    int copyPackage(String packagePath, in IParcelFileDescriptorFactory target);

    PackageInfoLite getMinimalPackageInfo(String packagePath, int flags, String abiOverride);
    ObbInfo getObbInfo(String filename);
    long calculateDirectorySize(String directory);
    /** Return file system stats: [0] is total bytes, [1] is available bytes */
    long[] getFileSystemStats(String path);
    void clearDirectory(String directory);
    long calculateInstalledSize(String packagePath, boolean isForwardLocked, String abiOverride);
}
