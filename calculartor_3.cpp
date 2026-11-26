#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int sum,difference, product, division,modulo;
    char oper;
    
    for(int i = 1; i<=100;i++){
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your operator: ";
    cin>>oper;
    cout<<"Enter your second number: ";
    cin>>b;
    if (oper == '+')
    {
        sum = a + b;
        cout<<sum<<endl;
    }
    else if (oper == '-')
    {
        difference = a - b;
        cout<<difference<<endl;
    }
    else if (oper == '*')
    {
        product = a * b;
        cout<<product<<endl;
    }
    else if (oper == '/')
    {
        division = a / b;
        cout<<division<<endl;
    }
    else{
        modulo = a%b;
        cout<<modulo<<endl;
    }
    }
    return 0;
}