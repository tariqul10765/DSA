#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};

void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main(){
    Node* head;
    Node* second;
    Node* third;

    head = new Node();
    second = new Node();
    third = new Node();


    head->data = 1;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 33;
    third->next = NULL;

    // This is the first way of linked-list traverse


    // Node* n = head;
    // while(n!=NULL){
    //     cout<<n->data<<endl;
    //     n = n->next;
    // }

    // This is the second way of linked-list traverse
    printlist(head);

    cout<<head->data<<endl;
}