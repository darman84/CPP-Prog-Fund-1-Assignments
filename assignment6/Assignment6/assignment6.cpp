// Assignemnt 6
// Zachary Williams
// 10/25/18
// This program asks the user for a number and determines if that number is a prime number. 
#include <iostream>
using namespace std;
bool testPrime(int); // fuction prototype

int main()
{
	int num;
	bool result; // will store the result of calling the testPrime function
	cout << "Please enter a number: ";
	cin >> num;

	result = testPrime(num); // calls testPrime and stores the result into the result object

	cout << endl << "Is prime: " << boolalpha << result << endl; // boolalpha is used to improve readability for the user, since not all users may know that 0 = false and anything else equals true

	system("pause");
	return 0;
}

bool testPrime(int num)
{
	int root;
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else {
		 root = (int)(sqrt(num)); //root is used to optimize the code, since when checking for prime it is redundant to check past the square root of the nmber
		int i; // counter

		for (i = 2; i <= root; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
		return true;
	}

}

