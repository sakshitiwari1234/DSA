// Copy xontructor is anotehr special constructor which is used to make a copy of constructor as it is in another constructor.



// shallow copy constructor , copies the main member values from one object to anotehr.


// a deep copy not only copies the member values but also makes copies of a any dyanmaizcally memory that members point to.



#include <iostream>
using namespace std;

class teacher{
    
    public:
    teacher(string n, string d){
        name = n;
        dept = d;
    }

    teacher(teacher &obj ){
        cout << "i am custom copy contrucotr";
        this->name = obj.name;
        this -> dept = obj.dept;
    }
    
    string name;
    string dept;
   
};

class student {
public:
    string name;
    int cgpa;

    student(string n, int c){
        this->name = n;
        this-> cgpa = c;
    }

    void getinfo() {
        cout << "name" << name << endl;
        cout << "cgpa" << cgpa << endl;
    }




};
int main(){

    // teacher t1("sakshi", "aiads");

    // teacher t2(t1);
    // cout << "hello";
    // cout << t1.name;

    // cout << t2.dept;

    // cout << teacher(t2);

    student s1("sakshi tiwari", 8.2);
    s1.getinfo();

    student s2(s1);
    s2.getinfo();

    return 0;

  

}