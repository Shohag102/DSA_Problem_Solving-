#include<iostream>
using namespace std;

int main(){

    int a = 50;
    int b = 10;
    float c = 56;
    double d = 45;
    cout<<"sum = "<<a+b<<endl;
    cout<<"difference ="<<a-b<<endl;
    cout<<"product = "<<a*b<<endl;
    cout<<"division ="<<a/b<<endl;
    cout<<"Remainder = "<<a%40<<endl; //% this operator is known as modulo. 
    cout<<"2nd Remainder = "<<b%8<<endl;
    cout<<"decimal division = "<<c/d<<endl;
    cout<<"decimal division_2 = "<<d/10<<endl;
    cout<<"decimal division_3 = "<<a/c<<endl;
    cout<<"decimal division_4 = "<<c/a<<endl;
    cout<<19/(double)2<<endl; //type casting 
    cout<<21/(float)4<<endl; //type casting
    int ans = 47/(float)35;
    cout <<ans<<endl;
    return 0;
}