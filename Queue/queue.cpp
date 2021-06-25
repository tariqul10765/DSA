#include<bits/stdc++.h>
using namespace std;
#define Max_queue 100

struct Queue{
    int head;
    int tail;
    int data[Max_queue];
};
void enqueue(Queue *q1, int item){
    if(q1->tail <= Max_queue){
        q1->data[q1->tail] = item;
        q1->tail = q1->tail + 1;
    }else cout<<"Queue is full"<<endl;
}
int dequeue(Queue *q1){
    int item;
    if(q1->tail == 0){
        cout<<"Queue is empty"<<endl;
        return -1;
    }else{
        item = q1->data[q1->head];
        q1->head = q1->head+1;
    }
    return item;
}
int main(){
    struct Queue q1;
    q1.head = 0;
    q1.tail = 0;

    enqueue(&q1, 10);
    enqueue(&q1, 100);
    enqueue(&q1, 1000);

    cout<<dequeue(&q1)<<endl;

    cout<<q1.data[0]<<endl;
}