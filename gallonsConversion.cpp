
#include<iostream>

using namespace std;

int main(){
	float gallons;
	cout << "Enter the value in gallons: "<<endl;
	cin >> gallons;
	cout << "Value in cubic feet: " << (gallons/7.481) << endl;
	return 0;
}
