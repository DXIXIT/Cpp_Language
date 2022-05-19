#include "student.h"

using namespace std;

int main(void)
{
	Student student1;

	cout << "\nEnter the details of student 1\n";
	
	cout << "Name: ";
	cin >> student1.name;

	cout << "Age: ";
	cin >> student1.age;
	
	cout << "Student ID: ";
	cin >> student1.stid;

	cout << "Score: ";
	cin >> student1.score;



	Student student2;

	cout << "\nEnter the details of student 2\n";
	
	cout << "Name: ";
	cin >> student2.name;

	cout << "Age: ";
	cin >> student2.age;
	
	cout << "Student ID: ";
	cin >> student2.stid;

	cout << "Score: ";
	cin >> student2.score;



	Student student3;

	cout << "\nEnter the details of student 3\n";
	
	cout << "Name: ";
	cin >> student3.name;

	cout << "Age: ";
	cin >> student3.age;
	
	cout << "Student ID: ";
	cin >> student3.stid;

	cout << "Score: ";
	cin >> student3.score;



	Student student4;
	
	cout << "\nEnter the details of student 4\n";
	
	cout << "Name: ";
	cin >> student4.name;

	cout << "Age: ";
	cin >> student4.age;
	
	cout << "Student ID: ";
	cin >> student4.stid;

	cout << "Score: ";
	cin >> student4.score;



	cout << "\nName\tAge\tStudent ID\tScore\n";
	cout << "-------------------------------------\n";
	cout << student1.name << '\t' << student1.age << '\t' << student1.stid << "\t\t" << student1.score << '\n';
	cout << student2.name << '\t' << student2.age << '\t' << student2.stid << "\t\t" << student2.score << '\n';
	cout << student3.name << '\t' << student3.age << '\t' << student3.stid << "\t\t" << student3.score << '\n';
	cout << student4.name << '\t' << student4.age << '\t' << student4.stid << "\t\t" << student4.score << '\n';
}