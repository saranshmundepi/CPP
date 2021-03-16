//Program to evaluate postfix expression
//(considering expressions with single digit numbers only)

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int evalPost(string expr)
{
    int i=0,len=expr.length(),temp=0;
    stack <int> stk;
    while(i<len)
    {
        if(expr[i]>='0' && expr[i]<='9')
            stk.push(expr[i]-'0');
        if(expr[i]=='+')
        {
            temp=stk.top();
            stk.pop();
            temp=stk.top()+temp;
            stk.pop();
            stk.push(temp);

        }
        if(expr[i]=='-')
        {
            temp=stk.top();
            stk.pop();
            temp=stk.top()-temp;
            stk.pop();
            stk.push(temp);
        }
        if(expr[i]=='/')
        {
            temp=stk.top();
            stk.pop();
            temp=stk.top()/temp;
            stk.pop();
            stk.push(temp);
        }
        if(expr[i]=='*')
        {
            temp=stk.top();
            stk.pop();
            temp=stk.top()*temp;
            stk.pop();
            stk.push(temp);
        }
        i++;
    }
    return stk.top();
}

int main()
{
 string expr="342/5*+9-";
 cout<<evalPost(expr);
 return 0;
}
