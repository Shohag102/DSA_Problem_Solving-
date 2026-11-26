#include<iostream>
using namespace std;

int main(){

    string vowel = "aeiouAEIOU";
    string mainword = "aeiouAEIOU";
    int count = 0; 
    for(int i = 0; i<=mainword.length();i++){ 
        for(int j = 0; j<=vowel.length();j++){  
            if(mainword[i] == vowel[j]){
                cout<<mainword[i];
            }
        }

    }
    cout<<endl;
    cout<<count;

    return 0;
}