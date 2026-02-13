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
