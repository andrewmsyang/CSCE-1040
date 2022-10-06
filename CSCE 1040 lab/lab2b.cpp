#include<iostream>
#include"BankAccount.h"
#include<string>
using namespace std;
int main(){
	
	BankAccount BA;
        string commands;
	int num,num1,num2,value;
	
	BA.Set();

        while(1){
       		cout<<"bank>";
        	cin>>commands;

                if(commands=="deposit"){
                	cin>>num>>value;
			BA.deposit(num, value);
                }
                else if(commands=="withdraw"){
               		cin>>num>>value;
			BA.withdraw(num, value);
                }
                else if(commands=="balance"){
			cin>>num;
			BA.balance(num);
                }
		else if(commands=="transfer"){
			cin>>num1>>num2>>value;
			BA.transfer(num1,num2,value);
		}
                else if(commands=="quit"){
			break;
                }
        }

        return 0;
}
