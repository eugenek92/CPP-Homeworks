#pragma once
#include<iostream>
#include<string>
#include"Student.h"

using namespace std;

struct Group {
private:
	string name;
	Student* students;
	int size;
public:
	void CreateGroup();
	void AddStudent();
	void ShowStudents();
	void Debt();
	void ShowAssessments();
	void ShowAverage();
};
