// Zachary Williams
// 11/30/18
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

// Function prototypes
int diceRoll();

int main()
{
	srand(time(NULL)); // seeding rand

	char choice = 'y';
	int diceOne;
	int diceTwo;
	int total;
	int point;
	double balance = 50.00;
	double bet;
	
	// The entire game is an intentional infinite loop, since I would like the user to be
	// able to play the game as many times as they want, without having to
	// relaunch the program, since that would reset their balance
	// the continue statement is used throughout the loop to restart the loop if the user
	// would like to play again in order to play another round without resetting the 
	// user's data, like their balance
	for(;;) 
	{

		cout << "Please enter your bet: " << endl;
		cin >> bet;

		// Prevention of non-integer, greater than balance, or negative bets
		while (cin.fail() || bet > balance || bet <= 0)
		{
			cout << "Invalid bet, please re-enter a valid bet: " << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> bet;
		}

		// Dice throw
		cout << "You may now roll: Hit any button to roll your two dice" <<endl;
		system("pause");
		diceOne = diceRoll(); 
		diceTwo = diceRoll();
		total = diceOne + diceTwo;

		if (total == 7 || total == 11)
		{
			cout << "\nYou rolled a " << total << endl;
			cout << "Congratulations, you've won! " << endl;
			balance = balance + bet;
			cout << "Your new balance is now $" << balance << endl;
			cout << "Would you like to play again?    Y|N " << endl;
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				continue; //loop back to start if user wants to play again, without resetting the balance
						  //I couldn't find a better way to restart the game and preserve the data without
						  //using a continue statement, but I believe that the code is still easy to read
						  //in this case
			}
			else 
			{
				break;
				// exits the program if user doesn't enter y or Y
			}
		}
		if (total == 2 || total == 3 || total == 12)
		{
			cout << "\nYou rolled a " << total << endl;
			cout << "You lose!" << endl;
			balance = balance - bet;
			cout << "Your new balance is now $" << balance << endl;
			cout << "Would you like to play again?    Y|N " << endl;
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				continue; //loop back to start if user wants to play again, without resetting the balance

			}
			else 
			{
				break;
				// exits the program if user doesn't enter y or Y
			}
		}
		point = total; // sets point to the current value of total

		cout << "\nYou rolled a " << total << endl;

		// Continously loops until roll gets to 7 or point
		do {
			cout << "You must roll again: Hit any button to roll your two dice" << endl;
			system("pause");

			diceOne = diceRoll();
			diceTwo = diceRoll();
			total = diceOne + diceTwo;
			cout << "\nYou rolled a " << total << endl;


		} while (total != point && total != 7);

		if (total == point)
		{
			cout << "Congratulations, you've won! " << endl;
			balance = balance + bet;
			cout << "Your new balance is now $" << balance << endl;
			cout << "Would you like to play again?    Y|N " << endl;
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				continue; //loop back to start if user wants to play again, without resetting the balance
			}
			else 
			{
				break;
				// exits the program if user doesn't enter y or Y
			}
		}
		if (total == 7)
		{
			cout << "You lose!" << endl;
			balance = balance - bet;
			cout << "Your new balance is now $" << balance << endl;
			cout << "Would you like to play again?    Y|N " << endl;
			cin >> choice;
			if (choice == 'y' || choice == 'Y')
			{
				continue; //loop back to start if user wants to play again, without resetting the balance

			}
			else 
			{
				break;
				// exits the program if user doesn't enter y or Y
			}
		}
	}

	system("pause");
	return 0;
}


int diceRoll()
{
	return 1 + rand() % 6; // 1-6 rand number, used for a single dice

}