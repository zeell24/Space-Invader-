#pragma once
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "mysteryship.hpp"
 
class Game
{
    private:
        void DeleteInactiveLasers();
        std::vector<Obstacle> CreateObstacles();
        std::vector<Alien> CreateAliens();
        Spaceship spaceship;
        std::vector<Obstacle> obstacles;
        std::vector<Alien> aliens;
        void MoveAliens();
        void MoveDownAliens(int distance);
        void AlienShooterLaser();
        void CheckForCollisions();
        void GameOver();
        void Reset();
        void InitGame();
        void checkForHighscore();
        void saveHighscoreToFile(int highscore);
        int loadHighscoreFromFile();
        int alienDirection;
        std::vector<Laser> alienLasers;
        constexpr static float alienLaserShootInterval = 0.5; //0.35 --> stronger side of aliens!!
        float timeLastAlienFired;
        MysteryShip mysteryship;
        float mysteryShipSpawnInterval;
        float timeLastSpawn;
    public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();
        bool run;
        int lives;
        int score; 
        int highscore;
};