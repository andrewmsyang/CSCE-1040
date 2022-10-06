/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include"flight.h"
using namespace std;

Flight::Flight(string f_id, string p_id, string s_code, string e_code, string pi_id1, string pi_id2, string cp_id1, string cp_id2, string ca_id1, string ca_id2, string s_time, string e_time, string f_status, string p_number)
{
	Flight_ID = f_id;
	Plane_ID = p_id;
	Start_Code = s_code;
	End_Code = e_code;
	Pilots_ID1 = pi_id1;
	Pilots_ID2 = pi_id2;
	Copilots_ID1 = cp_id1;
	Copilots_ID2 = cp_id2;
	Cabin_ID1 = ca_id1;
	Cabin_ID2 = ca_id2;
	Start_Time = s_time;
	End_Time = e_time;
	Flight_Status = f_status;
	Passage_Number = p_number;
}

void Flight::setFlightID(string f_id)
{
	Flight_ID=f_id;
}
string Flight::getFlightID()
{
	return Flight_ID;
}

void Flight::setPlaneID(string p_id)
{
	Plane_ID=p_id;
}
string Flight::getPlaneID()
{
	return Plane_ID;
}

void Flight::setStartCode(string s_code)
{
	Start_Code=s_code;
}
string Flight::getStartCode()
{
	return Start_Code;
}

void Flight::setEndCode(string e_code)
{
	End_Code=e_code;
}
string Flight::getEndCode()
{
	return End_Code;
}

void Flight::setPilotsID1(string pi_id1)
{
	Pilots_ID1=pi_id1;
}
string Flight::getPilotsID1()
{
	return Pilots_ID1;
}

void Flight::setPilotsID2(string pi_id2)
{
	Pilots_ID2=pi_id2;
}
string Flight::getPilotsID2()
{
	return Pilots_ID2;
}

void Flight::setCopilotsID1(string cp_id1)
{
	Copilots_ID1=cp_id1;
}
string Flight::getCopilotsID1()
{
	return Copilots_ID1;
}

void Flight::setCopilotsID2(string cp_id2)
{
	Copilots_ID2=cp_id2;
}
string Flight::getCopilotsID2()
{
	return Copilots_ID2;
}

void Flight::setCabinID1(string ca_id1)
{
	Cabin_ID1=ca_id1;
}
string Flight::getCabinID1()
{
	return Cabin_ID1;
}

void Flight::setCabinID2(string ca_id2)
{
	Cabin_ID2=ca_id2;
}
string Flight::getCabinID2()
{
	return Cabin_ID2;
}

void Flight::setStartTime(string s_time)
{
	Start_Time=s_time;
}
string Flight::getStartTime()
{
	return Start_Time;
}

void Flight::setEndTime(string e_time)
{
	End_Time=e_time;
}
string Flight::getEndTime()
{
	return End_Time;
}

void Flight::setFlightStatus(string f_status)
{
	Flight_Status=f_status;
}
string Flight::getFlightStatus()
{
	return Flight_Status;
}

void Flight::setPassageNumber(string p_number)
{
	Passage_Number = p_number;
}
string Flight::getPassageNumber()
{
	return Passage_Number;
}
