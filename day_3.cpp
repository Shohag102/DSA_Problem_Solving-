#include<iostream>
using namespace std;

int main(){
 
    char grade = 'A'; //for single character single quotation is used in C++
    string name = "Hossain"; //for multiple characters double quotation is used in C++
    int age = 25; //for int 4 bytes reserved for allocation
    float price = 2.45; //for float 4 bytes reserverd for allocation
    cout<<sizeof(age)<<endl; 
    cout<<sizeof(price)<<endl;
    cout<<sizeof(grade)<<endl; //for char data types 1 byte reservered for allocation in memory
    cout<<sizeof(name)<<endl; //for string data types 24 bytes reserved for allocation in memory
    return 0;
}