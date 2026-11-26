#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter your character number: ";
    cin>>ch;
    if(ch>=65 && ch<=90){ //implicit type conversion is used here.
        cout<<"uppercase";
    }else{
        cout<<"lowercase";
    }


    return 0;
}