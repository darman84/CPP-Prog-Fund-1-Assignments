// Assignment3
// Zachary Williams
// 9/5/18
// This program will take in the number of cookies per serving, the number of calories per serving, and the
// number of cookies eaten to determine the total number of calories consumed.

#include <iostream>
using namespace std;

int main()
{
	int numCookies;
	int numCalories;
	int numCookiesAte;
	int totalCalories;
	int caloriesConsumed;


	cout << "How many cookies are in one serving? " << endl;
	cin >> numCookies;

	cout << "How many calories are in one serving? " << endl;
	cin >> numCalories;

	totalCalories = numCalories / numCookies;

	cout << "How many cookies were eaten? " << endl;
	cin >> numCookiesAte;

	caloriesConsumed = totalCalories * numCookiesAte;

	cout << "You ate " << caloriesConsumed << " calories." <<endl;


	system("pause");
	return 0;

}