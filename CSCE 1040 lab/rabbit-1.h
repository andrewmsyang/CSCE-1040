/*
        Andrew Yang ay0123 11229926
        Lab Exam 4
        problem 5
*/
#include<iostream>
#include"animal.h"
using namespace std;

class Rabbit : public Animal {
private:
	string animalBreed; 	 // rabitt will have attributes of these variables and the attributs of animal class
	string SN;
	string ID;
	string otherComments;
	
public:
	Rabbit(string breed, string weight, string name, string gender, string sn, string ID, string color, string comment);
	Rabbit();
	void setBreed(string breed);
	void setSpayedOrNeutered(string sn);
	void setID(string id);
	void setComments(string comment);
	string getBreed();
	string getSpayedOrNeutered();
	string getID();
	string getComments();
};
