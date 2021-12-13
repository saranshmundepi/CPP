#include<stdlib.h>
#include<stdio.h>

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int lcs(char a[],char b[],int m,int n)
{
	int i=0,j=0;
	int LCS[m+1][n+1];
	
	for(i=0;i<=m;i++)
		LCS[i][0]=0;
	
	for(j=0;j<=n;j++)
		LCS[0][j]=0;
		
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(a[i-1]==b[j-1])
			LCS[i][j]=LCS[i-1][j-1]+1;
		else
			LCS[i][j]=MAX(LCS[i-1][j],LCS[i][j-1]);
		}
	}
			
	return LCS[m][n];
}

int main()
{
	char a[]={'a','b','q','c','d','e'};
	char b[]={'a','d','e','b'};
	int m=sizeof(a)/sizeof(char);
	int n=sizeof(b)/sizeof(char);
	
	printf("\n%d",lcs(a,b,m,n));
	return 0;
}
