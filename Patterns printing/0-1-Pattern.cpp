#include<iostream>
using namespace std;

// 1    
// 01   
// 101  
// 0101 
// 10101

int main(){
    int x = 0b0; //0b is used to declare binary number

    int n;
    cout<<"Enter no. : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        x= x^1;
        int z = x;
        for(int j=1; j<=i; j++){
            if(j==1){
                cout<<x;
            }
            else{
                z = z^1; //XOR Operation
                cout<<z;
            }       
        }
    cout<<endl;
    }
    return 0;
}