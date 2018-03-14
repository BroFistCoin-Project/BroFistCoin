// Copyright (c) 2012-2018, The CryptoNote developers, The Brofistcoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSING.md for details.

#pragma once

#include <cstdint>
#include <string>
#include "common/CommandLine.hpp"

namespace brofistcoin {

struct MiningConfig {
	explicit MiningConfig(common::CommandLine &cmd);

	std::string mining_address;
	std::string brofistcoind_ip;
	uint16_t brofistcoind_port = 0;
	size_t thread_count     = 0;
	//	size_t scanPeriod; // We are using longpoll now
	//	uint8_t log_level;
	size_t blocks_limit = 0;  // Mine specified number of blocks, then exit, 0 == indefinetely
	                          //	uint64_t first_block_timestamp;
	                          //	int64_t blockTimestampInterval;
	                          //	bool help;
};

}  // namespace brofistcoin
