/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include"cabin.h"
using namespace std;
Cabin::Cabin(string name, string id, string status, string position)
{
	Crew_Name=name;
	Crew_ID=id;
	Crew_Status=status;
	Cabin_position=position;
}

void Cabin::setposition(string position)
{
	Cabin_position=position;
}

string Cabin::getposition()
{
	return Cabin_position;
}
