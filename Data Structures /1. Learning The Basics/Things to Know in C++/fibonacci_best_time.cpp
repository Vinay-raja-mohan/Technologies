#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the n-th Fibonacci number using Binet's Formula
int fibonacci(int n) {
    const double phi = (1 + sqrt(5)) / 2; // Golden ratio
    const double psi = (1 - sqrt(5)) / 2; // Conjugate of the golden ratio

    // Binet's formula
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "Fibonacci number F(" << n << ") is: " << fibonacci(n) << endl;
    }

    return 0;
}
