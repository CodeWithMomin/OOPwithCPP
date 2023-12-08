// WAP to calculat BMI (Body Mass Index)

#include <iostream>
using namespace std;
int main()
{
    float bmi;
    float pounds;
    float height;

    cout << "Enter your weight in pounds : " << endl;
    cin >> pounds;

    cout << "Enter your height in inches : " << endl;
    cin >> height;

    if (pounds <= 0 || height <= 0)
    {
        cout << "Invalid input";
    }
    else
    {
        bmi = pounds / (height * height)*703; //Formula: weight (lb) / [height (in)]2 x 703

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
