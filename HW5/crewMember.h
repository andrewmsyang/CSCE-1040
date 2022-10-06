/*
	Andrew Yang 11229926 ay0123
*/
#ifndef CrewMember_h
#define CrewMember_h
#include<iostream>
using namespace std;
class CrewMember
{
protected:
	string Crew_Name, Crew_ID, Crew_Status;

public:
	void setName(string name);
	void setID(string id);
	void setStatus(string status);
	string getName();
	string getID();
	string getStatus();
};
#endif
