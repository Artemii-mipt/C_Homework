#include "Ball.h"
#include <cmath>

using namespace std;

double solve(double a, double b, double c) {
	double D = b * b - 4 * a * c;
	if (D == 0)
		return (-b / (2 * a));
	else
		return ((-b - std::sqrt(D)) / (2 * a));

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
	while (position.y + V_y * t - g * t * t / 2 < 0) {
		double t_1 = solve(-g / 2, vy, position.y);
		V_y = V_y - g * t_1;
		V_y = -V_y;
		t = t - t1;
		position.y = 0;
	}
	position.y += vy * t - g * t * t / 2;
	vy -= g * t;
}
