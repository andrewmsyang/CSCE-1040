/*
        Andrew Yang ay0123 11229926
        Lab Exam 4
        problem 5
*/
#include<iostream>
using namespace std;

class Animal//class animal
{
protected://attributes indicated in the base class animal
	string animalWeight;
	string animalName;
	string animalGender;
	string colorDescription;
	
public:
	void setWeight(string weight);
	void setName(string name);
	void setGender(string gender);
	void setColorDescription(string color);
	string getWeight();
	string getName();
	string getGender();
	string getColorDescription();
};

