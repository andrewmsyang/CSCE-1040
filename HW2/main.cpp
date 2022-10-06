/*
	Andrew Yang 11229926 ay0123
*/

#include <iostream>
#include "menu.h"
#include "student.h"
#include "course.h"

using namespace std;

int main()
{
    cout << "+--------------------------------------+" << endl;
    cout << "|    Computer Science and Engineering  |" << endl;
    cout << "|      CSCE 1040 - Computer Science    |" << endl;
    cout << "| Andrew Yang ay0123 ay0123@my.unt.edu |" << endl;
    cout << "+--------------------------------------+" << endl;
    
    int ID, cenroll, coursecapacity, sID, senroll;
    string clocation, sname, name, , sclassification;
    int num_c = 0, num_s;  	
    course c[50];
    student s[50];
    int a = 0;              
    int b = 0;          
    
    
    while(1)
    {
        menu m;
        if(providemenu() == 1)
        {
            cout << "Enter the course ID: ";
            cin >> ID;
            cout << "Enter the course name: ";
            
            getline(cin,name);
            cout << "Enter the course location: ";
            
            getline(cin,courselocation);
            cout << "Enter the capacity of enrollment:";
            cin >> coursecapacity;
            
            for (int i = 0; i<num_c; i++)
            {
                if (ID == c[i].courseID || cname == c[i].coursename)
                {
                    cout << "Course already exists." << endl;
                    a = 1;
                    break;
                }
                else
                {
                    a = 0;
                }
            }
            
            if(a == 0)
            {
                c[num_c].setcID(ID);
                c[num_c].setcname(name);
                c[num_c].setclocation(courselocation);
                c[num_c].setccapacity(coursecapacity);
                num_c ++;
            }
        }

        else if(providemenu() == 2)
        {
            cout << "Enter the student ID: ";
            cin >> sID;
            cout << "Enter the student name: ";
            cin.ignore();
            getline(cin,sname);
            cout << "Enter the classification: ";
            cin.ignore();
            getline(cin,sclassification);
            
            for (int i = 0; i < num_c; i++)
            {
                if (sID == s[i].ID || sname == s[i].name)
                {
                    cout << "Student already exists." << endl;
                    b = 1;
                    break;
                }
                else
                {
                    b = 0;
                }
            }
            
            if(b == 0)
            {
                s[num_s].setsID(sID);
                s[num_s].setsname(sname);
                s[num_s].setsclassification(sclassification);
                num_s ++;
            }
        }
        else if(providemenu() == 3)
        {
            
        }
        else if(providemenu() == 4)
        {
            
        }
        else if(providemenu() == 5)
        {
            
        }
        else if(providemenu() == 6)
        {
            
        }
        else if(providemenu() == 7)
        {
            
        }
        else if(providemenu() == 8)
        {
            
        }
        else if(providemenu() == 9)
        {
            
        }
        else if(providemenu() == 10)
        {
            
        }
        else if(providemenu() == 11)
        {
            
        }
        else if(providemenu() == 12)
        {
            
        }
        else if(providemenu() == 13)
        {
            break;
        }
    }
    return 0;
}

