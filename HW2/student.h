/*
	Andrew Yang 11229926 ay0123
*/
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;
class Student
{
public:

Student(string n, int g);

void setName(string name);

void setGrade(int g);

void setEnroll();

string getName() const;

int getGrade() const;

private:

condt static int MAX_CLASS=5; 

int totalEnrollClass;

string name;

int grade;

};
