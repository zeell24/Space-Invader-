#pragma once
#include "C:/raylib/raylib/src/raylib.h" 

class Laser
{
    private:
        Vector2 position;
        int speed;
        //Texture2D image;
    public:
        Laser(Vector2 position, int speed);
        void Update();
        void Draw();
        bool active;
        Rectangle getRect();

};  