/*
	Andrew Yang 11229916 ay0123
*/
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Employee {
private:
	char name[20];
public:
	Employee(const char *name1)
	{
	strcpy(name, name1);
	}
	virtual void show_info ()
	{
	cout << "Employee" << endl;
	}
	char *getName()
	{
	return name;
	}
};

class manager : public Employee
{
public:
	manager(const char *name):Employee(name)
	{
	}
	void show_info()
	{
	cout << "Manager:" << getName() << endl;
	}
};

class worker : public Employee
{
public:
	worker(const char* name):Employee(name)
	{
	
	}
	void show_info()
	{
	cout << "Worker:" << getName() <<endl;
	}
};

class officer : public Employee
{
public:
	officer(const char* name):Employee(name)
	{
	
	}
	void show_info()
	{
	cout << "Officer:" << getName() <<endl;
	}
};

class technician : public Employee
{
public:
	technician(const char* name):Employee(name)
	{
	
	}
	void show_info()
	{
	cout << "Technician:" << getName() <<endl;
	}
};

int main()
{
	Employee Rafa("Rafa");
	manager Mario("Mario");
	worker Anton("Anton");
	officer Luis("Luis");
	technician Pablo("Pablo");
	Employee *pe;
	cout << "\nInheritance and Polymorphism:\n" << endl;
	pe = &Rafa;
	pe->show_info();
	pe = &Mario;
	pe-> show_info(); 
	pe = &Anton;
	pe-> show_info();
	pe = &Luis;
	pe-> show_info();
	pe = &Pablo;
	pe-> show_info();
	cout << "Ya he terminado." << endl;

	return 0;
}
