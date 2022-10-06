/*
	Andrew Yang 11229926 ay0123
*/
#include <string>
using namespace std;

class course
{
public:
int courseID;
string coursename;
string location;
int enrollment;
int capacity;
    
void setcID(int ID);
void setcname(string name);
void setclocation(string courselocation);
void setccapacity(int coursecapacity); 
};
