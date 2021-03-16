//Ordered binary sequence of K length
#include<iostream>
#include<string>

using namespace std;

void binaryLexOrdr(char s[],int k, int i)
{
    if((k<i))
    {
        cout<<s<<endl;
        return;
    }
    s[i]='0';
    binaryLexOrdr(s,k,i+1);
    s[i]='1';
    binaryLexOrdr(s,k,i+1);
}

int main()
{
    int k;
    cin>>k;
    char s[k+1];
    s[k]='\0';
    binaryLexOrdr(s,k-1,0);
    return 0;
}

