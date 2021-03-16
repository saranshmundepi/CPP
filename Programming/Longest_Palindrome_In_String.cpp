//Program to find longest palindrome sequence in a string
#include <iostream>
#include<string>
using namespace std;

int palindrome(string str)
{
	int i,j,flag=0;
	int len=str.length();
	for(i=0,j=len-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
			flag=1;
	}
	return flag;
}
void allSubStr(string str)
{
	int start,len,stlen,maxLen=0;
	stlen=str.length();
	string maxStr,temp;
	for(start=0;start<stlen;start++)
		{
			for(len=1;len<=stlen-start;len++)
			{
			temp=str.substr(start,len);
			if(maxLen<temp.length()&&palindrome(temp)==0)
				{
					maxStr=temp;
					maxLen=temp.length();
				}
			}
		}
	cout<<maxStr;
}
int main() {
	string str="helloworldmadamnoon";
	allSubStr(str);
	return 0;
}
