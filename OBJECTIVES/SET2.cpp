#include<iostream>
using namespace std;

// class A{
//     public:
//     A(int ii = 0): i(ii){}
//     void show(){
//         cout << "i = " << i << endl;
//     }

//     private:
//     int i;
// };

// class b{
//     public:
//     b(int xx): x(xx){}
//     operator A() const {
//         return A(x);
//     }

//     private:
//     int x;

// };


// void g(A a){ a.show();}

class base{
    int arr[10];
};


class b1: public base { };

class b2: public base { };

class derived: public b1, public b2{};


class employee{
    private:
     int a , b, c;

    public:
      void setdata(int a1, int b1 , int c1);

    void getdata(){
        cout << "value of a is" << a <<endl;
        cout << "value of b is" << b <<endl;
        cout << "value of c is" << c <<endl;
        // cout << "value of d is" << d <<endl;

    }


};
void employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c= c1;

};



int main(){
    // B b(10);
    // g(b);
    // g(20);
    // getchar();
    // cout << sizeof(derived);
    // getchar();

    employee sakshi;
    // sakshi = 
    sakshi.setdata(1,2,3);
    sakshi.getdata();
    return 0;
}




