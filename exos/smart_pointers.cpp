/*
 *
 *      LT, MV
 *      Test main
 * 
 * 
 */

#include <memory>
#include <iostream>

void uniqueExercice()
{
    std::unique_ptr<int> b;

    { // Scope, toute variables initialisée en son seint sera détruite à la fin
        std::unique_ptr<int> a(new int(1));

        // Comment passer le pointeur de a vers b ? Modifiez ce commentaire avec le code approprié
    } // fin du scope
    std::cout << "[UNIQUE] b = " << *b << std::endl;
}

void sharedExercice()
{
    std::shared_ptr<int> b;

    {
        std::shared_ptr<int> a = b;

        // Modifiez a pour que b ai quelque chose à afficher ! Modifiez ce commentaire avec le code approprié
    }
    std::cout << "[UNIQUE] b = " << *b << std::endl;
}