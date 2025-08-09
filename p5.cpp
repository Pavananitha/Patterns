#include<iostream>
using namespace std;

// void printl(int n){
//     for(int i=n; i>0; i--){
//         for(int j=0; j<i; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }
//  or another method

void printl(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printl(n);
}