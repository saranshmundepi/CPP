#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	queue<int> Q;
	stack<int> stk;
	Q.push(10);
	Q.push(7);
	Q.push(5);
	Q.push(8);
	Q.push(13);
	// reverse the queue
	while(!Q.empty())
	{
		stk.push(Q.front());
		Q.pop();
	}
	while(!stk.empty())
	{
		Q.push(stk.top());
		stk.pop();
	}
	while(!Q.empty())
	{
		cout<<Q.front()<<endl;
		Q.pop();
	}
}
