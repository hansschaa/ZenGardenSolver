#ifndef ZEN_STATISTICS_H
#define ZEN_STATISTICS_H

#include <chrono>
#include <string>

using namespace std;

class Statistics{
    public:
        static int totalNodesExpanded;
        static int turn;
        static int solutionLength;
        static int isTimeOut;
        static int maxMilliseconds;
        static std::chrono::high_resolution_clock::time_point start;
        static std::chrono::high_resolution_clock::time_point end;

        static void Print(string algorithmName);
        static bool IsTimeOut();
};






#endif //ZEN_STATISTICS_H