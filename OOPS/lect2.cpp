// Encapsulation 

// Encapsulation is wrapping up of data & member functions in a single unit called class.


// when data , methods , or properties and member functions are capsuled in a single unit called capsule , this process of wrapping data methods and function into one capsule , is called as encapsulationn.


// It is responsible for data hiding and encapsulating private member functions.
#include<iostream>
#include<string>
using namespace std;


class Account{
private:
    string password;     // data hiding
public:
    string accountId;    
    string username;
    double balance;



};
