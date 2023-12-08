// write a program to print natural number from 1 to n using flag controlled loop

#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    bool flag = true;

    for(int i = 1; flag; i++) {
        cout << i << " ";

        if(i == n)
            flag = false;
    }

    return 0;
}