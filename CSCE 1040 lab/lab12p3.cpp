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
	Employee(const char *name1, long Salary)
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
	Manager(const char *name, long Salary, char *Degree):Employee(name, Salary)
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
	Worker(const char* name, long Salary, char *Position):Employee(name, Salary)
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
	Officer(const char* name, long Salary, char *Position):Worker(name, Salary, Position)
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
	Technician(const char* name, long Salary, char *Position):Worker(name, Salary, Position)
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
	#define NUM_EMPLOYEES 6
	Employee* EmployeeList[NUM_EMPLOYEES];
	EmployeeList[0] = new Manager("Carla Garcia", 35000, "Economist");
	EmployeeList[1] = new Manager("Juan Perez", 38000, "Engineer");
	EmployeeList[2] = new Officer("Pedro Egia", 18000, " Officer 1");
	EmployeeList[3] = new Officer("Luisa Penia", 15000, " Officer 2");
	EmployeeList[4] = new Technician("Javier Ramos", 19500, "Welder");
	EmployeeList[5] = new Technician("Amaia Bilbao", 12000, "Electricist");

	for(int i = 0; i < NUM_EMPLOYEES; i++) 
	EmployeeList[i]->show_info();
	return 0;

