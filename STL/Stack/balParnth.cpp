//Program to check whether an expression have balanced pairs of parenthesis.

#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool balParnth(string expr)
{
    int i=0,len=expr.length();
    stack<int> stk;
    while(i<len)
    {
        if(expr[i]=='(' ||expr[i]=='{' ||expr[i]=='[' )
            stk.push(expr[i]);
        if(expr[i]==')' ||expr[i]=='}' ||expr[i]==']' )
            stk.pop();
        i++;
    }
    return stk.empty();
}

int main()
{
    string expr;
    expr="{2+[(3+4)-5]}/10";
    balParnth(expr)?cout<<"Balanced":cout<<"Unbalanced";
    return 0;
}
