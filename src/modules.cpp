module;
#include <iostream>

export module hello;

export void greetings(const char *name)
{
    std::cout << "Hello " << name << "!" << std::endl;
}
