#include <iostream>
#include<cmath>
using namespace std;

bool Isarmstrong(int n ){
        // calculating total number present in k.
        int k = to_string(n).length();
        int sum = 0; 
        int num = n;

        while(num > 0){
            int ld = num % 10;

            sum = sum + pow(ld, k);

            num = num / 10;
        }




}
int main(){

    int n ;
    cout << "enter any number to check armstrong or not?";
    cin >> n;

   cout << Isarmstrong(n);



   return 0;



}