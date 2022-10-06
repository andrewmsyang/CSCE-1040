/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
using namespace std;
class Flight
{
private:
	string Flight_ID, Plane_ID, Start_Code, End_Code, Pilots_ID1, Pilots_ID2, Copilots_ID1, Copilots_ID2, Cabin_ID1, Cabin_ID2, Start_Time, End_Time, Flight_Status, Passage_Number;
	
public:
	Flight(string f_id, string p_id, string s_code, string e_code, string pi_id1, string pi_id2, string cp_id1, string cp_id2, string ca_id1, string ca_id2, string s_time, string e_time, string f_status, string p_number);
	void setFlightID(string f_id);
	string getFlightID();
	void setPlaneID(string p_id);
	string getPlaneID();
	void setStartCode(string s_code);
	string getStartCode();
	void setEndCode(string e_code);
	string getEndCode();
	void setPilotsID1(string pi_id1);
	string getPilotsID1();
	void setPilotsID2(string pi_id2);
	string getPilotsID2();
	void setCopilotsID1(string cp_id1);
	string getCopilotsID1();
	void setCopilotsID2(string cp_id2);
	string getCopilotsID2();
	void setCabinID1(string ca_id1);
	string getCabinID1();
	void setCabinID2(string ca_id2);
	string getCabinID2();
	void setStartTime(string s_time);
	string getStartTime();
	void setEndTime(string e_time);
	string getEndTime();
	void setFlightStatus(string f_status);
	string getFlightStatus();
	void setPassageNumber(string p_number);
	string getPassageNumber();
};
