// SPDX-License-Identifier: Apache-2.0

#include "btop.hpp"

#include <iterator>
#include <ranges>
#include <string_view>
#include <vector>

auto main(int argc, const char* argv[]) -> int {
	const auto args = std::vector<std::string_view>(std::next(argv), std::next(argv, argc));
	return btop_main(args);
}
