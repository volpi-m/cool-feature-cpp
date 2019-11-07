/*
 *
 *      LT, MV
 *      Test main
 * 
 * 
 */

#include "Breakpoint.hpp"
#include "test.hpp"

int main()
{
    std::vector<std::future<void>> futures;
    // uniquePointerExample();
    // templateExample();
    {
        Debug::Breakpoint b("Async test", "main");
        asyncExample(futures);
    }
    return 0;
}