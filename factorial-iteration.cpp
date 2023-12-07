//write a program to find a factorial of any number using iterative method

#include<iostream>

using namespace std;

int main()
{
    int fact;
    int n,m;    //storing m as the number entered by the user to display in final output
    cout<<"Enter the number you want factorial of : ";
    cin>>n;
    m=n;
    for(fact=1;n>=1;--n)
    {
        fact = fact*n; 
    }
    cout<<"The factorial is of " <<m <<" is "<<fact;
}