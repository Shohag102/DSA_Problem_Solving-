#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter your character: ";
    cin>>ch;
    if(ch >= 'a' && ch<='z' ){
        cout<<"The character is in lower case.";
    }else{
        cout<<"The character is in upper case.";
    }

    return 0;
}