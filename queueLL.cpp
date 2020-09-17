#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node *next;
   
    
};

class Queue{
    
private:
    Node *front;
    Node *rear;
    
public:
    Queue(){ front=rear=NULL;};
    void enqueue(int x);
    int dequeue();
    
};

void Queue::enqueue(int x){
    Node *temp= new Node;
    temp->data=x;
    temp->next=NULL;
    if(temp==NULL)
        cout<<"Queue is Full\n";
    else{
        if(front==NULL)
            front=rear=temp;
        else{
            rear->next=temp;
            rear=temp;
        }
    }
}

int Queue::dequeue(){
    Node *p=front;
    int x=-1;
    if(front==NULL)
        cout<<"Queue is empty\n";
    else{
        p=front;
        x=p->data;
        front=front->next;
    }
    delete p;
    return x;
}

int main(){
    
    
    
    
    return 0;
}
