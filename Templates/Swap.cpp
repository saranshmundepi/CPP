#include<iostream>
using namespace std;
template<class T>
void swap2(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    swap2(x,y);
    cout<<x<<" "<<y<<endl;
    char c='e',d='f';
    swap2(c,d);
    cout<<c<<" "<<d<<endl;
    int *p1=&x,*p2=&y;
    swap2(p1,p2);
    cout<<p1<<" "<<p2;
    return 0;
}
