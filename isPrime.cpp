//WAP a program to check if a number is a Prime Number

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    // Check divisibility up to square root of the number
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}