//Program to print binary sequence of length k with no three consecutive zeros
#include<iostream>
#include<string>

using namespace std;

void genSeq(char s[],int k)
{
    if(k<0)
    {
        cout<<s<<endl;
        return;
    }
    if(s[k+1]=='0')
    {
        if(s[k+2]=='0')
        {
            s[k]='1';
            genSeq(s,k-1);

        }
        else{
            s[k]='0';
            genSeq(s,k-1);
            s[k]='1';
            genSeq(s,k-1);
        }

    }
    else{
            s[k]='0';
            genSeq(s,k-1);
            s[k]='1';
            genSeq(s,k-1);
    }

}

int main()
{
 int k;
 k=4;
 char s[k+1];
 s[k]='\0';
 genSeq(s,k-1);
}
