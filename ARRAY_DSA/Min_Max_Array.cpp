#include<iostream>
using namespace std;


void printarray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout << arr[i];
    }

}
// void min_max(int arr, int n){
//     int min = arr[0];
//     int max = arr[0];

//     for(int i =)
// }
int main()
{

    //declare
    int a[] = {1,2,3,4,5,6,7};


    //print
    for(int i= 0 ; i< 7; i++){
        cout << a[i];
    
    cout << endl;
    }
   int n = sizeof(a)/sizeof(a[0]); 
    printarray(a,n);
return 0;
}