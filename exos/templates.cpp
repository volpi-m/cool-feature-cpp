/*
 *
 *      LT, MV
 *      Test main
 * 
 * 
 */

#include <iostream>

// Créez une fonction qui retourne la valeur minimum des deux valeurs templatées passées en paramètres
template<typename T>
T min(T a, T b)
{
    return a;
}

void templateExercice()
{
    std::cout << "Valeur minimum de 1 et 2 : " << min<int>(1, 2) << std::endl;
    std::cout << "Valeur minimum de 5.0 et 1.0 : " << min<float>(5.0f, 1.0f) << std::endl;
    std::cout << "Valeur minimum de 45 et 102 : " << min<unsigned int>(45, 102) << std::endl;
}