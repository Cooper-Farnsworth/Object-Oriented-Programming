#include "Circle.h"

//Circle::Circle(float r, float x, float y)
//{
//	radius = r;
//	x_center = x;
//	y_center = y;
//}

void Circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square()
{
	return 3.14 * radius * radius;
}

bool Circle::triangle_around(float a, float b, float c)
{
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	if ((a * b * c) / (4 * s) == radius)
	{
		return true;
	}
	else return false;
}

bool Circle::triangle_in(float a, float b, float c)
{
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	if (s / p == radius) return true;
	else return false;
}
