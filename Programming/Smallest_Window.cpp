//Program to find smallest window in a string containing all characters of other string

#include<iostream>
#include<string>
using namespace std;
int containsAllChar(string str1,string str2)
{
    int i;
    int len1=str1.length();
    int len2=str2.length();
    int count[256]={0};
    for(i=0;i<len1;i++)
    {
        count[str1[i]]--;
    }
    for(i=0;i<len2;i++)
    {
        count[str2[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]>0)
            {
              return 1;
            }
    }
    return 0;
}

void allSubStr(string str1,string str2)
{
	int start,len,stLen;
	stLen=str1.length();
	int minLen=stLen+1;
	string minStr,temp;
	for(start=0;start<stLen;start++)
		{
			for(len=1;len<=stLen-start;len++)
			{
			temp=str1.substr(start,len);
			if(minLen>temp.length()&&containsAllChar(temp,str2)==0)
				{
					minStr=temp;
					minLen=temp.length();
				}
			}
		}
	cout<<minStr;
}


int main()
{
    string str1="saranshmundpi";
    string str2="sd";
    allSubStr(str1,str2);
    return 0;
}
