/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
using namespace std;

class Plane
{
private:
    string Make;
    int Crew, Seats, Range, Model;
    string Tailnumber;
public:
    Plane(string make, int model, string tailnumber, int seats, int range, int crew);
    void SetMake(string make);
    void SetModel(int model);
    void SetTailnumber(string tailnumber);
    void SetSeats(int seats);
    void SetRange(int range);
    void SetCrew(int crew);
    int GetSeats();
    int GetRange();
    int GetCrew();
    string GetMake();
    int GetModel();
    string GetTailnumber();
};

