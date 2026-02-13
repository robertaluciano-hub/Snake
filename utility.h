#pragma once
#include <vector>
#include "position.h"

class Utility{
    public:
        Utility();
        static bool contains(std::vector<Position> pos_vector, Position pos);
        static void printVector(std::vector<Position> pos_vector);
};