#include <iostream>
using namespace std;

// Template function to find the largest of three numbers
template <typename T>
T findLargest(T a, T b, T c) {
    T largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    return largest;
}

int main() {
    // Variables to hold user input
    double num1, num2, num3;

    // Take user input
    cout << "Enter three numbers (use space to separate them): ";
    cin >> num1 >> num2 >> num3;

    // Find and display the largest number
    double largest = findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;

    return 0;
}
