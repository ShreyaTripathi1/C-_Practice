#include<iostream>
using namespace std;

//  *           * 
//  * *       * *
//  * * *   * * * 
//  * * * * * * *
//  * * * * * * *
//  * * *   * * *
//  * *       * *
//  *           *

// 8 rows & coloumns

// In 1st row : 1 * from start and end, in 2nd : row 2 * from start and end......so on till 4th row..
// 5th to 8th is upside down of 1st-4th


int main(){
    int n; // Number of rows
    cout<<"Enter number of rows:";
    cin>>n;
    
    // Top half of the pattern
    for (int i = 1; i <= n/2; i++){
        // Print stars on the left side
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        // Print spaces in the middle
        for (int j = 1; j <= (n-2*i); j++) {
            cout << "   ";
        }
        // Print stars on the right side
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout<<endl;
   }

   // Bottom half of the pattern
    for (int i = n/2; i >= 1; i--){
        // Print stars on the left side
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        // Print spaces in the middle
        for (int j = 1; j <= (n-2*i); j++) {
            cout << "   ";
        }
        // Print stars on the right side
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout<<endl;
   }
   return 0;
}