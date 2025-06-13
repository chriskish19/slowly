/**********************************************************/
//
// File:
//
// Purpose:
//
// Project:
//
/**********************************************************/

#pragma once
#include CORE_NAMES_INCLUDE
#include CORE_STL_INCLUDE_PATH


namespace core {
	slowly_package match_in_slowly(keywords key);
	slowly_package match_in_slowly(const std::string& name);
	bool is_keyword(const std::string& keyword, const std::vector<std::string>& container);
	codes add_tokens(const std::filesystem::path& file);
	codes translate(std::filesystem::path sl_file);
}