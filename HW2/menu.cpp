/*
	Andrew Yang 11229926 ay0123
*/

#include <iostream>
using namespace std;

int menu::providemenu()
{
    cout << "Menu Options: " << endl;
    cout << "1. Add a new course" << endl;
    cout << "2. Add a new student" << endl;
    cout << "3. Add a student to a course" << endl;
    cout << "4. Add grades for a student in a course" << endl;
    cout << "5. Print a list of all grades for a student in a course" << endl;
    cout << "6. Print a list of all students in a course" << endl;
    cout << "7. Compute the average for a student in a course" << endl;
    cout << "8. Print a list of all courses" << endl;
    cout << "9. Print a list of all students" << endl;
    cout << "10. Compute the average for a course" << endl;
    cout << "11. Store Grade book" << endl;
    cout << "12. Load Grade book" << endl;
    cout << "13. Quit" << endl;
    
    int choice;
    cout << "Enter the number 1-12: ";
    cin >> choice;
    return choice;
}
