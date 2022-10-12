// Assignment4
// Zachary Williams
// 9/20/18
// This program asks the user for a number of seconds and determine how many minutes, hours, and days that is equivalent to.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Var declaration
	const int secPerMin = 60;
	const int secPerHour = 3600;
	const int secPerDay = 86400;
	double inputSeconds = 0;

	// Input number of seconds from the user
	cout << "Please enter a number of seconds that you would like to be converted" << endl;
	cin >> inputSeconds;

	if (inputSeconds >= 60)
		cout << fixed << setprecision(2) << inputSeconds << " seconds is the same as " << inputSeconds / secPerMin <<" minutes" << endl;
	
	if (inputSeconds >=3600)
		cout << inputSeconds << " seconds is the same as " << inputSeconds / secPerHour << " hours" << endl;

	if (inputSeconds >=86400)
		cout << inputSeconds << " seconds is the same as " << inputSeconds / secPerDay << " days" << endl;

	system("pause");
	return 0;
}