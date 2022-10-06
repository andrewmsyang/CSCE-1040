#include<iostream>
using namespace std;
class BankAccount
{
	int bank[10];
public:
	void deposit(int num,int value)
	{
		bank[num]+=value;
	}
	void withdraw(int num,int value)
	{
		if(bank[num]<value){
			cout<<"Error!Funds exceeded."<<endl;
		}
		else{bank[num]-=value;}
	}
	void balance(int num)
	{
		cout<<bank[num]<<endl;
	}
	void transfer(int num1,int num2,int value)
	{
		if(bank[num1]<value)
		{
			cout<<"Error!Funds exceeded."<<endl;
		}
		else
		{
			bank[num1]-=value;
			bank[num2]+=value;
		}
	}
	void Set()
	{
		for(int i=0;i<10;i++)
		{
			bank[i]=0;
		}
	}
};
