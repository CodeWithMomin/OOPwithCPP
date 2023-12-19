#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaring variables
    int var1;
    int var2;
    bool ans;

    //taking two variables from the user
    cout<<"Enter first number : ";
    cin>>var1;
    cout<<"Enter second number : ";
    cin>>var2;
    
    // conditional statements
    ans = var1 == var2;


    if (ans)
    {
        cout << "The two numbers are equal.";
    }
    else if (!ans)
    {
        cout << "The two numbers are not equal.";
    }
    return 0;
}