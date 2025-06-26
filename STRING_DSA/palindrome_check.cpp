#include<iostream>
#include<algorithm>
using namespace std;
bool isPal(string &str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);

}

// effiecient solution to improve time complexity.
bool Palin(string &strs){
    int begin = 0;
    int end = strs.length() -1;
    while(begin<end){
        if(strs[begin]!= strs[end]){
            return false;
           
        }
        begin++;
        end--;
    }
    
return true;    
}

// this would take O(n) complexityyy
int main(){

    string str = "sakshi tiwari is hereeee";
    cout << isPal(str);
    string strs = "madam";
    cout << Palin(strs);

}

// this was the naive solution, now lets look at the best efficient solution of how to check the string is palindrome or not once again.
