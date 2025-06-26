#include<iostream>
using namespace std;

int occurence(int arr, int n, int x){
    int first = occurence(arr,n,x);
    if(first == -1)


}
int main(){
    int arr[] = {10,20,20,30,30,30,40,40};
    int x = 20;
    int n = sizeof(arr)/ sizeof(arr[0]);
    // Write the function to find the number of occurrences of elements present in this array.


    // Iteraatvie approach -> T.C - O(N) time complexitty.
    // Recursive binary approach -> O(log n time)

    cout << "the number of times this element is occuring is equal to::_" occurence(arr, n, x);
}