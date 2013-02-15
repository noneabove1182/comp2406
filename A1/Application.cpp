#include <fstream>
#include <iostream>
#include <cstdlib>
#include "Application.h"

Application::Application(string newCourse, int stat, Student* newStudent,
	CourseRelatedQueue* CR)	: applicationNum(AppNum()), course(newCourse), status(stat), student(newStudent),
	CRHead(CR)
{
	
}

Application::~Application()
{

}

int Application::AppNum()
{

	int applicationNumber;

	ifstream number("applicationCounter.txt", ios::in);

	if(!number){
		cout << "Could not open file" << endl;
		exit(1);
	}

	char tmpText[10];

	number.getline(tmpText, 10);
	applicationNumber = atoi(tmpText);

	number.close();

	ofstream writeNumber("applicationCounter.txt", ios::trunc);

	applicationNumber++;

	writeNumber << applicationNumber << endl;

	writeNumber.close();

	return applicationNumber;

}