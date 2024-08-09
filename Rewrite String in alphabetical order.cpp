#include <iostream>
#include <string> // Include string library for string operations
using namespace std;

void sortString(string &str) {
    int n = str.length();

    // Bubble sort algorithm
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (str[j] > str[j+1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input); // Use getline to read the entire line of input

    sortString(input);

    cout << "Output: " << input << endl;

    return 0;
}
