#include<iostream>
using namespace std;
int main(){

    char x = 'a';
    cout << int(x);

    // char y = 'abc';
    // cout << int(y);

    //program 1 -> print the frquenciy of characters, given a string , you have to print numbers of time the particular charaacter is counted.

    string str=  "geeksforgeeks";
    int count[26] = {0};
    for(int i= 0; i< str.length(); i++){
        count[str[i] - 'a']++;
    }
    for(int i=0;i< 26;i++){
        if(count[i]>0){
            cout << char(i+'a')<<" "<< count[i]<<endl;
        }
    }

    
}