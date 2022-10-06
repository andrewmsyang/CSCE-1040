/*
Andrew Yang 11229926
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include "prob4.h"

using namespace std;

int main(){

	int x;
	int g=0,s=0,f=0;
	int male=0,female=0;
	float sum=0;
	float avg;
	cout<<"Enter the size of chicken: ";
        cin>>x;
       	chicken *info[x];

	for(int i=0; i<x; i++)
	{
  
		info[i]=(chicken*)malloc(sizeof(chicken));
		info[i]->type=(char*)malloc(10*sizeof(char));
		info[i]->primarycolor=(char*)malloc(10*sizeof(char));
		info[i]->secondarycolor=(char*)malloc(10*sizeof(char));

		cout<<"Enter the type of chicken"<<i+1<<":";
		cin>>info[i]->type;
		cout<<"Enter the primary color of chicken"<<i+1<<":";
                cin>>info[i]->primarycolor;
		cout<<"Enter the secondary color of chicken"<<i+1<<":";
                cin>>info[i]->secondarycolor;
		cout<<"Enter the weight of chicken: ";
                cin>>info[i]->weight;
		cout<<"Enter the gender(1=male,2=female) of chicken: ";
                cin>>info[i]->Gender;
		cout<<"Enter the feed type(1=grain,2=scraps,3=free range) of chicken: ";
                cin>>info[i]->Feedtype;
	
		if(info[i]->Feedtype=1)
		{
			g+=1;
		}
		else if(info[i]->Feedtype==2)
		{
			s+=1;
		}
		else
		{
			f+=1;
		}

		if(info[i]->Gender==1)
		{
			male+=1;
		}
		else
		{
			female+=1;
		}
	sum+=info[i]->weight;
		
	}
	avg= sum/static_cast<float>(x);
	cout<<"The total weight of chicken is "<<sum<<" and the average weight is "<<avg<<endl;
	cout<<"Feed of the chicken you enetered: "<<f<<endl;
	cout<<"Gender of the chicken you entered: "<<g<<endl;
	cout<<"Size of the chicken you entered:  "<<s<<endl;
	cout<<"The male of chicken you entered: "<<male<<endl;
	cout<<"The female of chichen you entered: "<<female<<endl;

	return 0;
}
