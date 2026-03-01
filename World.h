#pragma once
#include <vector>
#include "Ball.h"

class World {
public:
    int width, height;
    std::vector<Ball> balls_in_scenes;
    const float g = -9.8; //gravity

    World(int w, int h);
     
    void addBall(const Ball& ball);
    void Update();
    void DebugPrint() const;
        
    

};