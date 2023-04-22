#include<iostream>
#include "Group.h"

using namespace std;
int Menu();

void main() {
	srand((unsigned)time(NULL));

	bool exit = false;
	int choice = 0;
	Group group1;
	group1.CreateGroup();
	while (!exit) {
		choice = Menu();
		switch (choice) {
		case 1:
			group1.ShowStudents();
			break;
		case 2:
			group1.AddStudent();
			break;
		case 3:
			group1.ShowAssessments();
			break;
		case 4:
			group1.ShowAverage();
			break;
		case 5:
			group1.Debt();
			break;
		case 0:
			exit = true;
			break;
		default:
			cout << "Error! Please, try again!" << endl;
			break;
		}
	}

}

int Menu() {
	int choice = 0;
	cout << "\t\t\tWelcome in our university!\nPlease, select what you need:\n1.Show our students;";
	cout << "\n2.Add student;\n3.Show students assessments;";
	cout << "\n4.Show average assessment of student;\n5.Show stedents-debters;\n0.Exit";
	cin >> choice;
	return choice;
}