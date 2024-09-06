#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int reduce(int& num, int& denom) {
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    int gcd = findGCD(num, denom);
    num /= gcd;
    denom /= gcd;

    return 1;
}

int main() {
    int numerator, denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    int result = reduce(numerator, denominator);

    if (result == 1) {
        cout << "The reduced fraction is: " << numerator << "/" << denominator;
    } else {
        cout << "Unable to reduce the fraction. Please make sure both numbers are positive.";
    }

    return 0;
}
