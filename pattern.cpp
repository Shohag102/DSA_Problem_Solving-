#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i<=10; i++){
        for(int j = 1;j<=i;j++){
           cout<<j<<"  ";
        }
        cout<<endl;
    }

    // how for loop works:
    // for(initialisation; condition; updation){
         
    //     work here means output
    // }
    // first the intial value checks the condition then the value prints after that
    // the updataion process got involved and check condition and then
    //  prints the value.
    

    return 0;
}