#pragma once

const double g = 9.8;

struct Point
{
	double x;
	double y;
};

struct Ball
{
	Ball(Point start_point);
	void parameter(double V, double phi);
	void trajectory(double t);

	Point position;
	double V_x = 0;
	double V_y = 0;
};