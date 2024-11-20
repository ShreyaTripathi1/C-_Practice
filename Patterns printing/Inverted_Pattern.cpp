#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number";
    cin>>x;
    for(int i=x; i>=1;i--){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }
    return 0;
}


// 12345
// 1234
// 123
// 12
// 1