// This program uses 2 functions that accept addresses of variables as arguments
#include <iostream>
using namespace std;

void getNumber(int *);
void doubleValue(int *);

int main()
{
	
	int number;
	
	getNumber(&number);
	doubleValue(&number);

	cout << "That value double is " << number << endl;
	system("pause");
	return 0;

}

// Definition of getNumber. The parameter, input, is pointer. This function asks the user for a number. The value entered is stored in teh variable pointed to by input.
void getNumber(int *input)
{
	cout << "Enter an integer number: ";
	cin >> *input;

}

// Definition of doubleValue. The parameter, val, is a pointer. This func. multiplies the variable pointed to by val by two.
void doubleValue(int *val)
{
	*val *= 2;
}