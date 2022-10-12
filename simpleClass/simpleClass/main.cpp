#include <iostream>
#include "Rectangle.h"

using namespace std;

void main()
{
	Rectangle myRectangle[5];
	double length;
	double width;

	cout << "Please enter the length of your rectangle: " << endl;
	cin >> length;
	myRectangle[0].setLength(length);
	cout << "Please enter the width of your rectangle: " << endl;
	cin >> width;
	myRectangle->setWidth(width);

	cout << "The area of my rectangle is " << myRectangle[0].getArea() << endl;
	system("pause");


}