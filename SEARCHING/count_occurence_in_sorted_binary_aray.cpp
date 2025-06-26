#include<iostream>
using namespace std;
int countOnes(int arr, int n){
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid]==0){
            low = mid+1;

        }else{
            if(mid == 0|| arr[mid-1]==0){
                return(n-mid);
            }else{
                high = mid -1;
            }
        }
    }
}
int main(){
    int arr[] = {0,1,0,0,0,0,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "the number of ones present in array " << countOnes(arr,n);

}

