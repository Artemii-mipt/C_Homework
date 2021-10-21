#include "ball.h"
#include <iostream>
#include <chrono>
#include <thread>

int main() {
    Ball ball(Point{ 0, 0 });

    ball.parameter(5, 0);
    for (double t = 0; t < 10; t += 1) {
        ball.trajectory(t);
        std::cout << "Pos x:" << ball.position.x << std::endl;
        std::cout << "Pos y:" << ball.position.y << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}