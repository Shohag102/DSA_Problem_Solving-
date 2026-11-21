#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int sum,difference, product, division,modulo;
    char oper;

    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your operator: ";
    cin>>oper;
    cout<<"Enter your second number: ";
    cin>>b;
    if (oper == '+')
    {
        sum = a + b;
        cout<<sum;
    }
    else if (oper == '-')
    {
        difference = a - b;
        cout<<difference;
    }
    else if (oper == '*')
    {
        product = a * b;
        cout<<product;
    }
    else if (oper == '/')
    {
        division = a / b;
        cout<<division;
    }
    else{
        modulo = a%b;
        cout<<modulo;
    }
    return 0;
}