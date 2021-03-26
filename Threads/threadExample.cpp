//A simple program to demonstrate thread programming

#include<iostream>
#include<thread>

using namespace std;
int seq=1;
void gil()
{
    cout<<seq++<<") "<<"In gil function"<<endl;
}

void foo()
{
    cout<<seq++<<") "<<"In foo function"<<endl;
}

int main()
{
    cout<<seq++<<") "<<"Begining main function"<<endl;
    thread first(foo);
    thread second(gil);
    cout<<seq++<<") "<<"In main function"<<endl;           //Note: The threads are contending for "seq" variable and the "output console" (Race condition)
    first.join();                                          //      Which may lead to unexpected output
    second.join();
    cout<<seq++<<") "<<"Bye";

}
