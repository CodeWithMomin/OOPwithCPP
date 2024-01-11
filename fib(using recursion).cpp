// fibonacci series using recursion 
int fib(int n)
{
    if(n<=1)
    return n;
    return fib(n-2)+fib(n-1);
}
#include <iostream>

using namespace std;

int main()
{
    int r=fib(7);
    cout<<r;

    return 0;
}
