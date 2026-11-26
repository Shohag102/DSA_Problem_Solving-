#include<iostream>
using namespace std;

int main(){

    // do{
    //     cout<<"Hello World";
    // } while(3>5);
    int n = 5;
    int i = 1;
    int sum = 0;
    do {
        cout<<i<<" ";
        sum = sum + i;
        i++;
    }while(i<=n);
    cout<<endl;
    cout<<"The sum = "<<sum;

    return 0;
}