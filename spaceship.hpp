#pragma once
#include "C:/raylib/raylib/src/raylib.h" 
#include "laser.hpp"
#include <vector>

class Spaceship{
    private:
        Texture2D image;
        Vector2 position;
        double lastFireTime;
    public:
        Spaceship();
        ~Spaceship(); 
        void Draw();
        void Moveleft();
        void MoveRight();
        void FireLaser();
        Rectangle getRect();
        void Reset();
        std::vector<Laser> lasers;
};