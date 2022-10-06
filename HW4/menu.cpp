/*
	Andrew Yang 11229926 ay0123
*/
#include <iostream>
#include "menu.h"
using namespace std;

int Menu::operatemenu()
{
    int x;
    cout << "Add plane" << endl;
    cout << "Add crew member" << endl;
    cout << "Add flight" << endl;
    cout << "Edit plane" << endl;
    cout << "Edit crew member" << endl;
    cout << "Edit flight" << endl;
    cout << "Delete plane" << endl;
    cout << "Delete crew member" << endl;
    cout << "Delete flight" << endl;
    cout << "Search plane" << endl;
    cout << "Search crew member" << endl;
    cout << "Search flight" << endl;
    cout << "Print the plane" << endl;
    cout << "Print the crew member" << endl;
    cout << "Print the flight" << endl;
    cout << "Quit" << endl;
    cout << "Please enter the number of operation: ";
    cin >> x;
    cin.ignore();
    if (x < 1 || x > 16)
    {
        cout << "Error! Please try again" << endl;
    }
    return x;
}

