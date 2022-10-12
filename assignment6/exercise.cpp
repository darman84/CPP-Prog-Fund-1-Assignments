// Coin toss
// By Zachary Williams
// 10/26/18

#include <iostream>
#include <time.h> //needed for time
using namespace std;

void coinToss(); //function prototype

int main()
{
	// seed the random method using the time clock
	srand(time(NULL));

	int timesInvoked = 0;

	cout << "How many times would you like to flip a coin?" << endl;
	cin >> timesInvoked; // number of times user wants to invoke the coinToss method

	for (int count = 1; count <= timesInvoked; count++)
	{
		coinToss();
	}
	system("pause");
	return 0;
}

//***********************************************************
// The cointoss function simulates the toss of a coin.      *
// It displays either "heads" or "tails".                   *
//***********************************************************
void coinToss()
{
	// Generate a random number in the range of 1 through 2.
	int number = 1 + rand() % 2;

	// Display either "heads" or "tails".
	cout << (number == 1 ? "heads" : "tails") << endl;

}