/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include"plane.h"
using namespace std;
Plane::Plane(string p_make, string p_model, string p_tailNumber, string p_seatNumber, string p_range, string p_minimumCrew)
{
	P_Make=p_make;
	P_Model=p_model;
	P_TailNumber=p_tailNumber;
	P_SeatNumber=p_seatNumber;
	P_Range=p_range;
	P_MinimumCrew=p_minimumCrew;
}
void Plane::setMake(string p_make)
{
	P_Make=p_make;
}

string Plane::getMake()
{
	return P_Make;
}

void Plane::setModel(string p_model)
{
	P_Model=p_model;
}

string Plane::getModel()
{
	return P_Model;
}

void Plane::setTailNumber(string p_tailNumber)
{
	P_TailNumber=p_tailNumber;
}

string Plane::getTailNumber()
{
	return P_TailNumber;
}

void Plane::setSeatNumber(string p_seatNumber)
{
	P_SeatNumber=p_seatNumber;
}

string Plane::getSeatNumber()
{
	return P_SeatNumber;
}

void Plane::setRange(string p_range)
{
	P_Range=p_range;
}

string Plane::getRange()
{
	return P_Range;
}

void Plane::setMinimumCrew(string p_minimumCrew)
{
	P_MinimumCrew=p_minimumCrew;
}

string Plane::getMinimumCrew()
{
	return P_MinimumCrew;
}
