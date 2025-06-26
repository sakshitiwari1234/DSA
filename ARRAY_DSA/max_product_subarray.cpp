#include<iostream>
using namespace std;

// we are given an array we need to find a continous sub-array , such that it gives us the maximum product in enitre array.

int main(){
    int arr[] = {2,5,4,3,2,4,4,5,4}; 
    int n = sizeof(arr)/ sizeof(arr[0]);
    int maximum = INT_MAX;
    int product = 1;
    for (int i= 0; i< n;i++){
        for(int j = i; j< n; j++){
            for(int k= i; k< j; k++){
                product = product * arr[k];
            }
            maximum = max(maximum, product);
        }
    }

    // this question would take Big O(n*n*n) time complexity, which is not good. Therefore we are optimizing it to big O (n*n);

// 2 optimal approaches .
int array[] = {2,3,-2, 4};
int max = INT_MIN ;
int prefix = array[0];





}