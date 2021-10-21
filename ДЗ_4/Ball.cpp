#include "Ball.h"
#include <cmath>

using namespace std;

Ball::Ball(Point start_pos)
{
	position = start_pos;
}

void Ball::parameter(double V, double phi)
{
	V_x = V_x + V * cos(phi);
	V_x = V_x + V * sin(phi);
}

void Ball::trajectory(double t)
{
	position.x = position.x + V_x * t;
	position.y = position.y + V_y * t - g * t * t / 2;
}