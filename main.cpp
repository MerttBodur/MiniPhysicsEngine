#include <iostream>
#include "World.h"
#include <limits>

int main()
{
    World world(80, 25);
    Ball ball1(0, 0, 1, 1, 1, "ball1");
    Ball ball2(0, 0, 2, 2, 1, "ball2");
    Ball ball3(0, 0, 2, 2, 1.5, "ball3");

    world.addBall(ball1);
    world.addBall(ball2);
    world.addBall(ball3);

    int step;
    std::cout << "How many steps do you want that simulation be executed:";
    
    while (!(std::cin >> step)) //if input is not a number than false
    {
        std::cout << "Invalid Input! Please enter a number: ";
        std::cin.clear(); // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // deletes the trash inputs from buffer
    }

    for (int i = 0; i < step; i++)
    {
        world.Update();
        world.DebugPrint();
    }

    return 0;
}

