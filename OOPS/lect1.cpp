// Object Oriented Programming language. 

// In oops definition and examples become very important for interviews and placeemnts and enables real life scenarios coding much easier.


// Objects are entities in the real world. 

// class is like a blueprint of these entities.


// toyota -> car1 -> car2 -> car3  , here car1 , car2 , car3 , are objects.

// teacher - name , department , subject , salary
// these are properties of object.

// There are two things in object - 
// 1. properties or attributes.
// 2. methods (methods are the associated function related to a object. ) 

// class --> object -> object 


#include<iostream>
#include<string>
using namespace std;

// access modifers -
// private - accessible inside only class
// public - can be accessed from anywhere.
// protected. -  data and methods are accessible inside class and its derived class.


// By default all the properties are private in a class in cpp.


class teacher{
    // properties, attributes.
private:
    float salary;

public:
   
    string name;
    string dept;
    string subject;

    //methods ,  also known as member functions.

    void changedept(string newdept){
        dept = newdept;
    }
     // it is a setter function , mostly used to set values.
    void setsalary(double s){
        salary = s ;

    }
    // it is a getter function , which is used to get the info from any function.
    double getsalary(){
        return salary;
    }
};

class student{
public:
    string name;
    string surname;
    string branch;


};

int main() {

    teacher t1;
    teacher t2;
    teacher t3 ;

    t1.name = "Sheena kumar";
    t1.subject = "C++";
    t1.dept = "Computer science";
    t1.setsalary(240004);

    cout << t1.name << endl;
//    cout << getsalary();

 
    return 0;
}
