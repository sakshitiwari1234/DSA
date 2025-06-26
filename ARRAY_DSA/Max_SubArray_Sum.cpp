#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int kadaneMax(const vector<int>& arr){
    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i< arr.size(); i++){
        current_sum = max(arr[i], current_sum+ arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;

}


// function to find the minimum subarray using kadane algorithm.
int minimum_sum(const vector<int> &arr){
    int curr_sum = 0;
    int min_sum = INT_MAX;
    for(int i =0; i< arr.size(); i++){
        curr_sum = min(arr[i], curr_sum + arr[i]);
        min_sum = min(min_sum, curr_sum);
    }

    return min_sum;
}

// to find maximum sub-array sum in circular arrray.
int maximum_circular_sum(const vector<int> &arr){
    //step 1- find the normal maximum subarray sum
    int normal_max = kadaneMax(arr);

    // find the total sum of the array.
    int total_sum = 0;
    for(int i=0; i< arr.size(); i++){
        total_sum = total_sum + arr[i];
    }

    // find the minimum subarray.
    int min_sum = minimum_sum(arr);

    // handle the circular case;
    int circular_max = total_sum - min_sum;

     
     if(normal_max < 0 ){
        return normal_max;
     }

     return max(normal_max, circular_max);
}
int main(){
    vector<int> arr = {5,-3,5}; // Example array.
    cout << "maximum subarray sum in circular array :" << maximum_circular_sum(arr);

    return 0;

}