/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
#include "crew.h"
using namespace std;
Crew::Crew(string name, int id, string type, string status)
{
    Name = name;
    ID = id;
    Type = type;
    Status = status;
}
void Crew::SetName(string name)
{
    Name = name;
}
string Crew::GetName()
{
    return Name;
}
void Crew::SetID(int id)
{
    ID = id;
}
int Crew::GetID()
{
    return ID;
}
void Crew::SetType(string type)
{
    Type = type;
}
string Crew::GetType()
{
    return Type;
}
void Crew::SetStatus(string status)
{
    Status = status;
}
string Crew::GetStatus()
{
    return Status;
}

