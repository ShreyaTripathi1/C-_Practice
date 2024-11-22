#include<iostream>
using namespace std;

//     *****
//    *****
//   *****
//  *****
// *****

int main(){
    int x;
    cout<<"enter a no. : ";
    cin>>x;
    for(int i=x; i>=1; i--){
        for(int k=1; k<=i-1; k++){
                cout<<" ";
        }
        for(int j=1; j<=x; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}