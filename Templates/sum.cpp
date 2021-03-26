// Implementing a function to find sum of two variables of same datatype (of same datatype)

#include<iostream>
using namespace std;

template<class T> T sum(T a,T b)
{
    return a+b;
}

int main()
{
    cout<<sum(3,8)<<endl;
    cout<<sum(3.9,8.7);
    return 0;
}
