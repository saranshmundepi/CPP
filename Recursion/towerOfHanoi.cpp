/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 

1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk

*/
#include<iostream>

using namespace std;

void toh(char src,char dest,char aux,int n)
{
	if(n==1)
	{
		cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
		return;
	}
	
	toh(src,aux,dest,n-1);
	cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	
	toh(aux,dest,src,n-1);
	
}

int main()
{
	int n;
	cin>>n;
	toh('a','b','c',n);
}
