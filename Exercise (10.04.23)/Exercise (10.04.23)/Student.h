#pragma once
#include <iostream>
#include<string>
using namespace std;

struct Student {
private:
	string name;
	string surname;
	int ID = 0;
	int assessments[10];
public:
	void CreateAssessments();
	void Assessments();
	void ShowStudents();
	void CreateStudent();
	double AverageAssessments();
	

};
