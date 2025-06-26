#include<iostream>
using namespace std;


// we have to return the index of character which is most rpeeating from left side.

int leftmost(string & str){
    for(int i=0; i<str.length(); i++){
        for(int j=i+1;j<str.length(); j++){
            if(str[i] == str[j]){
                return i;
            }
        }
    }
    return -1;

}
int main(){
    string str = "Sakshi";
    string strs = "geeksforgeeks";
    cout << leftmost(strs);
    string stringss =  "apple";
    cout << leftmost(stringss);
    cout << leftmost(str);
    return 0;
}


// time complexity -  O(n2)

// wworking 