// Constructor -> Constructor is a special function which automatically invokes whenever we call a function after creating a class.

// properties of class

// name is same as of class
// constructor doesn't have a return type.
// only called once automatically , at object creation. 

// memort allocation happens when contructor is called.



#include<iostream>
using namespace std;

class A{
public:
     

   // constructor of this class without any parameters.
   A() {
    cout << " Constructor called" << endl;

   }
   string name;
   string dept;


   //parametrized constructor
   A(string n, string d){
   this->  name  = n;
   this -> dept = d;
   }

   void getinfo(){
    cout << "name" << name << endl;
    cout << "subject" << dept << endl;

   }
   
};


int main(){
    // A t1;
    // cout << A
    A obj1;

    A t1("sakshi", "aiads");
    // cout << getinfo();


    A obj2;

    A obj3;

    // There are three types of constructors.
    // 1. parametrized , non-parametrized, moved , copy

    return 0;
    



}