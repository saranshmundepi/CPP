// A program to find max variable between two variable of same datatype (of any datatype)
#include<iostream>
using namespace std;

template<class T1, class T2>
T1 max2(T1 a,T2 b)
{
    if(a>b)
        return a;
    
    else
        return b;
}

int main()
{
    int a=10;int b=20;
    cout<<max2(a,b)<<endl;
    return 0;
}
