#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PersonInfo
{
	string name,
		address,
		city;
};
struct Student
{
	int studentID;
	PersonInfo pData;
	short yearInSchool;
	double gpa;
};
// getStudentData is used to prompt the user for information that is stored in the structures PersonInfo and Student
Student getStudentData()
{
	Student tempStu;
	cout << "Please Enter Student ID: " << endl;
	cin >> tempStu.studentID;

	cout << "Please Enter Student name: " << endl;
	cin.ignore();
	getline(cin, tempStu.pData.name);

	cout << "Please Enter Student address: " << endl;
	getline(cin, tempStu.pData.address);

	cout << "Please Enter Student city: " << endl;
	getline(cin, tempStu.pData.city);

	cout << "Please Enter Student's year in school: " << endl;
	cin >> tempStu.yearInSchool;

	cout << "Please Enter Student's GPA: " << endl;
	cin >> tempStu.gpa;

	return tempStu;
}
// showStudentData displays the data that was obtained via the getStudentData function
void showStudentData(const Student& stu)
{
	cout << "Student Name: " << stu.pData.name << endl;
	cout << "Student ID: " << stu.studentID << endl;
	cout << "Student Address: " << stu.pData.address << ", " << stu.pData.city << endl;
	cout << "Year in school: " << stu.yearInSchool << endl;
	cout << "GPA: " << stu.gpa << endl;
}
// main calls the functions and declares the structure
int main()
{
	Student smith = getStudentData();
	showStudentData(smith);
	system("pause");
	return 0;
}