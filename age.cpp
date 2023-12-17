#include<iostream>

using namespace std;

int main (){
    int age;
    string name;

    cout<<"Enter your name : ";
    cin>>name;

    cout <<"Enter your age : " ;
    cin>>age;

    if (age < 18)
    {
        cout<<name << " You are not eligible for Driving  \n";
    }
    else if(age == 18){
        cout<<"You are a piece of shite" ;
    }
    else {
        cout<<name <<" You are eligible for Driving \n";
    }




  return 0;
}
