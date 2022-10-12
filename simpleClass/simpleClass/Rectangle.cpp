#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
	sayHello();
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getArea() const
{
	return width*length;
}

void Rectangle::setWidth(double w)
{
	if (w > 0)
	{
		width = w;
	}
}

void Rectangle::setLength(double L)
{
	length = L;
}

void Rectangle::sayHello()
{
	cout << "Hello from the rectangle class" <<endl;
}


