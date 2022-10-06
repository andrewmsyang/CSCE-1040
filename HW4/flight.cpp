/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
#include "flight.h"
using namespace std;

Flight::Flight(string f_id, string p_id, string s_code, string e_code, int pilot1, int pilot2, int copilot1, int copilot2, int cabin1, int cabin2, int syear, int smonth, int sday, int shour, int sminute, int eyear, int emonth, int eday, int ehour, int eminute, string flightstatus)
{
    F_ID = f_id;
    P_ID = p_id;
    S_Code = s_code;
    E_Code = e_code;
    Pilot1 = pilot1;
    Pilot2 = pilot2;

    CoPilot1 = copilot1;
    CoPilot2 = copilot2;
    Cabin1 = cabin1;
    Cabin2 = cabin2;

    Syear = syear;
    Smonth = smonth;
    Sday = sday;
    Shour = shour;
    Sminute = sminute;
    Eyear = eyear;
    Emonth = emonth;
    Eday = eday;
    Ehour = ehour;
    Eminute = eminute;
    FlightStatus = flightstatus;
}

void Flight::SetFlight(string f_id)
{
    F_ID = f_id;
}

void Flight::SetPlane(string p_id)
{
    P_ID = p_id;
}

void Flight::SetSCode(string s_code)
{
    S_Code = s_code;
}

void Flight::SetECode(string e_code)
{
    E_Code = e_code;
}

void Flight::SetPilot1(int pilot1)
{
    Pilot1 = pilot1;
}

void Flight::SetPilot2(int pilot2)
{
    Pilot2 = pilot2;
}

void Flight::SetCoPilot1(int copilot1)
{
    CoPilot1 = copilot1;
}

void Flight::SetCoPilot2(int copilot2)
{
    CoPilot2 = copilot2;
}

void Flight::SetCabin1(int cabin1)
{
    Cabin1 = cabin1;
}

void Flight::SetCabin2(int cabin2)
{
    Cabin2 = cabin2;
}

void Flight::SetSDate(int syear, int smonth, int sday, int shour, int sminute)
{
    Syear = syear;
    Smonth = smonth;
    Sday = sday;
    Shour = shour;
    Sminute = sminute;
}

void Flight::SetEDate(int eyear, int emonth, int eday, int ehour, int eminute)
{
    Eyear = eyear;
    Emonth = emonth;
    Eday = eday;
    Ehour = ehour;
    Eminute = eminute;
}

void Flight::SetFlightStatus(string flightstatus)
{
    FlightStatus = flightstatus;
}

string Flight::GetFlight()
{
    return F_ID;
}

string Flight::GetPlane()
{
    return P_ID;
}

string Flight::GetSCode()
{
    return S_Code;
}

string Flight::GetECode()
{
    return E_Code;
}

int Flight::GetPilot1()
{
    return Pilot1;
}

int Flight::GetPilot2()
{
    return Pilot2;
}

int Flight::GetCoPilot1()
{
    return CoPilot1;
}

int Flight::GetCoPilot2()
{
    return CoPilot2;
}

int Flight::GetCabin1()
{
    return Cabin1;
}

int Flight::GetCabin2()
{
    return Cabin2;
}

void Flight::GetSDate()
{
    cout << Syear << "." << Smonth << "." << Sday << " " << Shour << ":" << Sminute;
}

void Flight::GetEDate()
{
    cout << Eyear << "." << Emonth << "." << Eday << " " << Ehour << ":" << Eminute;
}

int Flight::GetSyear()
{
    return Syear;
}

int Flight::GetSmonth()
{
    return Smonth;
}

int Flight::GetSday()
{
    return Sday;
}

int Flight::GetShour()
{
    return Shour;
}

int Flight::GetSminute()
{
    return Sminute;
}

int Flight::GetEyear()
{
    return Eyear;
}

int Flight::GetEmonth()
{
    return Emonth;
}

int Flight::GetEday()
{
    return Eday;
}

int Flight::GetEhour()
{
    return Ehour;
}

int Flight::GetEminute()
{
    return Eminute;
}

string Flight::GetFlightStatus()
{
   return FlightStatus;
}
