#include<iostream>
using namespace std;


void printsumRowWise(int arr[3][4], int row, int col){

    for(int i = row; row< 3; i++){
        int sum = 0;
        for(int col = 0; col< 4; j++){
            sum = sum + arr[row][col];

        }
        cout << sum << " ";
    }

}






int main(){
    int arr[3][2] = {2,7,5,3,2,1};

    for(int i = 0; i< 3; i++){
        for(int j= 0; j< 2; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }


    cout << printsum(printsum,3,2 );

}