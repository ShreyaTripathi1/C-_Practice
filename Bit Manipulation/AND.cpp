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

// Function to perform AND operation without using '&'
int binaryAndOperation(int bin1, int bin2) {
    int result = 0, position = 1;
    while (bin1 > 0 || bin2 > 0) {
        int bit1 = bin1 % 10;
        int bit2 = bin2 % 10;
        int andBit = (bit1 == 1 && bit2 == 1) ? 1 : 0; // Logical AND without '&'

        result += andBit * position;
        position *= 10;
        bin1 /= 10;
        bin2 /= 10;
    }
    return result;
}

int main() {
    int decimal1, decimal2;

    // Input decimal numbers
    cout << "Enter first decimal number: ";
    cin >> decimal1;
    cout << "Enter second decimal number: ";
    cin >> decimal2;

    // Convert to binary
    int binary1 = decimalToBinary(decimal1);
    int binary2 = decimalToBinary(decimal2);

    cout << "Binary of first number: " << binary1 << endl;
    cout << "Binary of second number: " << binary2 << endl;

    // Perform AND operation in binary
    int binaryAndResult = binaryAndOperation(binary1, binary2);

    cout << "Binary AND result: " << binaryAndResult << endl;

    // Convert result back to decimal
    int decimalAndResult = binaryToDecimal(binaryAndResult);
    cout << "Decimal AND result: " << decimalAndResult << endl;

    return 0;
}