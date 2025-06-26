#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n total number of n";
    cin >> n;

    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }


    // precomputing
   int hash[13] = {0};
   for(int i = 0; i< n; i++){
    hash[arr[i]] += 1;

   }

   int q;
   cout << "enter element needs to find the value of ";
   cin >> q;
   while(q--){
    int number;
    cin>> number;

    cout << hash[number] << endl;
   }

   return 0;

}