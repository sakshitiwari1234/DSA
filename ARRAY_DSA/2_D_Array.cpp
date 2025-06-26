#include<iostream>
using namespace std;
int main(){

    // creating a 2 d array
//     int arr[4][4];

//    // taking input varaibles;
//    for(int i = 0; i< 4; i++){
//     for(int j = 0; j< 4; j++){
//         cin >> arr[i][j];
//     }
//    }

//    // printing the ooutputs.
//    for(int i = 0; i< 4; i++){
//     for(int j = 0; j< 4; j++){
//         cout << arr[i][j];
//     }
//    }
//    string s;
//    cin >> s;


// int a = 12;
// int b = 24;
// cout << a % b;


// creating a 2D array in space
int arr[3][3];

// taking the input varaibles.
for(int i = 0; i< 3; i++){
    for(int j = 0; j< 3; j++){
        cin >> arr[i][j];
    }
}

for(int i =0; i< 3; i++){
    for(int j = 0; j< 3; j++){
        cout << arr[i][j] << endl;
    }
}

}