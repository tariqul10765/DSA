#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
void insertEnd(Node** node, int new_data){
    Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = NULL;

    Node* last_node = *node;

    while(last_node->next != NULL) last_node = last_node->next;

    last_node->next = new_node;
    
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

    insertEnd(&head, 111);
    insertEnd(&head, 1141);
    printlist(head);

    return 0;
}