//A program to calculate sum of array using Threads

#include<iostream>
#include <stdlib.h>
#include<thread>
#define MAX 100
using namespace std;

int X[MAX];				//global array
int sum[4]={0,0,0,0};	//array for storing partial sums

void tsum(int start,int end,int index)
{
	int i;
	for(i=start;i<end;i++)
		sum[index]+=X[i];
}

int main(){
	int i;
	for(i=0;i<MAX;i++)
		X[i]=rand();

	thread first(tsum,0,MAX/4,0);
	thread second(tsum,MAX/4,MAX/2,1);
	thread third(tsum,MAX/2,3*MAX/4,2);
	thread fourth(tsum,3*MAX/4,MAX,3);

	first.join();
	second.join();
	third.join();
	fourth.join();

	int sumtotal=sum[0]+sum[1]+sum[2]+sum[3];

	cout<<sumtotal;

	return 0;
}
