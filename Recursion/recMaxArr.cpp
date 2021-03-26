//A program using recursion to find max value in an array

#include<iostream>

using namespace std;

int maxr(int a[],int index)
{
	if(index==0)
	{
		return a[index];
	}
	
	int temp=maxr(a,index-1);
	
	if(a[index]>temp)
		return a[index];
	else
		return temp;
}

int main()
{
	int a[]={5,-3,2,8,16};
	int size= sizeof(a)/sizeof(int);
	cout<<maxr(a,size-1);
}
