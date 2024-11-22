#include <iostream>
using namespace std;
int main(){
    int x=5;
    for(int i=1; i<=x; i++){
        for(int j=x; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }   
    return 0;
}


//      *
//     **
//    ***
//   ****
//  *****



//or:

// for(int i=1; i<=x; i++){
//     for(int j=1; j<=x; j++){
//         if(j<=x-i){
//             cout<<" ";
//         }
//         else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// } 