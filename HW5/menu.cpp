/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include"menu.h"
using namespace std;
int Menu::OperateMenu()
{
	int pick;
	cout << endl;
	cout << "Welcome to the Mean Green Airline Application" << endl;
	cout << "1. Add plane" << endl;
	cout << "2. Add crew member" << endl;
	cout << "3. Add flight" << endl;
	cout << "4. Edit plane" << endl;
	cout << "5. Edit crew member" << endl;
	cout << "6. Edit flight" << endl;
	cout << "7. Delete plane" << endl;
	cout << "8. Delete crew member" << endl;
	cout << "9. Delete flight" << endl;
	cout << "10. Search plane" << endl;
	cout << "11. Search crew member" << endl;
	cout << "12. search flight" << endl;
	cout << "13. Print the plane" << endl;
	cout << "14. Print the crew member" << endl;
	cout << "15. Print the flight" << endl;
	cout << "16. Store data of all airline." << endl;
	cout << "17. Load data of all airline." << endl;
	cout << "18. Quit" << endl;
	cout << "Enter the number of operation(1~18): ";
	cin >> pick;

	if (pick>18||pick<1)
	{
	cout << "Error! Please enter again!" << endl;
	OperateMenu();
	}

	return pick;
}
