/*
        Andrew Yang ay0123 11229926
        Lab Exam3
        Problem 5
*/
#include<iostream>
#include<iomanip>
#include<string>
#include"rabbit.h"
using namespace std;

Rabbit::Rabbit()//to set all the data elements
{
	Breed = "none";
	Weight = 0.0;
	Name = "none";
	Gender = "none";
	SN = "none";
	ID = "none";
	Color = "none";
	Comments = "none";
}

Rabbit::Rabbit(string breed, float weight, string name, string gender, string sn, string id, string color, string comments)//set the data variables
{
	Breed = breed;
	Weight = weight;
	Name = name;
	Gender = gender;
	SN = sn;
	ID = id;
	Color = color;
	Comments = comments;
}

//all the function use to geather the data and print out the result
void Rabbit::setBreed(string breed)
{
	Breed = breed;
}
string Rabbit:: getBreed()
{
	return Breed;
}

void Rabbit::setWeight(float weight)
{
	Weight = weight;
}
float Rabbit:: getWeight()
{
	return Weight;
}

void Rabbit:: setName(string name)
{
	Name = name;
}
string Rabbit:: getName()
{
	return Name;
}
   
void Rabbit:: setGender(string gender)
{
	Gender = gender;
}
string Rabbit:: getGender()
{
	return Gender;
}

void Rabbit:: setSN(string sn)
{
	SN = sn;
}
string Rabbit:: getSN()
{
	return SN;
}

void Rabbit:: setID(string id)
{
	ID = id;
}
string Rabbit:: getID()
{
	return ID;
}

void Rabbit:: setColor(string color)
{
	Color = color;
}
string Rabbit:: getColor()
{
	return Color;
}

void Rabbit:: setComments(string comments)
{
	Comments = comments;
}
string Rabbit:: getComments()
{
	return Comments;
}

void Rabbit::Printrabbit()
{
	cout << setw(10) << getBreed() << setw(10) << getWeight() << setw(10) << getName() << setw(10) << getGender() << setw(10) << getSN() << setw(10) << getID() << setw(15) << getColor() << setw(15) << getComments() << endl; 
}

