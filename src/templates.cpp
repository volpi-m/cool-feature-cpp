/*
 *
 *      LT, MV
 *      Test main
 * 
 * 
 */

#include <iostream>

template<typename T>
class vector3 {
public:
    vector3(T x, T y, T z) : _x(x), _y(y), _z(z) {};

    T getX() const {return _x;};
    T getY() const {return _y;};
    T getZ() const {return _z;};
private:
    T _x;
    T _y;
    T _z;
};

void templateExample()
{
    vector3<int> vecteur(1, 2, 3);

    std::cout << "x = " << vecteur.getX() << std::endl;
    std::cout << "y = " << vecteur.getY() << std::endl;
    std::cout << "z = " << vecteur.getZ() << std::endl;
}