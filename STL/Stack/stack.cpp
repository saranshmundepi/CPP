/*
Program to demonstrate a basic Stack and its funtions

empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 
*/

#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.push(5);
	
	int length=stk.size();
	while(!stk.empty())
	{
		cout<<stk.top()<<endl;
		stk.pop();
	}
	
	cout<<"Size="<<length;
	
}
