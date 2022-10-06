/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
using namespace std;
class Plane
{
private:
	string P_Make, P_Model, P_TailNumber, P_SeatNumber, P_Range, P_MinimumCrew;

public:
	Plane(string p_make, string p_model, string p_tailNumber, string p_seatNumber, string p_range, string p_minimumCrew);
	void setMake(string p_make);
	void setModel(string p_model);
	void setTailNumber(string p_tailNumber);
	void setSeatNumber(string p_seatNumber);
	void setRange(string p_range);
	void setMinimumCrew(string p_minimumCrew);
	string getMake();
	string getModel();
	string getTailNumber();
	string getSeatNumber();
	string getRange();
	string getMinimumCrew();
};
