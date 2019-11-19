/*
 *
 *      LT, MV
 *      Test async
 * 
 * 
 */

#include <iostream>
#include <future>
#include <vector>
#include <chrono>

void takeYourTime()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void asyncExample(std::vector<std::future<void>> &futures)
{
    for (unsigned int i = 0; i < 10; i++)
        takeYourTime();
    // for (unsigned int i = 0; i < 10; i++)
    //     futures.push_back(std::async(std::launch::async, takeYourTime));
}