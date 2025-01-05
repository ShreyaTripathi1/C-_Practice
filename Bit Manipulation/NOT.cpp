#include <iostream>
using namespace std;

// Function to perform NOT operation using XOR
int notUsingXOR(int num) {
    // Create a mask of all 1's for the size of int (32 bits for int in most systems)

    int mask = ~0; // This will be all 1's for the given system's int size
    return num ^ mask;  // XOR with mask to flip all bits
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Call the function to perform NOT using XOR
    int result = notUsingXOR(num);
    cout << "Result after NOT operation using XOR: " << result << endl;

    // Perform NOT operation using ~ for comparison
    int r = ~num;
    cout << "Result using ~ (direct NOT): " << r << endl;

    return 0;
}

// FORMULA :
// ~ x = - (x + 1) 