#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int sum;
    int difference;
    int product;
    int division;
    int modulo;
    cout <<"Enter your first number: ";
    cin>>a;
    cout <<"Enter your second number:";
    cin>>b;
    sum = a+b;
    difference = a-b;
    product = a*b;
    division = a/b;
    modulo = a%b;
    cout<<"The sum of two number is :"<<sum <<endl;
    cout<<"The difference between two numbers is :"<<difference <<endl;
    cout<<"The product of two numbers is :"<<product <<endl;
    cout<<"The division is : "<<division <<endl;
    cout<<"The remainder is: "<<modulo<<endl;

    return 0;
}