/*
	Andrew Yang 11229926 ay0123
	CSCE 1040 Exam2
*/
#include<iostream>
#include<string>
#include<iomanip>
#include"rat.h"//rat.h libary
using namespace std;

Rat::Rat(){//to set all the data elements
	Breed = "No Breed";
	Weight = 0.0;
	Name = "No Name";
	Gender = "No Gender";
	FavoriteFood = "No FavoriteFood";
	Color = "No Color";
	Comments = "No Comments";
}
void Rat::setBreed(Rat rat[6]){//function to store Bread of a rat
	for(int i=0; i<6; i++)
	{
		cout<<"Please enter the breed of rat #"<<i+1<<": ";
		getline(cin, rat[i].Breed);
	}
}

void Rat::setWeight(Rat rat[6]) {//function to store weight of a rat
        for (int i = 0; i < 6; i++)
        {
                cout << "Please enter the weight of rat #" << i + 1 << ": ";
                cin >> rat[i].Weight;
		cin.ignore();
        }
}

void Rat::setName(Rat rat[6]){//function to store Name of a rat
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter the name of rat #" << i + 1 << ": ";
		getline(cin, rat[i].Name);
	}
}

void Rat::setGender(Rat rat[6]){//function to store gender of a rat
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter the gender of rat #" << i + 1 << ": ";
		getline(cin, rat[i].Gender);
	}
}

void Rat::setFavoriteFood(Rat rat[6]){//function to store favoritefood of a rat
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter the favoritefood of rat #" << i + 1 << ": ";
		getline(cin, rat[i].FavoriteFood);
	}
}

void Rat::setColor(Rat rat[6]) {//function to store color of a rat
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter the color of rat #" << i + 1 << ": ";
		getline(cin, rat[i].Color);
	}
}

void Rat::setComments(Rat rat[6]) {//function to store comments of a rat
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter the comments of rat #" << i + 1 << ": ";
		getline(cin, rat[i].Comments);
	}
}

void Rat::printRat(Rat rat[6]) {//function print all the data of rates
	cout << setw(15)<< "Here is all of the information of 6 rats: " << endl;
	cout << setw(15) <<"No."<<setw(15)<<"Breed"<<setw(15)<<"Weight"<<setw(15)<<"Name"<<setw(15)<<"Gender"<<setw(15)<<"Favoritefood"<<setw(15)<<"Color"<<setw(15)<<"Comments"<<endl;
	for (int i = 0; i < 6; i++)
	{
		cout << setw(15) << i + 1 << setw(15) << rat[i].Breed << setw(15) << rat[i].Weight << setw(15) << rat[i].Name << setw(15) << rat[i].Gender << setw(15) << rat[i].FavoriteFood << setw(15) << rat[i].Color << setw(15) << fixed << setprecision(1) << rat[i].Comments << endl;
	}


}

