#include<iostream>
using namespace std;
void printl(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<5; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    // int t;
    // cin>>t;
    int n;
    cin>>n;
    // for(int i=0; i<t; i++){
    //     cin>>n;
    //     printl(n); 
    // }
    printl(n);
}