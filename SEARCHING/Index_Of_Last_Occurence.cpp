#include<iostream>
using namespace std;


int lastOcccurence(int arr[], int n, int x, int low, int high){
    if(low > high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] > x){
        return lastOcccurence(arr, n, x, low, mid-1);
    }else if(arr[mid]< x){
        return lastOcccurence(arr, mid+1, high);
    }else{
        if(mid == n-1 || arr[mid] != arr[mid+1]){
            return mid;
        }else{
            return lastOcccurence(arr, mid+1, high);
        }
    }


}

int main(){

    int arr[] = {1,10,10,10,10,20,20,20,20,30,30,30};
    // we have to find the index of last occurence which simmply means that if a certain number is present we need to fidn the last time index of its occurence.
    
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 20;
    int low = 0;
    int high = n -1;


}