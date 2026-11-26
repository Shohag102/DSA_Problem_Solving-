#include<iostream>
using namespace std;

int main(){
    
    int number = 121;
    bool isPrime = true;
    for(int i = 2; i<number; i++){
        if(number%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"This is a prime number\n";
    } else{
        cout<<"This is a non-prime number\n";
    }

    return 0;
}