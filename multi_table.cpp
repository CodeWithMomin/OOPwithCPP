// WAP in c++ to display the multiplier table of vertically from 1 to n


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number to which you want to generate the multiplication table : ";
    cin >> n;

    cout << "Multiplication Table vertically from 1 to " << n << ":\n";

    for (int i = 1; i <= n; ++i) {
        cout << "Table of " << i << ":\n";
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << (i * j) << "\n";
        }
        cout << "\n"; // Separate each table for better readability
    }
    

    return 0;
}