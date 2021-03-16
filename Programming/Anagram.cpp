//Program to check whether a string is anagram of other
#include<iostream>
#include<string>
using namespace std;
int isAnagram(string str1,string str2)
{
    int i,flag=0;
    int len1=str1.length();
    int len2=str2.length();
    int count[256]={0};
    for(i=0;i<len1;i++)
    {
        count[str1[i]]++;
    }
    for(i=0;i<len2;i++)
    {
        count[str2[i]]--;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]!=0)
            {
              flag=1;
              break;
            }
    }
    return flag;
}

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    if(isAnagram(str1,str2)==0)
       cout<<str2+" is anagram of "+str1;
    else
       cout<<str2+" is not anagram of "+str1;
    return 0;
}
