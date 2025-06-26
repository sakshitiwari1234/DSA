// # in this one we shall check that if a string is subsequence of othr or not.

// subsequence is something which is in sequence of chracaters in a string where , a string is given to 

// the time complexity will be 2 power n to n.

// two strings are given to us

// logic is very clear to me now.

#include<iostream> 
using namespace std;
bool isSubs(string S1 , string S2, int n, int m){
            if(n<m){
                return false;
            }
            int j = 0;
        for(int i=0; i<n && j < m ; i++){
            if(S1[i] == S2[j]){
                j++;
            }

        }
            return (j == m);

    
    
};

// recursive apporach to find the same this.

// time complexity of recursive approach is O(n+m)

bool isSubseq(string S1, string S2, int n, int m ){
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(S1[n-1] == S2[m-1]){
        return isSubseq(S1,S2, n-1, m-1);
    }else{
        return isSubseq(S1,S2,n-1, m);
    }

}


int main(){
    string S1 = "sakshi";
    string S2 =  "sai";
    int n =  S1.length();
    int m = S2.length();
    cout << isSubs(S1, S2 , n, m);
        cout << isSubseq(S1, S2 , n, m);
    

}