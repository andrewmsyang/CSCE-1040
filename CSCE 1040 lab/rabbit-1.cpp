/*
        Andrew Yang ay0123 11229926
        Lab Exam 4
        problem 5
*/
#include<iostream>
#include"rabbit.h"
using namespace std;

Rabbit::Rabbit()// to set all the data elements
{
        animalBreed = "none";
        animalWeight = "none";
        animalName = "none";
        animalGender = "none";
        SN = "none";
        ID = "none";
        colorDescription = "none";
        otherComments = "none";
}
Rabbit::Rabbit(string breed, string weight, string name, string gender, string sn, string id, string color, string comment)
{//set the data variables
	animalBreed = breed;
	animalWeight = weight;
	animalName = name;
	animalGender = gender;
	SN = sn;
	ID = id;
	colorDescription = color;
	otherComments = comment;
}

//all the function use to gather the data and print out the result
void Rabbit::setBreed(string breed)
{
	animalBreed = breed;
}
void Rabbit::setSpayedOrNeutered(string sn)
{
        SN = sn;
}
void Rabbit::setID(string id)
{
        ID = id;
}
void Rabbit::setComments(string comment)
{
        otherComments = comment;
}


string Rabbit::getBreed()
{
	return animalBreed;
}

string Rabbit::getSpayedOrNeutered()
{
	return SN;
}

string Rabbit::getID()
{
	return ID;
}

string Rabbit::getComments()
{
	return otherComments;
}
