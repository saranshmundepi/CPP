//Program to print principal diagnal and secondry diagonal of a 2D array
#include <iostream>
#define ROW 3
#define COL 3
using namespace std;

int main() {
	// your code goes here
	int arr[ROW][COL]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,max=0;
	cout<<"principal diagonal"<<endl;
	for(i=0;i<ROW;i++)
	{
		cout<<arr[i][i]<<endl;
	}
	cout<<"secondry diagonal"<<endl;
	for(i=0;i<ROW;i++)
	{
		cout<<arr[i][COL-i-1]<<endl;
	}
	return 0;
}
