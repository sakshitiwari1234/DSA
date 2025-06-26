#include<iostream>
using namespace std;
int main(){
        //  string is sequence of character used to store and manipulate bits.

        // there are 128 characccters in ascii 
        // utf-16 - it is unicode standard format.

        // for cpp weh have ascii and java - utf-16;

        // a= 97;
        // b=98;
        // A -> 65 and this value keeps on going.


        // in java there it can store 16 bit character set , whereas in cpp ascii format it stores only 8 bit character.

        
        // question - what is the difference between unicode utf-16 and ascii characters ??? search it on own??

       char x = 'b';
       cout << x;

       cout << (int)x;   // this int in front of char variable has made the out return answer in asciii value of char variable.
       

    //    question -> we are given a set of strings , print the frequency of ccharacters in sorted order.
    

    // input = "geeksforgeeks";
    // output - e= 4; f = 1; g  =2 and so on/./

    string str = "geeksforgeeks";
    int count[26] = {0};   // we create and intilize an array of 26 by 0;


    for(int i=0;i<str.length(); i++){
        count[str[i] - 'a']++;       
    }

    for(int i=0;i<26; i++)
    {
            if(count[i]>0)
            {
                cout << char(i + 'a') << " " << count[i] <<endl;
            }
    }   




//  in this question - we were given a string , and then , we intilize an array of 26 letters with 0.

// first we have run a loop till the length of string and then , we have incremented the count array by finding the index of of particular character by --- str[i] - 'a';

// then we run a second loop and if count is greater than 0 and present in array it returns the count[i]; by char(i+  +'a');











}