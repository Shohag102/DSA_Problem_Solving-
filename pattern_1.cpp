#include<iostream>
using namespace std;

int main(){
    
    int factorial = 1;
    for(int i = 10; i>=1; i--){
        factorial = factorial*i;
        cout<<"*\n *\n *";
    }
    cout<<factorial<<endl;


    return 0;
}