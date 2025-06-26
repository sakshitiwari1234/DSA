# include <iostream>
using namespace std ;
struct Node
{
    /* data */
    int data ;
    Node * next;
    Node* prev;
    Node(int x){
        data = x;
        next  = nullptr;
    }
};

int main(){

    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> next = temp2;


    Node *curr = head;
    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr -> next;
    }

}