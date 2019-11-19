#include <vector>
#include <iostream>

import hello;

int main()
{
    int a = 21 <=> 25;

    /////////////////////////////////

    std::vector<int> a {1, 2, 3, 4, 5};

    for (int i = 0; auto elem : a)
        std::cout << "a[" << i++ << "] = " << elem << std::endl;

    /////////////////////////////////

    greetings("Toto");

    return 0;
}
