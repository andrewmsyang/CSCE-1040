/*
	Andrew Yang ay0123 11229926
	Lab Exam 4 
	problem 5
*/
#include<iostream>
#include"animal.h"
using namespace std;
//set the function the get the data of the animal
void Animal::setWeight(string weight)
{
	animalWeight = weight;
}
void Animal::setName(string name)
{
        animalName = name;
}
void Animal::setGender(string gender)
{
        animalGender = gender;
}
void Animal::setColorDescription(string color)
{
        colorDescription = color;
}
string Animal::getWeight()
{
	return animalWeight;
}
string Animal::getName()
{
	return animalName;
}
string Animal::getGender()
{
	return animalGender;
}
string Animal::getColorDescription()
{
	return colorDescription;
}

