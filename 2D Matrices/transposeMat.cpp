//Program to find transpose of a matrix
#include<iostream>
#define SIZE 3
using namespace std;

int main()
{
	int mat1[SIZE][SIZE]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
		cout<<"Actual Array"<<endl;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			int temp;
			temp=mat1[i][j];
			mat1[i][j]=mat1[j][i];
			mat1[j][i]=temp;
			
		}
	}
	cout<<endl<<"Transposed Array"<<endl;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
