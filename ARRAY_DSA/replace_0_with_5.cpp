#include<iostream>
using namespace std;
int convert_Five(int n){
    int res =0;
    int place = 1;
    while( n != 0 ){
        int digit = n % 10;
        
        if(digit == 0){
            cout << "hi there,work hard more." << endl;

        }else if(digit ==1){
            cout << "hey there,always on top girl.keep woeking hard." << endl;
        }
        res = res + digit * place;
        place = place * 10;
        n = n/10;

    }
    return res;

}
int main(){
    int n = 11010101;

    cout << convert_Five(n);

}