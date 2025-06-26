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
    cout << curr -> data << "  ";
    curr = curr->next;
   }
  
   // this is the way to delete a node if it is head only.
   Node* temp = head;
   head = head -> next;
   head -> back = nullptr;
   temp -> next = nullptr;
   delete temp;
   cout << endl << "the new head is:";
   cout << head-> data;

   

    




}