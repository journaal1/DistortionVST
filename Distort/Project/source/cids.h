//------------------------------------------------------------------------
// Copyright(c) 2023 .
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kProjectProcessorUID (0x57E50765, 0x32945F7D, 0xB4B97E1A, 0x2F537612);
static const Steinberg::FUID kProjectControllerUID (0xD6799151, 0x0D315AE6, 0x9C76B621, 0x947D4AAE);

#define ProjectVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
