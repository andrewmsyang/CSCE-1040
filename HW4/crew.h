/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
using namespace std;
class Crew
{
private:
    string Name, Type, Status;
    int ID;
public:
    Crew(string name, int id, string type, string status);
    void SetName(string name);
    void SetID(int id);
    void SetType(string type);
    void SetStatus(string status);
    string GetName();
    string GetType();
    string GetStatus();
    int GetID();
};
