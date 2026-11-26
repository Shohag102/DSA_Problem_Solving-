#include<iostream>
using namespace std;

int main(){

    int i = 1;
    int oddsum = 0;
    int n = 5;
    while(i<=n){
        if(i%2 != 0){
            cout<<i<<" ";
            oddsum = oddsum + i;
        }
        i++;
    }
    cout<<endl;
    cout<<"The odd sum = "<<oddsum;
    cout<<endl;
    return 0;
}