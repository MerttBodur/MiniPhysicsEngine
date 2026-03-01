#pragma once
#include <string>

class Ball {
public:
    float pos_x, pos_y, vel_x, vel_y, rad;
    std::string name;
    float mass; 

    Ball(float px, float py, float vx, float vy, float rad, const std::string& ballname);
    void Update();
};