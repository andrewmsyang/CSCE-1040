/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
#include "plane.h"
using namespace std;

Plane::Plane(string make, int model, string tailnumber, int seats, int range, int crew)
{
    Make = make;
    Model = model;
    Tailnumber = tailnumber;
    Seats = seats;
    Range = range;
    Crew = crew;
}

void Plane::SetMake(string make)
{
    Make = make;
}
string Plane::GetMake()
{
    return Make;
}

void Plane::SetModel(int model)
{
    Model = model;
}
int Plane::GetModel()
{
    return Model;
}

void Plane::SetTailnumber(string tailnumber)
{
    Tailnumber = tailnumber;
}
string Plane::GetTailnumber()
{
    return Tailnumber;
}

void Plane::SetSeats(int seats)
{
    Seats = seats;
}
int Plane::GetSeats()
{
    return Seats;
}

void Plane::SetRange(int range)
{
    Range = range;
}
int Plane::GetRange()
{
    return Range;
}

void Plane::SetCrew(int crew)
{
    Crew = crew;
}
int Plane::GetCrew()
{
    return Crew;
}
