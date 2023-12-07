//write a program to find a factorial of any number  using recursion

#include<iostream>

using namespace std;

int factorial(int n)
{
    if (n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);
}

int main()
{
  
    int num;
    cout<<"Enter the number:";
    cin>>num;
   
    cout<<"The factorial of " <<num <<" is " <<factorial(num);
}