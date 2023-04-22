#include <iostream>
#include "Student.h"

using namespace std;

void Student::CreateAssessments() {

	for (int i = 0; i <10; i++) {
		assessments[i] = 1 + rand() % 10;
	}
}

void Student::Assessments() {
	for (int i = 0; i < 10; i++) {
		cout << assessments[i] << endl;
	}
}

void Student::ShowStudents() {
	cout << ID << ": " << name << " " << surname << endl;
}

void Student::CreateStudent() {
	cout << "Enter student name: ";
	cin >> name;
	cout << "Enter student surname: ";
	cin>>surname;
	cout << "Enter student ID \nWARNING! When you create student ID, it's must ";
	cout << "be equal with number of student!\nExample: if student first in the list it's ID=1;";
	cout << "if student eight in the list it's ID must = 8";
	cout << "\nStudent ID (equal with number of student in list): ";
	cin>>ID;
	CreateAssessments();
}

double Student::AverageAssessments() {
	double average = 0;
	for (int i = 0; i < 10; i++) {
		average += assessments[i];
	}
	average /= 10;
	return average;
}