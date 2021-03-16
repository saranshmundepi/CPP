//Program to print alphabetical sequence of length k
#include<iostream>
#include<string>

using namespace std;

void alphaSeq(char s[],int k, int i)
{
    if((k<i))
    {
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
    int k=3;
    char s[k+1];
    s[k]='\0';
    alphaSeq(s,k-1,0);
    return 0;
}

