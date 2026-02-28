#include "Ball.h"
#include <iostream>

    Ball::Ball(float px, float py, float vx, float vy, float rad, const std::string& ballname) {
        pos_x = px;
        pos_y = py;
        vel_x = vx;
        vel_y = vy;
        this->rad = rad;
        name = ballname;
        // IF THERE IS A BALL SHAPED CIRCLE, AND X = POS_X, Y = POS_Y
        // THEN IT IS LEFT EDGE IS POS_X - RAD, RIGHT EDGE IS POS_X + RAD
        // UPPER EDGE IS POS_Y + RAD, LOWER EDGE IS POS_Y - RAD
    }
    void Ball::Update() {
        pos_x += vel_x;
        pos_y += vel_y;
    }
