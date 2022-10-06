/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include"copilot.h"
using namespace std;
Copilot::Copilot(string name, string id, string status, string code, string hour)
{
	Crew_Name=name;
	Crew_ID=id;
	Crew_Status=status;
	Copilot_Code=code;
	Copilot_Hour=hour;
}

void Copilot::setCode(string code)
{
	Copilot_Code=code;
}
void Copilot::setHour(string hour)
{
	Copilot_Hour=hour;
}
string Copilot::getCode()
{
        return Copilot_Code;
}
string Copilot::getHour()
{
	return Copilot_Hour;
}
