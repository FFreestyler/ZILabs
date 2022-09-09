#include <iostream>
#include <tuple>
#include "../StaticLib1/StaticLib1.h"

int main()
{
    //long a = 1;
    long x = 2;
    long p = 3;

    auto result = Cryptography::Calculation::extendedGCD(2, 31);

    int a, b, c;

    std::tie(a, b, c) = Cryptography::Calculation::extendedGCD(2, 31);

    std::cout << a << " " << b << " " << c;
}
