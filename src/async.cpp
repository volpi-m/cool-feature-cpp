/*
 *
 *      LT, MV
 *      Test async
 * 
 * 
 */

#include <iostream>
#include <dirent.h>
#include <fstream>
#include <future>
#include <vector>
#include <chrono>
#include <mutex>

//static std::mutex mutexVar;

// std::vector<std::string> getFileNamesFromDirectory(const std::string &directory)
// {
//     DIR *dir = nullptr;
//     struct dirent *ent = nullptr;
//     std::vector<std::string> v;

//     if ((dir = opendir(directory.c_str())) != NULL) {
//         while ((ent = readdir(dir)) != NULL) {
//             std::string str = (ent->d_name);
//             v.push_back(str);
//         }
//         closedir(dir);
//     }
//     return v;
// }

// void openFile(std::vector<std::ofstream *> vStream, std::string filePath)
// {
//     std::ofstream file(filePath);

//     if (file.is_open()) {
//         std::lock_guard<std::mutex> lock(mutexVar);
//         vStream.push_back(&file);
//     }
// }

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