//A program to sort a Queue
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

bool compare_function(int i, int j)
{
   return i > j;    // return 1 if i>j else 0
}

int main()
{
	queue<int> Q;
	vector<int> vctr;
	Q.push(10);
	Q.push(7);
	Q.push(5);
	Q.push(8);
	Q.push(13);
	//sorting a Queue
	
	while(!Q.empty())
	{
		vctr.push_back(Q.front());
		Q.pop();
	}
	
	sort(vctr.begin() , vctr.end(), compare_function);
	
	while(!vctr.empty())
	{
		Q.push(vctr.back());
		vctr.pop_back();
	}
	
	while(!Q.empty())
	{
		cout<<Q.front()<<endl;
		Q.pop();
	}
	
}
