//Program to check whether two string are equal or not

#include<iostream>
#include<stack>

using namespace std;

bool areEqual(stack <int> stk1,stack <int> stk2)
{
    if(stk1.size()!=stk2.size())
        return false;

    while(!stk1.empty())
    {
        if(stk1.top()!=stk2.top())
            return false;
        stk1.pop();
        stk2.pop();
    }
    return true;
}

int main()
{
    int n,m,x;
    stack<int> stk1,stk2;
    cin>>n;
    while(n>0)
    {
        cin>>x;
        stk1.push(x);
        n--;
    }
    cin>>m;
    while(m>0)
    {
        cin>>x;
        stk2.push(x);
        m--;
    }
    areEqual(stk1,stk2)==true?cout<<"Equal":cout<<"Not equal";
    return 0;
}
