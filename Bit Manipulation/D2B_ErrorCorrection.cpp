//The previous code of decimal to binary conversion would not work properly when the decimal input is binary like, eg: 1101. 

#include <iostream>
using namespace std;

int main() {
    int decimal;
    string binary = "";

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary; // prepend the remainder as a string
        decimal /= 2;
    }

    cout << "Binary equivalent: " << (binary.empty() ? "0" : binary) << endl;

    return 0;
}