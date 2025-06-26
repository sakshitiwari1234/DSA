# include<iostream>
#include<algorithm>
using namespace std;
bool IsAnagram(string S1, string S2){
    if (S1.length() != S2.length()){
        return false;
    }else{
        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());
    }
        return (S1 == S2);
}

// using sorting function is not a good practise , we can use efficient method to do so.

bool IsAnagrams(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    int count[26] = {0};
    for(int i= 0; i< s1.length(); i++){
        count[s1[i]]++;
        count[s1[i]]--;
    }
    for(int i=0; i< 26; i++){
        if(count  [i] !=0){
            return false;
        }
    }
    return true;
}
int main(){
    string S1 = "my name is sakshi tiwari";
    string S2 = "name is my tiwari sakshi";
    cout << IsAnagram(S1, S2);

    string s1  = "hello";
    string s2 = "ollh";
    cout << IsAnagrams(s1, s2);
    

}