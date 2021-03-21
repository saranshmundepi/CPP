/*
Program to demonstrate a basic Queue and its funtions

q.empty()--Return whether the queue is empty
q.size()--returns size of queue
q.push(value)--Add element at the back of queue
q.pop()--deletes first element in Queue
q.front()--returns front element
q.back()--returns last element
q.swap()--Exchange the contents of two queues but the queues must be of same type, although sizes may diffe
q.emplace()--Insert a new element into the queue container, the new element is added to the end of the queue.

*/

#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> q1;
	q1.push(10);
	q1.push(7);
	q1.push(5);
	
	int length=q.size();
	
	// print queue
	
	while(!q1.empty())
	{
		cout<<q1.front()<<endl;
		q1.pop();
	}
	
}
