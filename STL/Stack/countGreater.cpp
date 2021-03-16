//Print the number of elements greater than the value x
#include<iostream>
#include<stack>

using namespace std;

int countGreater(stack <int> s,int x)
{
    int count=0;
    while(!s.empty())
    {
        if(s.top()>x)
            count++;
        s.pop();
    }
    return count;
}
int main()
{
    int x,y=1,a;
    stack <int> s;
    cin>>x;
    cin>>y;
    while(y>0)
    {
        cin>>a;
        s.push(a);
        y--;
    }
    cout<<countGreater(s,x);
}
