#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};



int main(){
    // Node* head = new Node(10);
    // Node* temp1 = new Node(20);
    // Node* temp2 = new Node(30);

    // head -> next = temp1;
    // temp1 -> next = temp2;

    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);


   int x = 50;
        Node* newNode = new Node(x);
        Node*temp= head;
   while(temp-> next!= nullptr){
    // cout << head -> data << endl;
    // head = head -> next ;
    temp= temp-> next;
   }
    
        temp->next = newNode;
        newNode-> next = nullptr;
    
   


Node* curr = head;
while(curr != nullptr){
    cout << curr -> data;
    curr = curr -> next;
}


}