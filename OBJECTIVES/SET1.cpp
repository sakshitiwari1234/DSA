#include<iostream>
using namespace std;

class base1{
    public:
      base1(){
        cout << " base 1 has been called" << endl;

    }
       
};


class base2{
    public:
      base2(){
        cout << "base 2 consturctor habs been called"<<endl;

      }

};

class Derived: public base1, public base2{
    public:
    Derived(){
        cout << "Derived constuctor called" << endl;
    }
};

int main(){
    Derived d; // results in base1, then base 2 then derived.
    return 0;

}
