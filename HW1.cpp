/*
Andrew Yang 11229926 ay0123
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include "student.h"
#include "bubble.h"

using namespace std;

struct classStats
{
	float max;
	float mean;
	float min;
	float median;
	char* name;
};

int main()
{
	classStats stats;
	student *stu[19];
	ifstream inFS;
        inFS.open("grades");
	float sum = 0;
	int i;
    
	stats.name = (char*)malloc(20*sizeof(char));
	inFS>>stats.name;
    
	for (i = 0;i<19;i++)
	{
        stu[i] = (student*)malloc(sizeof(student));
        stu[i]->first = (char*)malloc(20*sizeof(char));
        stu[i]->last = (char*)malloc(20*sizeof(char));
        
        inFS>>stu[i]->first>>stu[i]->last>>stu[i]->exam1>>stu[i]->exam2>>stu[i]->exam3;
        
        stu[i]->mean = (stu[i]->exam1 + stu[i]->exam2 + stu[i]->exam3) / 3.0;
        sum += stu[i]->mean;
	}
    
	bubble(stu,19);
	stats.min = stu[0]->mean;
        stats.max = stu[18]->mean;
	stats.mean = sum / 19;
	stats.median = stu[9]->mean;
    	
	cout<<"123456789012345678901234567890123456789012345678901234567890"<<endl;
	cout<<stats.name<<setprecision(4)<<" MEAN: "<<setprecision(4)<<stats.mean<<" MIN: "<<setprecision(4)<<stats.min<<" MAX: "<<setprecision(4)<<stats.max<<" MEDIAN: "<<setprecision(4)<<stats.median<<endl;
    
	for(i = 0;i<19;i++)
	{
	cout<<setw(11)<<stu[i]->first<<setw(11)<<stu[i]->last<< "\t"<<fixed<<setprecision(2)<<stu[i]->mean<<endl;
	}
    

	inFS.close();
    
	return 0;
}
