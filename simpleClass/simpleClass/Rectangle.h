#pragma once
class Rectangle
{
private:
	double width;
	double length;
	void sayHello();
public:
	Rectangle();
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	void setWidth(double);
	void setLength(double);
};