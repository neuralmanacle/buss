
#pragma once

#include <string_view>

namespace buss::core
{
    [[nodiscard]]
    std::string_view getVersion() noexcept;

    [[nodiscard]]
    std::string_view getProductName() noexcept;
}

