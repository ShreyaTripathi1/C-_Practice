#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int binary;
    int decimal = 0;
    int position = 0;
    int temp;

    cout << "Enter a binary number: ";
    cin >> binary;
    temp = binary;

    // USING FOR LOOP
    for(; temp>0; temp/=10, position++){
    // 1st semicolon represents the initialization section of the for loop WHICH is empty -> no variables are initialized within the loop header. | 2nd semicolon checks if the loop should continue executing. | 3rd semicolon updates the temp value by removing the last digit & increments the position.
        int lastDigitt = temp%10;
        decimal += lastDigitt*pow(2, position);
    }
    cout<<"Decimal of "<<binary<<" is : "<<decimal;
    return 0;


//     while(temp > 0){
//         int lastDigit = temp % 10;
//         decimal += lastDigit * pow(2, position);
//         temp /=10;
//         position++;
//     }
//     cout<<"Decimal of "<<binary<<" is : "<<decimal;
//     return 0;
}