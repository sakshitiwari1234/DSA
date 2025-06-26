#include<iostream>
using namespace std;

bool ispresent(int arr[3][3], int target, int i, int j){
    for(int i = 0; i< 3; i++){
        for(int j = 0; i< 3; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
}
int main(){
    cout << "hello" << endl;

    int arr[3][3] = {10,20,30,40,50,60,70,80,90};
    for(int i = 0; i< 3; i++){
        for(int j = 0; j< 3; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    cout << "enter any elment to search in the array";
    int target;
    cin >> target;

    if(ispresent(arr, target, 3,3)){
        cout << "element found";
    }else{
        cout << "not found";
    }







}