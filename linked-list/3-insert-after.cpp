#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
void insertAfter(Node* node, int new_data){
    Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = node->next;

    node->next = new_node;
}

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

    // cout<<head<<endl;
    // cout<<second<<endl;
    // cout<<third<<endl;


    head->data = 1;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 33;
    third->next = NULL;

    insertAfter(head, 11);
    printlist(head);

    return 0;
}