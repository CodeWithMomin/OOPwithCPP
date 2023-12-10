// WAP to display cube of any number upto any number in CPP


#include<iostream>
using namespace std;
int main()
{
    int n,i=0,cube=1;
    cout<<"Enter an integer:" ;
    cin>>n;
    while(i<=n)
    {
        cube=i*i*i;
        cout<<cube<<endl;
        i++;
    }
}