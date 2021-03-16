//Program to print alphabetical sequence of length k in strictly increasing order.
#include<iostream>
#include<string>

using namespace std;

int isAscending(char s[],int k)
{
    int i;
    for(i=0;i<k-1;i++)
    {
        if(s[i]>=s[i+1])
            return 0;
    }
    return 1;
}

void alphaSeq(char s[],int k, int i)
{
    if((k<i))
    {
        if(isAscending(s,k))
            cout<<s<<endl;
        return;
    }
    int j;
    for(j=0;j<26;j++)
    {
        s[i]=j+'A';
        alphaSeq(s,k,i+1);
    }
}

int main()
{
    int k;
    cin>>k;
    char s[k+1];
    s[k]='\0';
    alphaSeq(s,k-1,0);
    return 0;
}

