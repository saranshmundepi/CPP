#include<stdlib.h>
#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))


int longestIncSubSeq(int *a,int m)
{
	if(m==0)
		return 0;
	if(m==1)
		return 1;
	if(a[0]<=a[1])
		return longestIncSubSeq(a+1,m-1)+1;
	return MAX(longestIncSubSeq(a+1,m-1),longestIncSubSeq(a+2,m-2));
}

int main()
{
	int a[]={1,2,3,3,2,1};
	int m=sizeof(a)/sizeof(int);
	printf("%d",longestIncSubSeq(a,m));
	
	return 0;
}
