/*
	Andrew Yang 11229926 ay0123
*/
#ifndef Cabin_h
#define Cabin_h
#include<iostream>
#include"crewMember.h"
using namespace std;
class Cabin:public CrewMember
{
private:
	string Cabin_position;

public:
Cabin(string name, string id, string status, string position);

	void setposition(string position);
	string getposition();
};
#endif
