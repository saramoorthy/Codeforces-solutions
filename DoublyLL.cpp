#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node *prev;
    Node *next;
};


class DoublyLL{
public:
    Node *first;
    Node *last;
public:
    DoublyLL(){ first=NULL;}
    DoublyLL(int A[], int n);
    void Display();
    int Length();
    void Insert(int index, int x);
    int Delete(int index);
    void Reverse();
    
};


DoublyLL::DoublyLL(int A[], int n){
    
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    first->prev=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
        Node *temp = new Node;
        temp->data=A[i];
        temp->prev=last;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void DoublyLL::Display(){
    Node *p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int DoublyLL::Length(){
    Node *p=first;
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    return count;
}

void DoublyLL::Insert(int index, int x){
    
    Node *p=first;
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(index==0){
        if(first==NULL){
            first=last=temp;
        }else{
            temp->next=first;
            temp->prev=first->prev;
            first->prev=temp;
            first=temp;
        }
    }else if(index>0 && index<=Length()){
        int i=0;
        while(i++<index-1){
            p=p->next;
        }
        temp->next=p->next;
        temp->prev=p;
        if(p->next)
               p->next->prev=temp;
        p->next=temp;
   
    }
    
    while(last->next)
        last=last->next;
    
    
}

int DoublyLL::Delete(int index){
    Node *p=first;
    int flag=0;
    int x=-1;
    if(index==0){
        flag=1;
        first=first->next;
        if(first)
            first->prev=NULL;
    }else if(index>0 && index<Length()){
        flag=1;
        int i=0;
        while(i++<index)
            p=p->next;
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
    }
    if(flag){
        x=p->data;
        delete p;
        p=NULL;
        
        while(last->next)
            last=last->next;
    }
    return x;
}

void DoublyLL::Reverse(){
    Node *p=first;
    last=first;
    while(p){
        Node *temp;
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p && p->next==NULL)
            first=p;
    }
    
}


int main(){
    
    int A[]={1,2,3,4,5};
    int n=5;
    DoublyLL d(A,n);
    d.Display();
    cout<<d.Length()<<endl;
//    d.Insert(0, 10);
//    d.Display();
//    d.Insert(2, 10);
//    d.Display();
//    cout<<"Deleted: "<<d.Delete(0)<<endl;
//    d.Display();
//    d.Insert(4, 10);
//    d.Display();
    d.Reverse();
    d.Display();
    
    return 0;
}
