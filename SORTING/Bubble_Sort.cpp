#include <iostream>
using namespace std;


void bubble_Sort(int arr[], int n){
    // int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i< n-1; i++){
        for(int j= 0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
  

  // pritnitng the array
  for(int i =0; i< n;i++){
    cout << arr[i] << " ";
  }

}


int main(){
    int arr[] = {2 ,8 , 7 , 10};
    // cout << arr[0];
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << "Array before sorting";
    for(int i =0; i< n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sorted array";
    bubble_Sort(arr, n);




}