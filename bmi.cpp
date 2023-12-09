// WAP to calculat BMI (Body Mass Index)

#include <iostream>
using namespace std;
int main()
{
    float bmi;
    float kilos;
    float height;

    cout << "Enter your weight in pounds : " << endl;
    cin >> kilos;

    cout << "Enter your height in inches : " << endl;
    cin >> height;
   float pounds=kg*2.205;   // here converting the kilograms into pounds for better conversion
    float inchs=height/2.54; // here converting the centimeters into inchs for better conversion
    
    if (pounds <= 0 || height <= 0)
    {
        cout << "Invalid input";
    }
    else
    {
        bmi = (pounds / (inchs * inchs))*703; //Formula: weight (lb) / [height (in)]2 x 703      ----------- i used somw braces for better calcultion

        cout << "Your BMI is : " << bmi << endl;
    }

    if (bmi < 18.5)
    {
        cout << " You are Under Weight" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "You are Normal" << endl;
    }
    else if (bmi > 25 && bmi < 29.9)
    {
        cout << "You are OverWeight" << endl;
    }
    else if(bmi >= 30)
    {
        cout << "You are Obese" << endl;
    }

    return 0;
    
}
