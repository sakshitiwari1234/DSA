#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL; 
    }

};

int result(Node* head){
    Node* curr  = head;
    while(curr != 0){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    result(head);



}