#include <iostream>
using namespace std;

void reverse(int n, int ar[]){
    int low = ar[0];
    int high = ar[n-1];
    while(low<high){
        int temp = ar[low];
        ar[low] = ar[high];
        ar[high] = ar[low];
        low++;
        high--;
    }
    return ;


}

int main(){
    int ar[] = {1,2,3,4,5};
    int n = sizeof( ar)/ sizeof(ar[0]);
    
   reverse(ar[], n);

   for(int i= 0; i< n;i++){
    cout << ar[i] << " ";
   }

   return 0;

}