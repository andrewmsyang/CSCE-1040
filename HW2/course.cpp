/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
#include <string>
#include "course.h"
using namespace std;

void course::setcID(int ID)
{
   courseID = ID;
}

void course::setcname(string name)
{
   coursename = name;
}

void course::setclocation(string courselocation)
{
   location = courselocation;
}

void course::setccapacity(int coursecapacity)
{
   capacity = coursecapacity;
}
