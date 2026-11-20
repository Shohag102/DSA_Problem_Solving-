#include<iostream>
using namespace std;

int main(){

    float PI = 3.14;
    double age = 24.992; //for double 8 bytes reserverd in the memory.
    bool number = false; //for bool 1 byte reserved in the memory. //trune -> 1 & false -> 0
    cout<<PI <<endl;
    cout<<age <<endl;
    cout<<sizeof(age)<<endl;
    cout<<sizeof(number)<<endl;
    cout<<number;

    return 0;
}