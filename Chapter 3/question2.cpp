/*
Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers.
*/

#include<iostream>

using namespace std;

int main(){
	int choice;
	float f, c;
	cout << "Press 1 to convert Fahrenheit to Celsius\nPress 2 to convert Celsius to Fahrenheit\nChoice: ";
	cin >> choice;
	switch(choice){
		case 1:
			cout << "Enter temperature in Fahrenheit: ";
			cin >> f;
			c = (f - 32) * 5 / 9;
			cout << "Temperature in Celsius: " << c <<"C"; 
			break;
		case 2:
			cout << "Enter temperature in Celsius: ";
			cin >> c;
			f = (1.8 * c) + 32;	
			cout << "Temperature in Fahrenheit: " << f <<"F";
			break;
		default:
			cout << "Check the input value and try again either 1 or 2";
			break;
	}
	cout << endl;
	return 0;
}