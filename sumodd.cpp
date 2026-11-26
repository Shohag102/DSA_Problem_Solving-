#include<iostream>
using namespace std;

int main(){

    int n = 100;
    int oddsum = 0; 
    for(int i = 1; i<=n; i++){ // x, x+2, x+4
        if(i%2 != 0){
            oddsum = oddsum+i;
        }
    } 
    cout<<"The sum of n odd numbers = "<<oddsum;


    return 0;
}