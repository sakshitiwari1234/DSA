#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    // cout << "enter a number:" << " ";
    //    int n ;
    // cin >> n;

    // cout << "the number entered is:";
    // cout << n;

//    vector <int> arr;

   
//    arr.push_back(234);
//    arr.push_back(23);
   
   
//       for(auto i: arr){
//        cout << i ;
//       }

   int arr[] = {1,2,3,4,5,6,7};
   int n = sizeof(arr)/ sizeof(arr[0]);


//    vector <int> v(6,1);

//    for(auto i : v){

//     cout << i << "  ";

//    }

// cout << n <<endl;

vector<int> c(arr, arr+n );

for(auto i: c){
    cout << i  << " ";

}


int k = 3 ;

// reverse(c.begin(), c.begin() + c.end()-1));
// cout << "after reversing" << endl;

// reverse(c.begin(), c.end()-k +1);
// reverse(c.end() -k+1 , c.end());

reverse(c.begin(), c.end()-k);
reverse(c.end()-k, c.end());
reverse(c.begin(), c.end());


cout << "after reversing " << endl;
for(auto i: c){
    cout << i  << " ";

}


// cout << "new vector" << endl;

// vector<int> v2(c.begin(), c.end());
// for(auto i: c){
//     cout << i  << " ";

// }


   


   
   
   


    




}



