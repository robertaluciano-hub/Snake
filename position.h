#pragma once

class Position {
    public:
        Position();
        Position(int x, int y);
        void print();
        bool equals(Position pos);
        int x;
        int y;
};