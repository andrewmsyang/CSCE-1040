/*
	Andrew Yang 11229926 ay0123
	Lab10
*/
#include<iostream>
#include<iomanip>
using namespace std;

int Liar_Liar(int n);
int main()
{
	int n;//variable n; the input
	while(1)//loop ask for the input
	{
		cout<<"Enter the number of n: ";
		cin>>n;//ask for the input
		if(n >= 1 && n <= 23)//1<=n<=23
		{
		cout << "123456789012345678901234567890" << endl;
		for(int i = 1; i <= n; i++)//loop to show the result
		cout<<"Liar_Liar(" <<setw(2)<<i<<") ="<<setw(12)<<Liar_Liar(i)<<endl;
		break;
		}
		else//error message. out of range
		{
		cout<<"Error! please enter n between 1~23!"<<endl;
		}
	}
	return 0;
}

/*
Liar-Liar sequence
*/
int Liar_Liar(int n)
{
 int result;
 if(n == 1 || n == 2)
 {
 result = -1;
 }
 else
 {
 result = 2 * (Liar_Liar(n - 1) + Liar_Liar(n - 2));
 }
	return result;
}

