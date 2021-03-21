//Program to delete all elements at even positions, from a n element stack

#include <iostream>
#include <stack>

using namespace std;

stack <int> deleteAtEven(stack <int> s)
{
    int pos=s.size();
    stack <int> s2;
    while(pos>0)
    {
        if(pos%2!=0)
        {
            s2.push(s.top());
        }
            s.pop();
            pos=s.size();
    }
    while(!s2.empty())
    {
        s.push(s2.top());
        s2.pop();
    }
    return s;
}

int main()
{
    stack<int> s;
    int n,x;
    cin>>n;
    while(n>0)
    {
        cin>>x;
        s.push(x);
        n--;
    }
    s=deleteAtEven(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
