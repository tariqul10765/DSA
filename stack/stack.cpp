#include<bits/stdc++.h>
using namespace std;

#define Max_stack 100

struct Point
{
   int top;
   int data[Max_stack];
};

void push(Point *p1, int item){
    cout<<p1<<endl;

    if(p1->top < Max_stack){
        p1->data[p1->top] = item;
        p1->top = p1->top + 1;
    }else cout<<"Stack is full"<<endl;

    //cout<<*p1->data<<endl;
}

int pop(Point *p1){
    int item;

    if(p1->top == 0){
        cout<<"Stack full"<<endl;
        return -1;
    }else{
        p1->top = p1->top - 1;
        item = p1->data[p1->top];
    }

    return item;
}

int main(){
    struct Point p1;
    p1.top = 0;
    
    
    push(&p1, 10);
    push(&p1, 200);
    push(&p1, 500);

    

    cout<<p1.data[0]<<endl;
    cout<<p1.data[1]<<endl;
    cout<<p1.data[2]<<endl;

    cout<<pop(&p1)<<endl;
    cout<<pop(&p1)<<endl;



    //cout<<arr[1]<<endl;

    //cout<<p1<<endl;
}