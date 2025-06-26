#include<iostream>
using namespace std;


int function(int arr, int n){
    int first = INT_MAX;
    int second = INT_MAX;
    for(int i= 0; i< n; i++){
        if(arr[i] < first){
            second = first;
         first= arr[i];
        }else if(arr[i] < second && arr[i] != first){
            second = arr[i];

        }

        if(second == INT_MAX){
            return {-1,-1};
        }
        return {first, second};
    }

}

int main(){
    int arr[] = {4,3,2,5,6,4,3};
    int n = sizeof(arr)/ sizeof(arr[i]);

   cout << function(n);

}