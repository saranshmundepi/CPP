// A program to print number of elements divisible by 2 in a Queue.
#include<iostream>
#include<queue>

using namespace std;


int main()
{
	queue<int> Q;
	Q.push(10);
	Q.push(7);
	Q.push(5);
	Q.push(8);
	Q.push(13);
	// print no of elements divisible by 2
	
	int count=0;
	while(!Q.empty())
	{
		if(Q.front()%2==0)
			count++;
		Q.pop();
	}
	cout<<count;
}
