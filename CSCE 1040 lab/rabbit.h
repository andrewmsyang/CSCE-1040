/*
        Andrew Yang ay0123 11229926
        Lab Exam3
        Problem 5
*/
#include <iostream>
using namespace std;

class Rabbit
{
private://a rabbit will have attributes of these variables
	string Breed;
	float Weight;
	string Name;
	string Gender;
	string SN;
	string ID;
	string Color;
	string Comments;
public:
	Rabbit();
	Rabbit(string breed, float weight, string name, string gender, string sn, string id, string color, string comments);
	void setBreed(string breed);
	void setWeight(float weight);
	void setName(string name);
	void setGender(string gender);
	void setSN(string sn);
	void setID(string id);
	void setColor(string color);
	void setComments(string comments);
	string getBreed();
	float getWeight();
	string getName();
	string getGender();
	string getSN();
        string getID();
        string getColor();
        string getComments();
	void Printrabbit();
};

