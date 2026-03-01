#include "World.h"
#include <iostream>

    World::World(int w, int h) {
        width = w;
        height = h;
    }

    void World::addBall(const Ball& ball) {
        balls_in_scenes.push_back(ball);
    }

    void World::Update() {
        for (auto& i : balls_in_scenes) {
            i.pos_y += g;
            i.Update();
            if (i.pos_x - i.rad < 0) //Check for if ball hit the left wall
            {
                i.pos_x = i.rad;  //Pull the ball inside the world
                i.vel_x *= -1; //Bouncing mechanic
            }
            if (i.pos_x + i.rad > width) //Check for if ball hit the right wall
            {
                i.pos_x = width - i.rad; //Pull the ball inside the world
                i.vel_x *= -1;  //Bouncing mechanic
            }
            if (i.pos_y + i.rad > height) //Check for if ball hit the upper wall
            {
                i.pos_y = height - i.rad; //Pull the ball inside the world
                i.vel_y *= -1; //Bouncing mechanic
            }
            if (i.pos_y - i.rad < 0) //Check for if ball hit the lower wall
            {
                i.pos_y = i.rad; // Pull the ball inside the world
                i.vel_y *= -1; //Bouncing mechanic 
            }
        }
    }

    void World::DebugPrint() const
    {
        std::cout << "----- Frame State -----\n";

        for (const auto& b : balls_in_scenes) {
            std::cout << b.name << "-> x: " << b.pos_x
                << ", y: " << b.pos_y << "\n";
        }

        std::cout << "------------------------\n";
    }

