#include <iostream>
using namespace std;
int main(){
    int x = 6;
    // cout<<"Enter no"<<endl;
    // cin>>x;
    
    cout<<"Pyramid:"<<endl;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Inveted Pyramid:"<<endl;
    for(int i=1; i<=x; i++){
        for(int j=i; j<=x; j++){
            cout<<j;
        }
        cout<<endl;
    }   

    return 0;
}

// Pyramid:
// 1
// 12
// 123
// 1234
// 12345
// 123456

// Inveted Pyramid:
// 123456
// 23456
// 3456
// 456
// 56
// 6