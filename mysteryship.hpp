#pragma once
#include "C:/raylib/raylib/src/raylib.h" 

class MysteryShip
{
    private:
        Vector2 position;
        Texture2D image;
        int speed;
    public:
        bool alive;
        MysteryShip();
        ~MysteryShip();
        void Update();
        void Draw();
        void Spawn();
        Rectangle getRect();
    
};