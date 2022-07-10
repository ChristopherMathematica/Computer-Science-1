#include "pch.h"
#include <cmath>
#include "Circle.h"


void Circle::setRadius(double rad) 
{
	radius = rad; 
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getCircumference() const
{
	return radius * pi * 2;
}

double Circle::getAreaC() const
{
	return pow(radius, 2) * pi;
}