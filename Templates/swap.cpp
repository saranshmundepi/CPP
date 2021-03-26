//A program to swap two variable of same datatype (on any datatype)

#include<iostream>
using namespace std;

template<class T>
void swapElements(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    swapElements(x,y);
    cout<<x<<" "<<y<<endl;
    
    char c='e',d='f';
    swapElements(c,d);
    cout<<c<<" "<<d<<endl;
    
    int *p1=&x,*p2=&y;
    swapElements(p1,p2);
    cout<<p1<<" "<<p2;
    
    return 0;
}
