// Zachary Williams
// 11/28/18
// The goal of this program is to create a structure to store information about a movie

#include <iostream>
#include <string>
using namespace std;

//Function Prototypes::
void displayMovieData(struct MovieData);
MovieData getMovieData();


struct MovieData 
{
	string title;
	string director;
	int year;
	int runningTime;
};

int main()
{
	MovieData movie1 = getMovieData();
	displayMovieData(movie1);

	MovieData movie2 = getMovieData();
	displayMovieData(movie2);


	system("pause");
	return 0;
}

MovieData getMovieData()
{
	MovieData movie;
	cout << "Enter Movie Title: ";
	getline(cin, movie.title);

	cout << "Enter Director Name: ";
	getline(cin,movie.director);

	cout << "Enter year of Released: ";
	cin >> movie.year;

	cout << "Enter Running Time: ";
	cin >> movie.runningTime;
	cin.ignore();

	return movie;
}
void displayMovieData(struct MovieData movie)
{
	cout << endl;
	cout << "Title: " << movie.title << endl;
	cout << "Director: " << movie.director << endl;
	cout << "Year Released: " << movie.year << endl;
	cout << "Running Time: " << movie.runningTime << " minutes " <<endl << endl;
}