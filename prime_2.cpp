#include<iostream>
using namespace std;

int main(){

    int n = 45;
    bool isPrime = true;
    for(int i = 2; i*i<=n; i++){
        cout<<i<<" ";
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    cout<<endl;
    if(isPrime == true){
        cout<<"Prime number \n";
    }else{
        cout<<"Non-prime number\n";
    }
    return 0;
}