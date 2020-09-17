#include<iostream>
using namespace std;


class Queue{
private:
    int size;
    int front;
    int rear;
    int *q;
    
public:
    Queue(){ size=10; front=rear=-1; q=new int[size]; }
    Queue(int size);
    void enqueue(int x);
    int dequeue();
    void Display();
};

Queue::Queue(int size){
    this->size=size;
    front=rear=-1;
    q=new int[size];
}

void Queue::enqueue(int x){
    if(rear==size-1)
        cout<<"Queue overflow"<<endl;
    else
        q[++rear]=x;
}

int Queue::dequeue(){
    int x=-1;
    if(front==rear)
        cout<<"Queue underflow"<<endl;
    else
    {
        x=q[front++];
    }
    
    return x;
}

void Queue::Display(){

    for(int i=front+1;i<=rear;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    Queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.Display();
    return 0;
}
