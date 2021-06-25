#include<bits/stdc++.h>
using namespace std;
#define Max_queue 2

struct Queue{
    int head;
    int tail;
    int data[Max_queue+1];
};
void enqueue(Queue *q1, int item){
    if((q1->tail+1) % (Max_queue+1) == (q1->head)){
        cout<<"Queue is full"<<endl;
        return;
    }
    q1->data[q1->tail] = item;
    q1->tail = (q1->tail + 1) % (Max_queue+1);
    
}
int dequeue(Queue *q1){
    int item;
    if(q1->tail == q1->head){
        cout<<"Queue is empty"<<endl;
        return -1;
    }else{
        item = q1->data[q1->head];
        q1->head = (q1->head+1) % (Max_queue+1);
    }
    return item;
}
int main(){
    struct Queue q1;
    q1.head = 0;
    q1.tail = 0;

    enqueue(&q1, 10);
    cout<<q1.data[0]<<endl;
    enqueue(&q1, 100);
    cout<<q1.data[1]<<endl;
    dequeue(&q1);
    enqueue(&q1, 1000);
    cout<<q1.data[2]<<endl;
    // enqueue(&q1, 10000);
    // enqueue(&q1, 100000);

    // cout<<dequeue(&q1)<<endl;

    //cout<<q1.data[1]<<endl;
}