#include<iostream>
using namespace std;

/*
*
**
***
****
*****
****
***
**
*
*/

// void printl(int n){
//     for(int i=0; i<n; i++ ){
//       for(int j=0; j<i+1; j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }
//     for(int i=1; i<n; i++ ){
//       for(int j=0; j<n-i; j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }

// }

//  Or Another method

void printl(int n){
    for(int i=1; i<=2*n-1; i++){
        int starts =i;
        if(i>n) starts = 2*n-i;
        for(int j=0; j<starts; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printl(n);
}