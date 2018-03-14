// Copyright (c) 2012-2018, The CryptoNote developers, The Brofistcoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSING.md for details.

#pragma once

// defines are for Windows resource compiler
#define BROFISTCOIN_VERSION_WINDOWS_COMMA 3, 18, 2, 19
#define BROFISTCOIN_VERSION_WINDOWS_STRING "3.0.0-20180219-beta"

#ifdef __cplusplus

namespace brofistcoin {
inline const char *app_version() { return BROFISTCOIN_VERSION_WINDOWS_STRING; }
}

#endif
