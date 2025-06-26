#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,2,7,4};

    // i have to find the peak element;
    int n  = sizeof(arr);
    for(int i=0;i<n;i++){
        if(arr[i]>= arr[i-1] && arr[i]>= arr[i-1]){
            cout << i;
        }

    }
    
}