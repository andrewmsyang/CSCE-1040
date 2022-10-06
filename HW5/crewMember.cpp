/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include"crewMember.h"
using namespace std;

void CrewMember::setName(string name)
{
	Crew_Name=name;
}
void CrewMember::setID(string id)
{
        Crew_ID=id;
}
void CrewMember::setStatus(string status)
{
        Crew_Status=status;
}

string CrewMember::getName()
{
	return Crew_Name;
}

string CrewMember::getID()
{
	return Crew_ID;
}

string CrewMember::getStatus()
{
	return Crew_Status;
}
