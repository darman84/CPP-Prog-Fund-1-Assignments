// Rainfall statistics
// By Zachary Williams
// 11/2/18

#include <iostream>
using namespace std;

// Constant used for number of months
const int NUM_MONTHS = 12;

int main()
{
	// Array to hold the rainfall data
	double rainFall[NUM_MONTHS];
	double total = 0.0;
	int highMonth = 1;
	int lowMonth = 1;
	int highValue;
	int lowValue;

	// Get the rainfall for each month
	for (int month = 0; month < NUM_MONTHS; month++)
	{
		// Get this month's rainfall
		cout << "Enter the rainfall (in inches) for month #";
		cout << (month + 1) << ": ";
		cin >> rainFall[month];
	
		while (rainFall[month] < 0)
		{
			cout << "Rainfall must be 0 or more, \nplease re-enter:";
			cin >> rainFall[month];

		}
	
	}
	
	highValue = rainFall[0];
	lowValue = rainFall[0];
	total = rainFall[0];
	
	// Find the total, highest, and lowest months of rainfall
	for (int month = 1; month < NUM_MONTHS; month++)
	{
		total += rainFall[month];
		if (rainFall[month] > highValue)
		{
			highValue = rainFall[month];
			highMonth = month + 1;
		}
		else if (rainFall[month] < lowValue)
		{
			lowValue = rainFall[month];
			lowMonth = month + 1;
		}
	}

	// Outputting the results
	cout << "The total rainfall for the year was " << total << "." << endl;
	cout << "The month with the most rainfall was " << highMonth << "." << endl;
	cout << "The month with the least rainfall was " << lowMonth << "." << endl;	
	system("pause");
	return 0;
}