/*
	Andrew Yang ay0123 11229926
	Lab Exam3
	Problem 5
*/
#include <iostream>
#include <vector>
#include<string>
#include<iomanip>
#include "rabbit.h"
using namespace std;

int main()//information variables
{
	string breed;
	float weight;
	string name;
	string gender;
	string sn;
	string id;
	string color;
	string comments;
	vector<Rabbit>rabbitvector;//vector

	for(int i = 0; i < 6; i++)//enter all the inputs
	{
		cout << "Enter rabbit #" << i+1 << " breed: ";
		getline(cin,breed);
		cout << "Enter rabbit #" << i+1 << " weight: ";
                cin >> weight;
		cout << "Enter rabbit #" << i+1 << " name: ";
                cin.ignore();
		getline(cin,name);
		cout << "Enter rabbit #" << i+1 << " gender: ";
                getline(cin,gender);
		cout << "Enter rabbit #" << i+1 << " spayed or neutered[yes/no]: ";
                getline(cin,sn);
		cout << "Enter rabbit #" << i+1 << " id: ";
                getline(cin,id);
		cout << "Enter rabbit #" << i+1 << " color: ";
                getline(cin,color);
		cout << "Enter rabbit #" << i+1 << " comments: ";
                getline(cin,comments);
		
		Rabbit rabbit(breed, weight, name, gender, sn, id, color, comments);//declare variables
		rabbitvector.push_back(rabbit);//adding these information tto vector
	}	
	cout << endl << "Here's all the information of rabbits: " << endl;
	cout << setw(10) << "Breed" << setw(10) << "Weight" << setw(10) << "Name" << setw(10) << "Gender" << setw(10) << "Y/N" << setw(10) << "ID" << setw(15) << "Color" << setw(15) << "comments" << endl;

	for (int i = 0; i < rabbitvector.size(); i++)//print the result
	{
		rabbitvector.at(i).Printrabbit();
	}
	rabbitvector.clear();//clean up the vector
	return 0;
}

