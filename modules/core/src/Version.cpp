#include <buss/core/Version.hpp>

namespace buss::core
{
    std::string_view getVersion() noexcept
    {
        return BUSS_VERSION;
    }

    std::string_view getProductName() noexcept
    {
        return "Buss Automotive Audio Platform";
    }
}

