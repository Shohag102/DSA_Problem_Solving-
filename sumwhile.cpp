#include<iostream>
using namespace std;

int main(){

    int i = 1;
    int sum = 0;
    int n = 3;

    while(i<= n){
        sum = sum+i;
        i++;
    }
    cout<<"The sum of n numbers = "<<sum;


    return 0;
}