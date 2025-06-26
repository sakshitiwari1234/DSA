#include<iostream>
#include<cstring>
using namespace std;
int main(){

    // char str[] = "gfg login";
    // cout << str << endl;

    // char saksh[] =  {'g' , 'f' , 'g'};
    // cout << saksh;

    // functions that are used in strings 

    // strlen(str);
    // stremp(s1,s2);
    // strepy(s1,s2);

    //   char s1[] = "gfg";
    //   char s2[] = "bed";
    //   int res = strcmp(s1,s2);
    //   if(res>0)
    //   {
    //     cout << "greater";
    //   }
    //   else if
    //   (res==0){
    //     cout << "sanu";
    //   }else
    //   {
    //     cout << "smaller";
    //   }

//     char str[];
//    int res =  strcpy(str,"gfgfgfg");
//     cout << res;




        
string str = "geeksforgeeks";
cout << str.length()<< " ";


str = str + "sakshi";
cout << str;

cout << str.substr(1,3) << " ";

cout << str.find("sak") << " ";


// reading string from console;

string st;



// cout << "may i know your good name";
// cin >>st;
// cout << "you name is:"<< st;
                                // in this manner it would only accepts one single word.

// use of getline function.

// getline(cin, st);

// cout << "hey";

// iteraating through strings.
string strs = "sakshitiwaribestone";
for(int i=0; i<= strs.length();i++){
    cout << strs[i];
    cout << endl;
}

string test = "inspire";
for(char i= test.length(); i>= test[0]; i++){
    cout << test[i];
}






}