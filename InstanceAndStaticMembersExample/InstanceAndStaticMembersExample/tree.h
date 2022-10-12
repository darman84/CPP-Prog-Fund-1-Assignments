#pragma once
//Tree class
class Tree
{
private:
	static int objectCount;
public:
	// Constructor
	Tree()
	{
		objectCount++;
	}
	static int getObjectCount()
	{
		return objectCount;
	}

};

// Definition of the static member variable, written
// outside the class.
int Tree::objectCount = 0;