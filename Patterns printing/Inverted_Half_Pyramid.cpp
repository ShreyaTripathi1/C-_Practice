#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    for(int i=x; i>=1; i--){
        for (int j=i; j>=1; j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

// *  *  *  *  * 
//  *  *  *  * 
//  *  *  *
//  *  *
//  *