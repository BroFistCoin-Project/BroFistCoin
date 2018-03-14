// Copyright (c) 2012-2018, The CryptoNote developers, The Brofistcoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSING.md for details.

#pragma once

#if BROFISTCOIN_SQLITE
#include "platform/DBsqlite3.hpp"
namespace platform {
typedef DBsqlite DB;
}
#else
#include "platform/DBlmdb.hpp"
namespace platform {
typedef DBlmdb DB;
}
#endif
