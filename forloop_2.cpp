#include<iostream>
using namespace std;

int main(){

    int sum = 0;
    int n = 10;
    for(int i = 1; i<=n; i++){
        sum = sum+i;
        if(i == 9){
            break; //keywords are special words or reserved words
        }
    }
    cout<<"The sum of n numbers = "<<sum;

    return 0;
}