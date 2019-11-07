#include <optional>
#include <string>
#include <iostream>
#include <functional>

std::optional<std::string> create(bool a)
{
    if (a)
        return "Hello";
    return {};
}

std::optional<int> create2(bool a)
{
    if (a)
        return 1;
    return {};
}

void optional()
{
    std::optional<std::string> first = create(true);
    std::optional<int> second = create2(false);

    std::cout << *first << std::endl;
    try {
        std::cout << first.value() << std::endl;
    } catch (std::exception &e) {}
    std::cout << first.value_or("error") << std::endl;

    std::cout << *second << std::endl;
    try {
        std::cout << second.value() << std::endl;
    } catch (std::exception &e) {}
    std::cout << second.value_or(0) << std::endl;
}

/*
** ouvrir un fichier, lire le contenu et return le résultat dans un optional
*/
