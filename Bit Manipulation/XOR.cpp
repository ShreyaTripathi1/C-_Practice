// The XOR (Exclusive OR) - XOR outputs 1 if the bits are different | XOR outputs 0 if the bits are same.

//The ^ (XOR) operator in C++ works only on decimal (integer) values. However:
//Internally, the numbers are stored and manipulated in binary form within the CPU.
//The result of ^ is always returned as a decimal number, even though the calculation happens in binary form.


#include <iostream>
#include <cmath>
using namespace std;

// Function to convert decimal to binary
int decimalToBinary(int decimal) {
    int binary = 0, position = 1;
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * position;
        decimal /= 2;
        position *= 10;
    }
    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, position = 0;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, position);
        binary /= 10;
        position++;
    }
    return decimal;
}

// Function to perform XOR operation without using '^'
int binaryXorOperation(int bin1, int bin2) {
    int result = 0, position = 1;

    while (bin1 > 0 || bin2 > 0) {
        // Extract last bits of both binary numbers
        int bit1 = bin1 % 10;
        int bit2 = bin2 % 10;

        // Perform XOR using logic
        int xorBit = (bit1 != bit2) ? 1 : 0;

        // Build the result
        result += xorBit * position;

        // Move to the next position
        position *= 10;
        bin1 /= 10;
        bin2 /= 10;
    }

    return result;
}

int main() {
    int decimal1, decimal2;

    // Input two decimal numbers
    cout << "Enter 1st decimal number: ";
    cin >> decimal1;
    cout << "Enter 2nd decimal number: ";
    cin >> decimal2;

    // Convert decimal to binary
    int binary1 = decimalToBinary(decimal1);
    int binary2 = decimalToBinary(decimal2);

    cout << "->  Binary of first number: " << binary1 << endl;
    cout << "->  Binary of second number: " << binary2 << endl;

    // Method 1: XOR using '^'
    int decimalXor1 = decimal1 ^ decimal2; // XOR in decimal directly
    int binaryXor1 = decimalToBinary(decimalXor1);

    cout << "\nMethod 1 (Using ^ Operator):" << endl;
    cout << "Binary XOR result: " << binaryXor1 << endl;
    cout << "Decimal XOR result: " << decimalXor1 << endl;

    // Method 2: XOR without '^'
    int binaryXor2 = binaryXorOperation(binary1, binary2);
    int decimalXor2 = binaryToDecimal(binaryXor2);

    cout << "\nMethod 2 (Without ^ Operator):" << endl;
    cout << "Binary XOR result: " << binaryXor2 << endl;
    cout << "Decimal XOR result: " << decimalXor2 << endl;

    return 0;
}