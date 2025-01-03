#include <iostream>
using namespace std;

// Function to perform left shift without using '<<'
int leftShift(int num, int shift) {
    for (int i = 0; i < shift; i++) {
        // Multiply the number by 2
        num = num * 2;
    }
    return num;
}

int main() {
    int num, shift;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter number of positions to shift: ";
    cin >> shift;

    // Call the function for left shift
    int result = leftShift(num, shift);
    cout << "Result after left shifting " << shift << " positions: " << result << endl;

    // Perform left shift operation using <<
    int r = num << shift;
    cout << num <<" << "<< shift <<" = "<< r << endl;

    return 0;
}
