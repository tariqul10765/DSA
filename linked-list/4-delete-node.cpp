#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
void push(Node** head_ref, int data){
    Node* new_node = new Node();

    //cout<<*head_ref<<endl;
    new_node->data = data;
    new_node->next = *head_ref;

    *head_ref = new_node;
}
void insertEnd(Node** head_ref, int new_data){
    Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = NULL;

    Node* last_node = *head_ref;

    while(last_node->next != NULL) last_node = last_node->next;

    last_node->next = new_node;
    //cout<<last_node->next<<endl;
    
}

void deleteNode(Node** head_ref, int key){
    Node* node = *head_ref;
    Node* prev = NULL;
    while(node->data!=key){
        prev = node;
        node = node->next;
    }

    prev->next = node->next;

    delete node;
    // cout<<node->data<<endl;
    // cout<<prev->data<<endl;
}

void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main(){
    Node* head = NULL;

    //if(head == NULL) cout<<"head"<<endl;
    

    push(&head, 5);
    insertEnd(&head, 1);
    insertEnd(&head, 2);

    printlist(head);

    deleteNode(&head, 1);
    printlist(head);

    return 0;
}