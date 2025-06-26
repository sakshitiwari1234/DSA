#include<iostream>
using namespace std;
int main(){
    int x = 6;
    cout << x << endl;
    int* ptr = &x;
    cout << ptr << endl;

    cout << *ptr << endl;

    int *ptrs = new int(2);
    cout << *ptrs << endl;


}