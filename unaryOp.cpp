#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = a++; //duty first -> then update //postincrement
    cout<<b<<endl;
    cout<<a<<endl;

    int c = 20;
    int d = ++c; // update first -> then duty //preincrement.

    cout<<d<<endl;
    cout<<c<<endl;

    int e = 100;
    int f = e--; //duty first -> then update postdecrement.

    cout<<f<<endl;
    cout<<e<<endl;

    int g = 90;
    int h = --g; //update first -> then duty predecrement
    
    cout<<h<<endl;
    cout<<g<<endl;


    return 0;
}