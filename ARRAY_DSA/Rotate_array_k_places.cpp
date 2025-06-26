#include <iostream>
#include<vector>
using namespace std;


int main(){
    int arr[5]= {1,2,3,4,5};
    int i, j, temp;
    int n = 7;
    int k = 3;
    while(k>0){
        temp = arr[n-1];
        for(int i = n-2; i>= 0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
        k--;
    }
    for(int i = 0; i< n-1; i++){
        cout << arr[i] << endl;
    }

    // there is one more apporach to solve the same problem.


    
}