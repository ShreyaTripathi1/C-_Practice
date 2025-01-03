// This code handles arithmetic right shift for negative numbers to preserve the sign bit (MSB—Most Significant Bit).

#include <iostream>
using namespace std;

// Function to perform right shift without using '>>'
int rightShift(int num, int shift) {
    // Handle negative numbers (arithmetic shift for signed integers)
    int mask = num < 0 ? 1 : 0; // Check if the number is negative
    for (int i = 0; i < shift; i++) {
        // Logical shift: Divide by 2
        num = num / 2;
        // Handle arithmetic shift for negative numbers
        if (mask) {
            num |= (1 << (sizeof(int) * 8 - 1)); // Set the MSB for sign extension
        }
    }
    return num;
}

int main() {
    int num, shift;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter number of positions to shift: ";
    cin >> shift;

    // Call the function
    int result = rightShift(num, shift);
    cout << "Result after right shifting " << shift << " positions: " << result << endl;

    // Perform right shift operation using >>
    int r = num >> shift;
    cout << num <<" >> "<< shift <<" = "<< r << endl;

    return 0;
}
