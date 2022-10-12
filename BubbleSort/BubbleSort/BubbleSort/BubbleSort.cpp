// Bubble sort
// Recall that arrays are passed by reference/address, so
// you don't need to return anything or use a pointer in your function.

#include <iostream>
using namespace std;

void bubbleSort(int array[], int length)
{
	bool swap;
	int temp;

	do
	{
		swap = false;
		for (int count = 0; count < (length - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;

			}
		}
	} while (swap);
}

void displayArray(const int array[], int length)
{
	cout << "-------Array Contents------\n";
	for (int index = 0; index < length; index++)
	{
		cout << array[index] << " ";
	}
	cout << endl << endl;
}


int main()
{
	int array[10] = { 23, 88, 12000, 524, 2688, 28, 1, 1751, 82, 257 };

	cout << "----------Array Unsorted--------\n";
	displayArray(array, 10);
	bubbleSort(array, 10);

	cout << "----------Array Sorted----------\n";
	displayArray(array, 10);

	system("pause");
	return 0;
}