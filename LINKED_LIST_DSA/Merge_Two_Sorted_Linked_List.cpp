#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL; 
    }
};

int main() {

    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);

    Node* curr = head ;
    while(curr!= nullptr){
        cout << curr -> data << endl;
        curr = curr -> next;
    }


    cout << head -> data;
    





    return 0;
}