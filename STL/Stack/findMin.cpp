//Program to find min element from a stack of n elements

#include<iostream>
#include<stack>


using namespace std;

int findMin(stack<int> stk)
{
    int min=stk.top();
    while(!stk.empty())
    {
        if(stk.top()<min)
            min=stk.top();
        stk.pop();
    }
    return min;
}

int main()
{
    stack <int> stk;
    int n,x;
    cin>>n;
    while(n>0)
    {
        cin>>x;
        stk.push(x);
        n--;
    }
    cout<<findMin(stk);
    return 0;
}
