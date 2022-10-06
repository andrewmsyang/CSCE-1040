/*
	Andrew Yang 11229926 ay0123
*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Employee {
private:
	char name[20];
	long salary;

public://constructors
	Employee(char *name1, long Salary)
	{
	strcpy(name, name1);
	salary = Salary;
	}
	virtual void show_info ()
	{
	this->show_info();
	}
	char* getName()
	{
	return name;
	}
	long GetSalary()
	{
	return salary;
	}
};

class Manager : public Employee
{
protected:
	char *degree;

public://constructors
	Manager(char *name, long Salary, char *Degree):Employee(name, Salary)
	{
	degree = Degree;
	}
	void show_info()
	{
	cout << "Manager:" << getName() << endl;
	cout << "degree:" << degree << endl;
	cout << "salary: " << this->GetSalary() << endl;
	}
};

class Worker : public Employee
{
protected:
	char *position;

public://constructors
	Worker(char* name, long Salary, char *Position):Employee(name, Salary)
	{
	position = Position;
	}
	void show_info()
	{
	cout << "Worker:" << getName() << endl;
	cout << "position:" << position << endl;
	cout << "salary:" << this->GetSalary() << endl;
	}
};

class Officer : public Worker
{
public://constructors
	Officer(char* name, long Salary, char *Position):Worker(name, Salary, Position)
	{
	
	}
	void show_info()
	{
	cout << "Officer:" << getName() << endl;
	cout << "position:" << position << endl;
	cout << "salary:" << this->GetSalary() << endl;
	}
};

class Technician : public Worker
{
public://constructors
	Technician(char* name, long Salary, char *Position):Worker(name, Salary, Position)
	{
	}
	void show_info()
	{
	cout << "Technician:" << getName() <<endl;
	cout << "position:" << position << endl;
	cout << "salary:" << this->GetSalary() << endl;
	}
};

int main()
{
	int pick;
	string type;
        int counter = 0; 
	int x = 0;
	long employeeSalary;
	char *employeeName, *employeePosition, *employeeDegree, *searchName;
	Employee* EmployeeList[10];
	
	employeeName = new char(20 * sizeof(char));
	employeePosition = new char(20 * sizeof(char));
	employeeDegree = new char(20 * sizeof(char));
	searchName = new char(20 * sizeof(char));
	
	while(1)
	{
	cout << "Menu" << endl;
	cout << "1. Add employee" << endl;
	cout << "2. The list of all employees" << endl;
	cout << "3. Search employee" << endl;
	cout << "4. Exit" << endl;
		
	cout << endl << "Enter a number between 1~4: ";
	cin >> pick;
		if (pick == 1)
		{
		cout << "Enter employee's name: ";
		cin.ignore();
		cin.getline(employeeName, 20);
		cout << "Enter employee's type (only Manager, Officer, or Technician: ";
		cin >> type;
			if (type == "Manager")
			{
			cout << "Enter employee's salary: ";
			cin >> employeeSalary;
			cout << "Enter employee's degree: ";
			cin >> employeeDegree;
			EmployeeList[counter] = new Manager(employeeName, employeeSalary, employeeDegree);
			}
			if (type == "Officer")
			{
			cout << "Enter employee's salary: ";
			cin >> employeeSalary;
			cout << "Enter employee's position: ";
			cin >> employeePosition;
			EmployeeList[counter] = new Officer(employeeName, employeeSalary, employeePosition);
			}
			if (type == "Technician")
			{
			cout << "Enter employee's salary: ";
			cin >> employeeSalary;
			cout << "Enter employee's position: ";
			cin >> employeePosition;
			EmployeeList[counter] = new Technician(employeeName, employeeSalary, employeePosition);
			}
			counter++;

			cout << "Add successfully!" << endl << endl;
		}
		else if (pick == 2)
		{
		for(int i = 0; i < counter; i++) 
			EmployeeList[i]->show_info();
			cout << endl;
		}
		else if (pick == 3)
		{
			cout << "Enter the employee's name: ";
			x = 0;
			cin.ignore();
			cin.getline(searchName, 20);
			for (int i = 0; i < counter; i++)
			{
			if (searchName == EmployeeList[i]->getName())
			{
			cout << "The result is: " << endl;
			x = 1;
			EmployeeList[i]->show_info();
			break;
			}
			if (x = 0)
			cout << "No result!" << endl;
			}
		}
		else if (pick == 4)
		{
			cout << "Goodbye!" << endl;
			return 0;
		}
		else
		{
			cout << "Error! please enter again!" << endl;
		}
	}
	return 0;
}
