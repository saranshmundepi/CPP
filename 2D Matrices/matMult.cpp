//Program to multiply two matrices
#include<iostream>
using namespace std;
#define SIZE 3

int main()
{
	int mat1[SIZE][SIZE]={{1,2,3},{4,5,6},{7,8,9}};
	int mat2[SIZE][SIZE]={{7,8,9},{4,5,6},{1,2,3}};
	int mat[SIZE][SIZE]={0};
	int i,j,k;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			for(k=0;k<SIZE;k++)
			{
			 mat[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
