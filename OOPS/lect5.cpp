// constructor and its types with various operations test cases.



#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float gpa;

    

    student(){    // default constructor 

    }
    student(string s , int r){      // parametrized constructor..
        name = s;                          
        rno = r;
    
    }
    student(string s, int r , int g){
        name = s;
        rno = r;
        gpa = g;
    }

    student(int r , float g , string s){
        name = s;
        rno = r;
        gpa = g;
    }



};

int main(){

    student s1("sakshi tiwari", 100);
    s1.name = "aditya";
    s1.gpa = 9.9;

    // cout << s1.gpa;

    // student s2("aditya tiwari",3 , 99.9);

    // // cout << s1.name << " " << s1.rno;

    // cout << s2.name;

    // student s3;
    // s3.name= "aditya";
    // s3.rno = 88;
    // s3.gpa = 6.2;


    // cout << s3.rno;
    // cout << s3.gpa;


    // student s4("anurag", 21,22.11);
    // cout << s4.name;



    // student s5(32, 54.33, "Palak Dubey");

    // cout << s5.name << " " << s5.rno << " " << s5.gpa;

    // student s5(s4);

    student s6 = s1;  // Deep copy
    s6.name = "priya";// 

    cout << s6.name ;
    cout << s6.rno;
    cout << s6.gpa;

    student s7(s1);

    cout << s7.name;
    cout << s7.rno;
    cout << s7.gpa;




}