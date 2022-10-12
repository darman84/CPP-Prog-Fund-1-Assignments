// DollarGame Program
// By Zachary Williams

#include <iostream>
using namespace std;

int main()
{
	//constants
	const double PENNY = 0.01;
	const double NICKLE = 0.05;
	const double DIME = 0.10;
	const double QUARTER = 0.25;
	const double DOLLAR = 1.00;

		//variables for user input
		int numPennies; //holds the number of pennies
		int numNickels; //holds the number of nickles
		int numDimes; //holds the number of dimes
		int numQuarters; //holds the number of quarters

		//Variable for calculation
		double total; //holds the total

		//Display the objective of the game.
		cout << "Let's play a change-counting game. \n\n"
			<< "Enter the number of coins needed to make "
			<< "exactly one dollar. \n\n";

		// Get the number of pennies
		cout << "Enter the number of pennies: ";
		cin >> numPennies;

		// Get the number of nickles
		cout << "Enter the number of nickles: ";
		cin >> numNickels;

		// Get the number of dimes
		cout << "Enter the number of dimes: ";


		cin >> numDimes;

		// Get the number of quarters
		cout << "Enter the number of quarters: ";
		cin >> numQuarters;

		// calc the total
		total = numPennies * PENNY +
				numNickels * NICKLE +
				numDimes * DIME +
				numQuarters * QUARTER;

		// determine the results
		if (total > DOLLAR)
			cout << "\nSorry, that's more than one dollar.\n";
		else if (total < DOLLAR)
			cout << "\nSorry, that's less than one dollar.\n";
		else
			cout << "\nCongratulations! You Win!\n";

		system("pause");
	return 0;
}