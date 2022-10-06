#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date:1/31/2018
Instructor: David Keathly
Description: 1040 Lab 1 Assignment
*/	
struct Employee {
 	int e_ID;
 	string e_name;
	}employ[15];

struct Customer {
	int c_ID;
 	string c_name;
 	double c_balance;
	}cust[15];
int main()
{
 	ifstream inFS;
 	inFS.open("transactiondata");
 
 	Employee employ[15];
 	Customer cust[15];
	char person;
	int i=0, j=0;
 	int ID1, ID2;
 	char status;
 	float balance;      
 	cout<<"123456789012345678901234567890123456789012345678901234567890"<<endl;

  while(1)
  {
  	inFS >> person;
  		if (person == 'e')
  		{
   		inFS>>employ[i].e_ID;
   		inFS>>employ[i].e_name;
   		i++;
  		}		
  		if (person == 'c')
  		{
   		inFS>>cust[j].c_ID;
   		inFS>>cust[j].c_name;
   		inFS>>cust[j].c_balance;
   		j++;
  		}
  
  		if (person == 't')
  		{
   		inFS>>ID1>>ID2>>status>>balance;
    		if(inFS.eof())
    		break;

   		if (status == 'w')
   		{
    		i = 0, j = 0;
    			while(1)
    			{
     			if(ID1 == cust[j].c_ID)
     				{
     				cout<<setw(10)<<cust[j].c_name<<"\t";
     				break;
     				}
     			j++;
    			}		
    		while(1)
    			{
     			if (ID2 == employ[i].e_ID)
     				{
      				cout<<setw(10)<<employ[i].e_name<<"\t-$"<<setw(7)<<balance<<" $ "<<setw(9)<<fixed<<setprecision(2)<<cust[j].c_balance - balance<<endl;
      				break;
     				}
     			i++;
    			}
   		}
  	if (status == 'd')
   	{
    	i = 0, j = 0;
    		while(1)
    		{		
     			if(ID1 == cust[j].c_ID)
     			{
      			cout<<setw(10)<<cust[j].c_name<<"\t";
      			break;
     			}
     		j++;
    		}
    		while(1)
    		{
     			if(ID2 == employ[i].e_ID)
     			{
      			cout<<setw(10)<<employ[i].e_name<<"\t+$"<<setw(7)<<balance<<" $ "<<setw(9)<<fixed<<setprecision(2)<<cust[j].c_balance + balance<<endl;
      			break;
     			}		
     		i++;
    		}
   	}
  		}
 }
 inFS.close();
 return 0;
}
