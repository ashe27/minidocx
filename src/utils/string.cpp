/**
 * Copyright (C) 2022-2025, Xie Zequn <totravel@foxmail.com>. All rights reserved.
 * Distributed under the MIT License (http://opensource.org/licenses/MIT)
 * Report bugs and download new versions at https://github.com/totravel/minidocx
 */

#include "utils/string.hpp"

#include <algorithm>
#include <cctype>


namespace MINIDOCX_NAMESPACE
{
  std::string removeSpaces(std::string str) {
    std::string tmp{ std::move(str) };
    tmp.erase(std::ranges::remove_if(tmp, [](char c) { return std::isspace(static_cast<unsigned char>(c)); }).begin(), tmp.end());
    return tmp;
  }
}
