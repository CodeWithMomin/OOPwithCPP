#include<iostream>
using namespace std;

int main(){

    float celsius, fahrenheit;
    cout<<"Enter temperature in fahrenheit : ";
    cin>>fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;

    cout<<fahrenheit<<"F is equivalent to "<<celsius<<"C" ;     


    return 0;
}