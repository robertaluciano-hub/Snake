#include "utility.h"

Utility::Utility()
{
}

bool Utility::contains(std::vector<Position> pos_vector, Position pos)
{
     for(Position item : pos_vector) {
        if (item.equals(pos)) {
            return true;
        }
    }
    return false;
}

void Utility::printVector(std::vector<Position> pos_vector)
{
    for(Position item : pos_vector) {
        item.print();
    }
}
