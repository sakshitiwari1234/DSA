// Binary Search.
#include<iostream>
using namespace std;

int Binary_Search(int arr[], int size, int el){
    int start  = 0;
    int end = size - 1;
    while(start <= end){
    int mid = (start + end)/ 2;
        if (arr[mid] == el){
            return mid;
        }
        if(el > arr[mid]){
            start = mid +1;
        }else{
             end = mid-1;
        }
    }

    return -1;


}
int main(){
    int arr[] = {23,25,30,34,37,57,85,89};
    int el = 25;
    int size = sizeof(arr)/sizeof(arr[0]);
    


    cout << "the element is present at index. "<< Binary_Search(arr, size, el);
    return 0;

}