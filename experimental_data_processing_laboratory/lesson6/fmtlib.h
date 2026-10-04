#pragma once

#ifndef __has_include
    // No way to check if <format> exists, so play safe and use fmt
    #include "fmt/format.h"
    namespace fmt = ::fmt;
#else
    #if __has_include(<format>) && defined(__cpp_lib_format)
        // Ensure both the header and the C++20 <format> feature are available
        #include <format>
        namespace fmt = std::format;
    #else
        // Fallback to the fmt library
        #include "fmt/format.h"
        namespace fmt = ::fmt;
    #endif
#endif
