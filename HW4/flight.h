/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
using namespace std;

class Flight
{
private:
    string F_ID, P_ID, S_Code, E_Code;
    int Pilot1, Pilot2, CoPilot1, CoPilot2, Cabin1, Cabin2;
    int Syear, Smonth, Sday, Shour, Sminute;
    int Eyear, Emonth, Eday, Ehour, Eminute;
    string FlightStatus;
public:
    Flight(string f_id, string p_id, string s_code, string e_code, int pilot1, int pilot2, int copilot1, int copilot2, int cabin1, int cabin2, int syear, int smonth, int sday, int shour, int sminute, int eyear, int emonth, int eday, int ehour, int eminute, string flightstatus);
    void SetFlight(string f_id);
    void SetPlane(string p_id);
    void SetSCode(string s_code);
    void SetECode(string e_code);
    void SetPilot1(int pilot1);
    void SetPilot2(int pilot2);
    void SetCoPilot1(int copilot1);
    void SetCoPilot2(int copilot2);
    void SetCabin1(int cabin1);
    void SetCabin2(int cabin2);
    void SetSDate(int syear, int smonth, int sday, int shour, int sminute);
    void SetEDate(int eyear, int emonth, int eday, int ehour, int eminute);
    void SetFlightStatus(string flightstatus);
    string GetFlight();
    string GetPlane();
    string GetSCode();
    string GetECode();
    int GetPilot1();
    int GetPilot2();
    int GetCoPilot1();
    int GetCoPilot2();
    int GetCabin1();
    int GetCabin2();
    void GetSDate();
    void GetEDate();
    int GetSyear();
    int GetSmonth();
    int GetSday();
    int GetShour();
    int GetSminute();
    int GetEyear();
    int GetEmonth();
    int GetEday();
    int GetEhour();
    int GetEminute();
    string GetFlightStatus();
};
