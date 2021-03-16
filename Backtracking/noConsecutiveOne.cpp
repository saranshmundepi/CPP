//Program to print binary sequence of length k with no consecutive ones.
#include<iostream>
#include<string>

using namespace std;

void genSeq(char s[],int k)
{
    if((k<0))
    {
        cout<<s<<endl;
        return;
    }
    if(s[k+1]=='0')
    {
        s[k]='0';
        genSeq(s,k-1);
        s[k]='1';
        genSeq(s,k-1);
    }
    if(s[k+1]=='1')
    {
        s[k]='0';
        genSeq(s,k-1);
    }
}

int main()
{
    int k;
    cin>>k;
    char s[k+1];
    s[k]='\0';
    s[k-1]='0';
    genSeq(s,k-2);
    s[k-1]='1';
    genSeq(s,k-2);
    return 0;
}

