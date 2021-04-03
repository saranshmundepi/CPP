//Program to print max of each row in a 2D array
#include <iostream>
#define ROW 3
#define COL 3
using namespace std;

int main() {
	// your code goes here
	int arr[ROW][COL]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,max=0;
	for(i=0;i<ROW;i++)
	{
		max=arr[i][0];
		for(j=0;j<COL;j++)
		{
			if(max<arr[i][j])
				max=arr[i][j];
		}
		cout<<max<<endl;
	}
	return 0;
}
