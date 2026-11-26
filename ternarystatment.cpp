#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 20;
    int fac = 1;
    a>b ? cout<<"Hello" : cout<<"bye" <<endl;
    while(a>=1){
        fac = fac*a;
        a--;
    }
    cout<<fac<<endl;
    int sum = 0;
    while(b<=25){
        sum = sum + b;
        b++;
    }
    cout<<sum<<endl;

    return 0;
}