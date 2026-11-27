
#include <buss/core/Version.hpp>
#include <iostream>

int main()
{
    std::cout
        << buss::core::getProductName() << '\n'
        << "Version: " << buss::core::getVersion() << '\n'
        << "Developed by Neural Manacle\n"
        << "System initialized.\n";

    return 0;
}

