// Fucntion Inside classes.

#include<iostream>
using namespace std;

class person{
public:
    string name;
    int cgpa;

    person(string name , int cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }


    void print(){


}
    

};

void print(person p1){
    cout << p1.name;

}
int main(){

    person p1("sakshi tiwari", 222234);
    person p2("aditya tiwari", 32434);

    cout << p1.name;
    cout <<  p1.name << p1.cgpa;

    p1.name = "sachin";
    p1.print();
    


    


}