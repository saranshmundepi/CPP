//A program to reverse an array using recursion

#include<iostream>

using namespace std;

void swapElements(int a[],int index_l,int index_r)
{
	int temp=a[index_l];
	a[index_l]=a[index_r];
	a[index_r]=temp;
}

void reverse(int a[],int index_l,int index_r)
{
	if(index_l>=index_r)
		return;
	swapElements(a,index_l,index_r);
	reverse(a,index_l+1,index_r-1);
}

int main()
{
	int a[]={5,-3,2,8,16};
	int size=sizeof(a)/sizeof(int);
	reverse(a,0,size-1);
	int i;
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	return 0;
}
