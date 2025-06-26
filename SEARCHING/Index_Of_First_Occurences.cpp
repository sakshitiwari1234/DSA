// first ocuurences of elemented in array.

#include<iostream>
using namespace std;

// calculating the first occurences of given element.

// Naive solution.
int FirstOccurence(int arr[], int x, int n){
    for(int i = 0; i< n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

//  Better approach using binary Search algorithm.

// int FirstOccurence_Binary_Search(int arr[], int x, int n, int start, int end){
//     int mid = (start  +end)/2;
//     if(start > end){
//      return -1;
//     }

   
//     if(x > mid){
//         return FirstOccurence_Binary_Search(arr,x,n,mid+1, end);
//     }else if(x < arr[mid]){
//         return FirstOccurence_Binary_Search(arr, x, n, mid-1, start);

//     }
//     else{
//         if(mid ==0 || arr[mid-1] != arr[mid]){
//             return mid;
//         }else{
//             return FirstOccurence_Binary_Search(arr, start , mid-1 , x);
//         }
//     }
// }


// iteratvie apporach to solve again without the use of recursion.

int FirstOccurence_Iterative(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    if(low > high){
        return -1;
    }
    while(low <=high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            high = mid-1;
        }else if(arr[mid]< x){
            low = mid+1;
        }else{
            if(mid ==0 || arr[mid-1] != arr[mid]){
                return mid;
            }else{
                high = mid-1;
            }
        }
        
    }
    return -1;
    
}






int main(){
    //First occurence of sorted array.

    int arr[] = {1,10,10,10,20,20,30,30};
    int x = 30;
    int n= sizeof(arr)/sizeof(arr[0]);
//      int start = 0; 
//    int end = n -1;
     


    // cout << "the index of first element <<" << x << "is ="<< FirstOccurence(arr, x, n);

    cout << "the first index of elemetn is equal to" << FirstOccurence_Iterative(arr, x, n);





}

