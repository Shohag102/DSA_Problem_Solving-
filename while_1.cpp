#include<iostream>
using namespace std;

int main(){

    int count = 1;
    int n = 5;
    int sum = 0;
    while (count<= n)
    {
        cout<<count <<" ";
        // count = count + 1;
        // count += 1;
        sum = sum + count;
        count++;
    }
    cout<<endl;
    cout<<sum<<endl;
    

    return 0;
}