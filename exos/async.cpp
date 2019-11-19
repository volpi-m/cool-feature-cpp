/*
 *
 *      LT, MV
 *      Test async
 * 
 * 
 */

#include <iostream>
#include <future>
#include <chrono>
#include <stack>

#include "test.hpp"

// -------------------------------- EXO1

void heavyOperation()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void asyncExercice()
{
    // Reduisez le temps d'iteration avec std::async
    for (std::size_t i = 0; i < 10; ++i)
        heavyOperation();
}

// -------------------------------- EXO2

void pushOnStack(std::stack<std::string> &stack, const std::string &str)
{
    std::this_thread::sleep_for(std::chrono::seconds(1));

    stack.push(str);
}

void asyncExerciceStack()
{
    std::stack<std::string> stack;
    
    // Reduisez le temps d'iteration avec std::async, attention à la mémoire ...
    for (std::size_t i = 0; i < 10; ++i)
        pushOnStack(stack, "string a push");
}