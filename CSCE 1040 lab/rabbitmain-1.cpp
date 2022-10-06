/*
        Andrew Yang ay0123 11229926
        Lab Exam 4
        problem 5
*/
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include"rabbit.h"
using namespace std;

int main(){
	//information variables
	string rabbitBreed; 
	string rabbitWeight; 
	string rabbitName; 
	string rabbitGender; 
	string rabbitSpayedOrNeutered;
	string rabbitID; 
	string rabbitColor;
	string rabbitComments;
	vector<Rabbit>rabbitvector;//vector
	
	for (int i = 0; i < 5; i++)//enter all the inputs
	{
		cout << "Enter the rabbit #" << i+1 << " breed: ";
		getline(cin,rabbitBreed);
		cout << "Enter the rabbit #" << i+1 << " weight: ";
		cin >> rabbitWeight;
		cout << "Enter the rabbit #" << i+1 << " name: ";
		cin.ignore();
		getline(cin, rabbitName);
		cout << "Enter the rabbit #" << i+1 << " gender: ";
		getline(cin, rabbitGender);
	while(1)//a loop for enter again if the input is error
	{
		cout << "Is this rabbit spayed or neutered? Please enter yes/no: ";
		cin >> rabbitSpayedOrNeutered;
			if (rabbitSpayedOrNeutered == "yes" || rabbitSpayedOrNeutered == "no")//try again if the input is error
			break;
			cout << "Input Error! Please try again!" << endl;
	}
		cout << "Enter the rabbit #" << i+1 << " ID: ";
		cin.ignore();
		getline(cin,rabbitID);
		cout << "Enter the rabbit #" << i+1 << " color: ";
		getline(cin, rabbitColor);
		cout << "Enter the rabbit #" << i+1 << " other comments: ";
		getline(cin, rabbitComments);
		Rabbit rabbit(rabbitBreed, rabbitWeight, rabbitName, rabbitGender, rabbitSpayedOrNeutered, rabbitID, rabbitColor, rabbitComments);//declare variables
		rabbitvector.push_back(rabbit);//adding these information to vector
	}
	
	cout << endl << "Here're all of the information of 5 rabbits: " << endl;
	cout << setw(15) << "Breed" << setw(15) << "Weight" << setw(15) << "Name" << setw(15) << "Gender" << setw(15) << "Y/N" << setw(15) << "ID" << setw(15) << "Color" << setw(15) << "Comments" << endl;
	for (int i = 0; i < rabbitvector.size(); i++)//print the result
	{
		cout << setw(15) << rabbitvector.at(i).getBreed() << setw(15) << rabbitvector.at(i).getWeight() << setw(15) << rabbitvector.at(i).getName() << setw(15) << rabbitvector.at(i).getGender() << setw(15) << rabbitvector.at(i).getSpayedOrNeutered() << setw(15) << rabbitvector.at(i).getID() << setw(15) << rabbitvector.at(i).getColorDescription() << setw(15) << rabbitvector.at(i).getComments() << endl; 
	}
	
	rabbitvector.clear();//clean up the vector
	return 0;
}
