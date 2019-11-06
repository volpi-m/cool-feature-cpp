/*
 *
 *      LT, MV
 *      Test main
 * 
 * 
 */

#include <memory>
#include <iostream>

// a != b, le pointeur est unique !
void allocateAndDestroyPointer()
{
    std::unique_ptr<int> a(new int(1));
    std::unique_ptr<int> b = std::make_unique<int>(1);

    *(a.get()) = 2;
    std::cout << "[UNIQUE] a = " << *a << ", b = " << *b << std::endl;
}

// a != b, le pointeur est unique !
std::unique_ptr<int> allocateAndDestroyUniquePointerThenMove()
{
    std::unique_ptr<int> a(new int(1));
    std::unique_ptr<int> b = std::move(a);

    *(b.get()) = 2;
    // *(a.get()) = 1; -> Attention ! segv !!
    std::cout << "[UNIQUE] b = " << *b << std::endl;
    return b;
}

// a peut être égal à b, on peut partager le pointeur
void allocateAndDestroySharedPointer()
{
    std::shared_ptr<int> a(new int(1));
    std::shared_ptr<int> b = a;

    *(a.get()) = 2;
    std::cout << "[SHARED] a = " << *a << ", b = " << *b << std::endl;
}

void uniquePointerExample()
{
    allocateAndDestroyPointer();
    std::unique_ptr<int> a = allocateAndDestroyUniquePointerThenMove();
    std::cout <<"[OUT OF SCOPE] a = " << *a << std::endl;
    allocateAndDestroySharedPointer();
}