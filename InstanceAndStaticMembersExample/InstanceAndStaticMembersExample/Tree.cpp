// Zachary Williams
// This program demonstrates a static member variable
#include <iostream>
#include "tree.h"
using namespace std;

int main()
{
	// Define three Tree objects
	Tree oak;
	Tree elm;
	Tree pine;

	//Display the number of Tree objects we have.
	cout << "We have " << pine.getObjectCount()
		<< " trees in our program!\n";
	
	cout << "We have " << elm.getObjectCount()
		<< " trees in our program!\n";

	cout << "We have " << oak.getObjectCount()
		<< " trees in our program!\n";

	cout << "We have " << Tree::getObjectCount()
		<< " trees in our program!\n";
	
	system("pause");
	return 0;
}

///////////////OUTPUT////////////////////
/*
We have 3 trees in our program!
We have 3 trees in our program!
We have 3 trees in our program!
We have 3 trees in our program!
Press any key to continue . . .

*/