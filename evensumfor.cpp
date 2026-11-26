#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int evensum = 0;
    int evenaver;

    for(int i = 1; i<=n; i++){
        if(i%2 == 0){
            cout<<i<<" ";
            evensum += i;
            evenaver = evensum*evensum/2;
        }
    }
    cout<<endl;
    cout<<"The even sum = "<<evensum<<endl;
    cout<<"The average of even sum = "<<evenaver;

    return 0;
}