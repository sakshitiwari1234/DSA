#include<iostream>
using namespace std;
int main(){
    string s = "the sakshi tiwari is best.";
    // for(int i= 0; i< s.length(); i++){
    //     cout << s[i] << endl;

    // }

    // creating an array that stores 26 blocks which indicates 26 letters of aphabetand intiliziing it with 0;
    int count[26] = {0};
    for(int i = 0; i< s.length(); i++){
          count[s[i] - 'a'] ++;

    }
    for(int i = 0; i< 26; i++){
        if(count[i]> 0){
            cout << char(i + 'a') << " " << count[i] << endl;
        }
    }
    int N = 4;

    


     int res = 0;
            int counts[26] = {0};
            for(int i= 0 ; i< s.length(); i++){
                counts[s[i] - 'a']++;
            }
            
            for(int i = 0 ; i < sizeof(counts); i++){
                if(counts[i] == N){
                    res++;
                }
            }
            
            
            cout << res;
            

return 0;    
}
