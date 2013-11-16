// Copyright (c) 2013 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file is generated by the make_version_header.py tool.
//

#ifndef CEF_INCLUDE_CEF_VERSION_H_
#define CEF_INCLUDE_CEF_VERSION_H_

#define CEF_VERSION_MAJOR 3
#define CEF_REVISION 1518
#define COPYRIGHT_YEAR 2013

#define CHROME_VERSION_MAJOR 31
#define CHROME_VERSION_MINOR 0
#define CHROME_VERSION_BUILD 1650
#define CHROME_VERSION_PATCH 39

#define DO_MAKE_STRING(p) #p
#define MAKE_STRING(p) DO_MAKE_STRING(p)

#ifndef APSTUDIO_HIDDEN_SYMBOLS

#ifdef __cplusplus
extern "C" {
#endif

#include "internal/cef_export.h"

// The API hash is created by analyzing CEF header files for C API type
// definitions. The hash value will change when header files are modified
// in a way that may cause binary incompatibility with other builds. The
// universal hash value will change if any platform is affected whereas the
// platform hash values will change only if that particular platform is
// affected.
#define CEF_API_HASH_UNIVERSAL "026aaf10a0738d97cef6265c6600449a60b48ac6"
#if defined(OS_WIN)
#define CEF_API_HASH_PLATFORM "7095515ba3de7e4469c9670fbab90db580be985f"
#elif defined(OS_MACOSX)
#define CEF_API_HASH_PLATFORM "ba2e1a472bc0e8eb61ede0fbd5ae560257a3e6b3"
#elif defined(OS_LINUX)
#define CEF_API_HASH_PLATFORM "6196ded9aa05fe1fc205fb88c16dc61ecd16709f"
#endif

///
// Returns the CEF build revision for the libcef library.
///
CEF_EXPORT int cef_build_revision();

///
// Returns CEF version information for the libcef library. The |entry|
// parameter describes which version component will be returned:
// 0 - CEF_VERSION_MAJOR
// 1 - CEF_REVISION
// 2 - CHROME_VERSION_MAJOR
// 3 - CHROME_VERSION_MINOR
// 4 - CHROME_VERSION_BUILD
// 5 - CHROME_VERSION_PATCH
///
CEF_EXPORT int cef_version_info(int entry);

///
// Returns CEF API hashes for the libcef library. The returned string is owned
// by the library and should not be freed. The |entry| parameter describes which
// hash value will be returned:
// 0 - CEF_API_HASH_PLATFORM
// 1 - CEF_API_HASH_UNIVERSAL
///
CEF_EXPORT const char* cef_api_hash(int entry);

#ifdef __cplusplus
}
#endif

#endif  // APSTUDIO_HIDDEN_SYMBOLS

#endif  // CEF_INCLUDE_CEF_VERSION_H_
