/*
	Andrew Yang 11229926 ay0123
*/
#ifndef Copilot_h
#define Copilot_h
#include<iostream>
#include"crewMember.h"
using namespace std;

class Copilot : public CrewMember
{
private:
	string Copilot_Code, Copilot_Hour;

public:
	Copilot(string name, string id, string status, string code, string hour);
	void setCode(string code);
	void setHour(string hour);
	string getCode();
	string getHour();
};
#endif
