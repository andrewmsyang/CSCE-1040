/*
	Andrew Yang 11229926 ay0123
	CSCE 1040 Exam2
*/
#include<iostream>
using namespace std;

class Rat {
private:
	string Breed;//A rat will have attributes of these variables
	float Weight;
	string Name;
	string Gender;
	string FavoriteFood;
	string Color;
	string Comments;
	
public:
	Rat();//the needed functions for this program
	void setBreed(Rat rat[6]);
	void setWeight(Rat rat[6]);
	void setName(Rat rat[6]);
	void setGender(Rat rat[6]);
	void setFavoriteFood(Rat rat[6]);
	void setColor(Rat rat[6]);
	void setComments(Rat rat[6]);
	void printRat(Rat rat[6]);
};

