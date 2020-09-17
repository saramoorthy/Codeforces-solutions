#include<iostream>
using namespace std;


class CircularQueue{
private:
    int size;
    int front;
    int rear;
    int *q;
    
public:
    CircularQueue(){ this->size=0; front=rear=0; q=new int[size]; }
    CircularQueue(int size);
    void enqueue(int x);
    int dequeue();
    void Display();
};

CircularQueue::CircularQueue(int size){
    this->size=size;
    //front=rear=-1 not allowed because in circular queue if we reached last index, then next location should be 0, so we avoid -1;
    front=rear=0;
    q=new int[this->size];
}

void CircularQueue::enqueue(int x){
    if((rear+1)%size==front)
        cout<<"Queue is full"<<endl;
    else{
        rear = (rear+1)%size;
        q[rear]=x;
        
    }
}

int CircularQueue::dequeue(){
    int x=-1;
    if(front==rear)
        cout<<"Queue is empty"<<endl;
    else
    {
        front = (front+1)%size;
        x=q[front];
    }
    
    return x;
}

void CircularQueue::Display(){
    int i=front+1;
    do{
        cout<<q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout<<endl;
}

int main(){
    
    CircularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.Display();
    q.dequeue();
    q.Display();
    return 0;
}
