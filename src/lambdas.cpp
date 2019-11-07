#include <iostream>
#include <array>
#include <algorithm>

void lambdas()
{
    auto pow = [&] (int a, int b) -> int {
        int res = 1;
        for (int i = 0; i < b; i++) res *= a;
        return res;
    };

    std::cout << pow(10, 2) << std::endl;

    std::array<int, 6> a{134, 4, 20, 42, 6, 74};
    auto f = std::find_if(a.begin(), a.end(), [] (int a) { return a > 40; });
    std::cout << *f << std::endl;
}

/*
** std::for_each
** std::sort
*/
