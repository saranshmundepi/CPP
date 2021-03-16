//Program to print binary of a number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int size=sizeof(int)*8;
    int i;
    for(i=0;i<size;i++)
    {
     cout<<((num&(1<<(size-1-i)))?1:0);
    }
    return 0;
}
