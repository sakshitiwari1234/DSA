#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int data1, Node*next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next= nullptr;
    }
};


int main(){
    int arr[]  ={1,2,3,4};
    Node* head = new Node(10);
   head  ->next = new Node(20);
   head -> next-> next = new Node(30);


   Node* curr = head;
   while(curr != nullptr){
    cout << curr -> data;
    curr = curr->next;
   }
    




}