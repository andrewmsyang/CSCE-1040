/*
	Andrew Yang 11229926 ay0123
	CSCE 1040 Exam2
*/

#include<iostream>
#include"rat.h"
using namespace std;

int main() {
	Rat *ratt = new Rat[6];//dynamically allocate array of size 6
	
	ratt->setBreed(ratt);
	ratt->setWeight(ratt);
	ratt->setName(ratt);
	ratt->setGender(ratt);
	ratt->setFavoriteFood(ratt);
	ratt->setColor(ratt);
	ratt->setComments(ratt);
	ratt->printRat(ratt);
	
	delete []ratt; //clean up all allocated space
	return 0;
}

