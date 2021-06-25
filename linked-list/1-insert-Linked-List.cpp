#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
// aikhane pointer er address receive kora hoise tai double pointer use kora hoise
void pushh(Node** head_ref, int data){
    Node* new_node = new Node();

    //cout<<*head_ref<<endl;
    new_node->data = data;
    new_node->next = *head_ref;

    *head_ref = new_node;
    //cout<<*head_ref<<endl;
}

void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main(){
    Node* head;

    head = new Node();


    head->data = 1;
    head->next = NULL;

    pushh(&head, 66);
    pushh(&head, 666);
    pushh(&head, 6666);
    printlist(head);

    return 0;
}