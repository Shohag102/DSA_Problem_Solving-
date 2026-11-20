//casting = converting one data type to another data type.
#include<iostream>
using namespace std;

int main(){

    //conversion is implicit that means it happens automatically
    char grade = 'a';
    int value = grade;
    cout<<value<<endl;
    cout<<grade<<endl;
    //casting is explicit that means developers have to do the changes
    double price = 100.99;
    int newPrice = price;
    cout<<newPrice;
    return 0;
}