//
// SPDX-FileCopyrightText: The LineageOS Project
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <C2Component.h>
#include <memory>

namespace android {
std::shared_ptr<C2ComponentStore> GetCodec2MtkComponentStore();
} // namespace android
