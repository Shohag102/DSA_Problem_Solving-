#include<iostream>
using namespace std;

int main(){

    int a,b;
    int sum;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    sum = a+b;
    if(sum > 0){
        cout<<"The sum is positive, "<<sum <<endl;
        cout<<sizeof (sum);
    }else{
        cout<<"The sum is negative or invalid"<<sum;
    }


    return 0;
}