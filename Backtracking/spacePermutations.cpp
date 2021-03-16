// Program to print permutations of the input string with space between the characters.
#include<iostream>
#include<string>

using namespace std;

void genSeq(string s,int i)
{
    if(i==0)
    {
        cout<<s<<endl;
        return;
    }
    string s1=s.substr(0,i);
    string s2=s.substr(i);
    s=s1+" "+s2;
    genSeq(s,i-1);
    s=s1+s2;
    genSeq(s,i-1);

}

int main()
{
    string s
    ;
    cin>>s;
    genSeq(s,s.length()-1);
    return 0;
}
