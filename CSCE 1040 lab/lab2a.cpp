include<iostream>
#include<string>
using namespace std;

int main(){

	string commands;
	
	while(1){
	cout<<"bank>";
	cin>>commands;

		if(commands=="deposit"){
		cout<<"DEPOSIT SELECTED"<<endl;
		}
		else if(commands=="withdraw"){
		cout<<"WITHDRAW SELECTED"<<endl;
		}
		else if(commands=="balance"){
		cout<<"BALANCE SELECTED"<<endl;
		}
		else if(commands=="quit"){
		break;
		}
	}

	return 0;
}
