#pragma once
#include "C:/raylib/raylib/src/raylib.h" 

class Block
{
    private:
        Vector2 position;
    public:
        Block(Vector2 position);
        void Draw();
        Rectangle getRect();
}; 