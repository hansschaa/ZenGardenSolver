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
        static int alleys;
        static int corners;
        
        static std::chrono::high_resolution_clock::time_point start;
        static std::chrono::high_resolution_clock::time_point end;

        //H Time
        static std::chrono::high_resolution_clock::time_point h_start;
        static double h_total;

        static std::chrono::high_resolution_clock::time_point gen_start;
        static std::chrono::high_resolution_clock::time_point gen_end;
        static double gen_total;

        static void Print(string algorithmName);
        static bool IsTimeOut();
};






#endif //ZEN_STATISTICS_H