#pragma once

const double g = 9.8;

struct Point {
    double x;
    double y;
};

class Ball {
public:
    Ball(Point start_point);
    void parameter(double v, double phi);
    void trajectory(double t);
    Point position;
private:
    double V_x;
    double V_y;
};
