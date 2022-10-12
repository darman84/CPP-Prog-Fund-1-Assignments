// Assignment 7
// By Zachary Williams
// 11/4/18
// This program is designed to ask and record the sales of 5 different types of salsa, 
// then record the sales and names of the salsas, and echo the names of the highest and lowest selling products as well as the total sales

#include <iostream>
#include <string>
using namespace std;

const int NUM_SALSAS = 5;

int main()
{
	// Variables
	string salsaTypes[NUM_SALSAS] = { "mild", "medium", "sweet", "hot", "zesty" };
	int jarsSold[NUM_SALSAS] = {};
	int totalSales = 0;
	string highType = salsaTypes[0];
	int highNum = 0;
	string lowType = salsaTypes[0];
	int lowNum = 0;

	for (int i = 0; i < NUM_SALSAS; i++)
	{
		cout << "How many jars of " << salsaTypes[i] << " were sold? ";
		cin >> jarsSold[i];

		while (jarsSold[i] < 0) // Prevents negative number of jars
		{
			cout << "Number of jars sold cannot be less than 0, \nplease re-enter a valid number of jars ";
			cin >> jarsSold[i];
		}

	
		totalSales += jarsSold[i]; //calculates the total sales
	}

	 highNum = jarsSold[0];
	 lowNum = jarsSold[0];


	for (int i = 0; i < NUM_SALSAS; i++)
	{
		if (jarsSold[i] > highNum) //calculates which salsa sold the most
		{
			highNum = jarsSold[i];
			highType = salsaTypes[i];
		}
		else if (jarsSold[i] < lowNum) //calculates which salsa sold the least
		{
			lowNum = jarsSold[i];
			lowType = salsaTypes[i];
		}
	}




	cout << "===========SALES===========" << endl;

	for (int i = 0; i < NUM_SALSAS; i++)
	{
		cout << salsaTypes[i] << ":\t\t" << jarsSold[i] << "\tjars" << endl;
	}



	cout << "\nTotal Jars of Salsa Sold: \n" << totalSales << endl;
	cout << "\nHighest # sold:\n" << highType << endl;
	cout << "\nLowest # sold:\n" << lowType << endl;
	


	system("pause");
	return 0;
}