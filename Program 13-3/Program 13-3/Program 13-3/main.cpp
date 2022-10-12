// This program will create three instances of the Rectangle class.
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{

	double number;					// To hold a number
	double totalArea;				// The total area
	Rectangle *kitchen = nullptr;	// To point to kitchen dimensions
	Rectangle *bedroom = nullptr;	// To point to bedroom dimensions
	Rectangle *den = nullptr;		// To point to den dimensions

	// Dynamically allocate the objects.
	kitchen = new Rectangle;
	bedroom = new Rectangle;
	den = new Rectangle;

	// Get the kitchen dimensions.
	cout << "What is the kitchen's length?";
	cin >> number;							// Get the length
	kitchen->setLength(number);				// Store in kitchen object
	cout << "What is the kitchen's width?";	
	cin >> number;							// Get the width
	kitchen->setWidth(number);				// Store in kitchen object

	// Get the bedroom dimensions.
	cout << "What is the bedroom's length?";
	cin >> number;							// Get the length
	bedroom->setLength(number);				// Store in bedroom object
	cout << "What is the bedroom's width?";
	cin >> number;							// Get the width
	bedroom->setWidth(number);				// Store in bedroom object

	// Get the den dimensions.
	cout << "What is the den's length?";
	cin >> number;							// Get the length
	den->setLength(number);				// Store in den object
	cout << "What is the den's width?";
	cin >> number;							// Get the width
	den->setWidth(number);				// Store in den object

	// Calculate the toal area of the three rooms.
	totalArea = kitchen->getArea() + bedroom->getArea() + 
				den->getArea();
	// Display the total area of the three rooms.
	cout << "The total area of the three rooms is "
		<< totalArea << endl;

	// Delete the objects from memory.
	delete kitchen;
	delete bedroom;
	delete den;
	kitchen = nullptr;	// Make kitchen a null pointer
	bedroom = nullptr;	// Make bedroom a null pointer
	den = nullptr;		// Make den a null pointer

	system("pause");
	return 0;
}

/* Sample Output
Hello from the rectangle class
Hello from the rectangle class
Hello from the rectangle class
What is the kitchen's length?20
What is the kitchen's width?5
What is the bedroom's length?100
What is the bedroom's width?50
What is the den's length?150
What is the den's width?120
The total area of the three rooms is 23100
Press any key to continue . . .
*/