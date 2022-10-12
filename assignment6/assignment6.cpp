// Assignemnt 6
// Zachary Williams
// 10/25/18
// This program asks the user for a number and determines if that number is a prime number. 
#include <iostream>

using namespace std;
bool testPrime(int); // function prototype

int main()
{
	int num;
	bool result;
	cout << "Please enter a number: ";
	cin >> num;
	cout << result;
	result = testPrime(num); // calls and stores the result of calling the function testPrime in a bool data type.


	cout << endl << "Is prime: " <<boolalpha << result << endl;

	system("pause");
	return 0;
}


bool testPrime(int num)
{
	int root = (int)sqrt(num); // root is used to optimize the code, since it is unnecessary to check if a number is divisible past its root.
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else {
		root = (int)(sqrt(num));
		int i; // counter

		for (i = 2; i <= root; i++)
		{
			if (num % i == 0)
			{
				return false; //not prime
			}
		}
		return true; // is prime
	}
	
}

