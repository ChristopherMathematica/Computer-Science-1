#include "pch.h"
#include "Rectangle.h"


	void Rectangle::setWidth(double w)
	{
		width = w;
		
	}

	void Rectangle::setLength(double len)
	{
		length = len;
	}

	double Rectangle::getWidth() const
	{
		return width;
	}
	double Rectangle::getLength() const
	{
		return length;
	}
	double Rectangle::getAreaR() const
	{
		int area = length * width;
		return area;
	}
	double Rectangle::getCircumR() const
	{
		int parameterR = (length * 2) + (width * 2);
		return parameterR;
	}
