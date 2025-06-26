#include<iostream>
#include<vector>
using namespace std;

void rotate(int arr[], int n , int d){
    if(n == 0){
        return ;
    }

    // taking no. of rotation to be performed 
    d = d % n; // here n is the size of array.

    if(d == 0){
        return;
    }

    int temp[d];  // creating a temporary array of d elements.

    // copying d elements .
    for(int i = 0; i< d; i++){
        temp[i] = arr[i];
    }

    // step 2:- shfiting last elements present to left of the array.

    for(int i = d; i< n; i++){
        arr[i-d] = arr[i];
    }

    //placing the elements of the temporary array in the last of array , we have shiftd the elements in left place.

    for(int i = n-d; i< n; i++){
        arr[i] = temp[i - (n-d)];


    }

}

// void reverse_rotate(int arr, int n, int d){
//     reverse(arr.begin(), arr.end()- d);
//     reverse(arr.begin()-d, arr.end());
//     reverse(arr.begin(). arr.end());  

// }
int main(){
    int n = 7;
    int arr[] = {1,2,3,4,5,6,7};

    int d = 3;

    cout << "before rotating the array"<< endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";

    }
    rotate(arr,n, d);
    cout << "After rotation"<< endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";


    }

    return 0;



}