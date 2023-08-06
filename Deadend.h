#ifndef ZEN_DEADEND_H
#define ZEN_DEADEND_H

#include <chrono>
#include <string>
#include <boost/dynamic_bitset.hpp>
#include <bitset>
#include "GameConfig.h"
#include "TunnelInfo.h"
#include "ZenBoard.h"


using namespace std;

class Deadend{
    public:
        static const bitset<36> firstCol, lastCol, firstRow, lastRow;
        static bool HasDeadend(ZenBoard& zenBoard);
        static bool CheckTunnels(ZenBoard& zenBoard);
};

#endif //ZEN_DEADEND_H