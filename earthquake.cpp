#include<iostream>
using namespace std;
int main()
{
    float n; // n will hold the value of richter scale number
    
    cout<<"Enter the richter scale number"<<endl;
    
    cin>>n;
    
    if(n<=5.0)
    cout<<"Little or no Damage"<<endl;
    else if(n>5.0 && n<=5.5)
    cout<<"Some Damage"<<endl;
    else if(n>5.5 && n<=6.5)
    cout<<"Serious Damage: Walls may crack or fall"<<endl;
    else if(n>6.5 && n<=7.5)
    cout<<"Disaster: Houses and Buildings may collapse"<<endl;
    else if(n>7.5 && n<=12.5)
    cout<<"Catastrophe: Most of the Buildings destroyed"<<endl;
    else
    cout<<"Invalid input, Not possible";
    
}