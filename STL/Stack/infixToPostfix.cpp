//Program to convert infix expression to postfix expression
//(considering expressions with single digit numbers only)

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int Precedence[4][5]={//   +  -  *  /  (
                /* + */  { 0, 0, 1, 1,-1},
                /* - */  { 0, 0, 1, 1,-1},
                /* * */  {-1,-1, 0, 0,-1},
                /* / */  {-1,-1, 0, 0,-1}
                        };
int opMap(char op)
{
    switch (op){
        case '+':
            return 0;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 3;
        case '(':
            return 4;
    }
}

void infixToPostfix(string infix)
{
    stack <char> stk;
    int i=0,len=infix.length(),test;

    while(i<len)
    {

        if(infix[i]=='(')
            stk.push(infix[i]);


        else if(infix[i]==')')
        {

            while(stk.top()!='(')
            {   cout<<stk.top();
                stk.pop();

            }
            stk.pop();
        }


        else if(opMap(infix[i])>=0 && opMap(infix[i])<=4 )
        {

            if(!stk.empty())
            {
                if(Precedence[opMap(infix[i])][opMap(stk.top())]==-1)
                    stk.push(infix[i]);

                else
                {
                    cout<<stk.top();
                    stk.pop();
                    stk.push(infix[i]);
                }
            }
            else
                stk.push(infix[i]);

        }

        else      //   if infix[i]>='0' && infix[i]<='9'
            cout<<infix[i];

        i++;
    }
    while(!stk.empty())
    {
        cout<<stk.top();
        stk.pop();
    }
}
int main()
{
    string infix;
    infix="3+(4/2*5)-9";
    stack <int> stk;
    infixToPostfix(infix);
    return 0;
}
