// ARRAY OF OBJECTS AS FUCNTION ARGUMENTS.

#include<iostream>
using namespace std;

class empl{
    int id;
    int salary;
    public:
    void setid(void){
        salary = 122;
        cout << "enter id of empl";
        cin >> id;
    }

    void getid(void){
        cout << "the id is <<" << id << endl;
    }


};

class complex{
    int a;
    int b;
    public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;

    }
    void setdatasum(complex o1, complex o2){
        // a = o1.a + 02.a;
        // b = 01.b + 02.b;
    }
    void printnumber(){
       cout << "your complex number is << " << a << "+i" << b << endl;
    
    }
};
int main(){
//   empl sakshi , aditya, tanu, oshank;
//   sakshi.setid();
//   sakshi.getid();

//   empl fb[100];
//   for (int i = 0; i< 4; i++){
//     fb[i].getid();
//     fb[i].setid();
//   }

 complex c1,c2,c3;
 c1.setdata(1,2);
 c2.setdata(3,4);






  


  return 0;


}