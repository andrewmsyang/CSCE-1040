/*
	Andrew Yang 11229926 ay0123
*/
#ifndef Pilot_h
#define Pilot_h
#include<iostream>
#include"crewMember.h"
using namespace std;
class Pilot : public CrewMember
{
private:
	string Pilot_Code, Pilot_Hour;

public:
	Pilot(string name, string id, string status, string code, string hour);
	void setCode(string code);
	void setHour(string hour);
	string getCode();
	string getHour();
};
#endif
