#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 20;
    cout << !(a>b) <<endl;
    cout<<((a<b) && (a>4)) <<endl;
    cout<<((a>b) || (a>4)) <<endl;
    cout<<endl;
    return 0;
}