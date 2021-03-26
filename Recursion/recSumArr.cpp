//A program using recursion to find sum of an array

#include<iostream>

using namespace std;

int sumr(int a[],int n)
{
	if(n==1)
	{
		return a[n-1];
	}
	return a[n-1]+sumr(a,n-1);
}

int main()
{
	int a[]={5,-3,2,8,16};
	int size= sizeof(a)/sizeof(int);
	cout<<sumr(a,size);
}
