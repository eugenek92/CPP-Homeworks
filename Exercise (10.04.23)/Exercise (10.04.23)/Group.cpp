#include"Group.h"
#include<iostream>

using namespace std;

void Group::CreateGroup() {
	cout << "Enter group name: ";
	cin >> name;

	cout << "Enter size of group: ";
	cin >> size;
	students = new Student[size];

	for (int i = 0; i < size; i++) {
		students[i].CreateStudent();
	}
	system("cls");
}

void Group::ShowStudents() {
	for (int i = 0; i < size; i++) {
		students[i].ShowStudents();
	}
}

void Group::AddStudent() {
	Student* tmpArr = new Student[size + 1];
	for (int i = 0; i < size; i++) {
		tmpArr[i] = students[i];
	}
	tmpArr[size].CreateStudent();

	delete[] students;
	students = tmpArr;
	size++;
}

void Group::Debt() {
	double averageAssessment = 0;
	for (int i = 0; i < size; i++) {
		averageAssessment = students[i].AverageAssessments();
		if (averageAssessment < 7) {
			students[i].ShowStudents();
			cout << "Have average assessment: " << averageAssessment << endl;
		}
	}
}

void Group::ShowAssessments() {
	int IDassessments = 0;
	double average = 0;
	cout << "Enter ID of student, you want to see assessments: ";
	cin >> IDassessments;
	students[IDassessments-1].Assessments();
	average= students[IDassessments-1].AverageAssessments();
}

void Group::ShowAverage() {
	int IDaverage = 0;
	double average = 0;
	cout << "Enter ID of student, you want to see average assessments: ";
	cin >> IDaverage;
	average = students[IDaverage-1].AverageAssessments();
	cout << "Average assessment of ";
	students[IDaverage-1].ShowStudents();
	cout << ": " << average << endl;
}