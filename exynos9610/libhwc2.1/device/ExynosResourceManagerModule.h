/*
 * Copyright (C) 2012 The Android Open Source Project
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
#ifndef _EXYNOS_RESOURCE_MANAGER_MODULE_H
#define _EXYNOS_RESOURCE_MANAGER_MODULE_H

#include "ExynosResourceManager.h"

class ExynosLayer;

class ExynosResourceManagerModule : public ExynosResourceManager {
    public:
        ExynosResourceManagerModule();
        virtual ~ExynosResourceManagerModule();
        virtual int32_t prepareResources() override;
        virtual void preAssignWindows() override;
};

#endif // _EXYNOS_RESOURCE_MANAGER_MODULE_H
