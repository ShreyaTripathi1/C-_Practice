//The previous code of decimal to binary conversion would not work properly when the decimal input is long, eg: 1101. 
//    Integer Overflow !
//    When place becomes very large, it exceeds the range of int (maximum value = 2,147,483,647) and causes integer overflow. 
//    Once overflow happens, place stores garbage values or negative values, leading to the wrong output for the binary number.


//   Key Fixes:
//  ->Store binary as a string instead of an integer to avoid size limitations.
//  ->Prepend digits (to_string(remainder) + binary) to maintain correct order without relying on place.
//  ->Removed the multiplication by 10, which was logically incorrect for binary representation.

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
