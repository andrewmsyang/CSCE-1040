/*
	Andrew yang 11229926 ay0123
*/
#include<iostream>
#include"pilot.h"
using namespace std;

Pilot::Pilot(string name, string id, string status, string code, string hour)
{
	Crew_Name=name;
	Crew_ID=id;
	Crew_Status=status;
	Pilot_Code=code;
	Pilot_Hour=hour;
}

void Pilot::setCode(string code)
{
	Pilot_Code=code;
}
void Pilot::setHour(string hour)
{
	Pilot_Hour=hour;
}
string Pilot::getCode()
{
        return Pilot_Code;
}
string Pilot::getHour()
{
	return Pilot_Hour;
}
