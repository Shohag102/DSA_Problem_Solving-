#include<iostream>
using namespace std;

int main(){

    int n = -45;
    if(n>=0){
        cout<<"n is positive\n";
    } else {
        cout<<"n is negative\n";
    }
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You can vote\n";
    } else{
        cout<<"You can't vote\n";
    }
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num%2 == 0){
        cout<<"The number is even = "<<num;
    }
    else{
        cout<<"The number is odd";
    }


    return 0;

}