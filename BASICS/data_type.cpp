#include<iostream>
#include<typeinfo>
using namespace std;


int fib(int n){
    int ans= fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    // int n = 23;
    // cout << typeid(n).name();
    int n = 7;
    int result = fib(n);
    cout << result;





}

