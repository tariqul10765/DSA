#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
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

    return 0;
}