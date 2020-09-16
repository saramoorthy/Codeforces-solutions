#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};


class CircularLL{
    
public:
    Node *head;
    Node *last;
    
    
public:
    CircularLL(){ head=last=NULL;};
    CircularLL(int A[], int n);
    int Length();
    void Display();
    void RDisplay(Node *p);
    void Insert(int index, int x);
    int Delete(int index);
};


CircularLL::CircularLL(int A[], int n){
    
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;
    
    for(int i=1;i<n;i++){
        Node *temp=new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    last->next=head;
}

void CircularLL::Display(){
    
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    
    cout<<endl;
}

void CircularLL::RDisplay(Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        cout<<p->data<<" ";
        p=p->next;
        RDisplay(p);
    }
}

int CircularLL::Length(){
    Node *p=head;
    int count=0;
    do{
        count++;
        p=p->next;
    }while(p!=head);
    
    return count;
}
void CircularLL::Insert(int index, int x){
    Node *p=head;
    Node *temp = new Node;
    temp->data=x;
    temp->next=NULL;
    
    if(index==0){
        if(head==NULL){
            head=temp;
            head->next=head;
            last=head;
        }else{
            temp->next=head;
            head=temp;
            last->next=head;
        }
        
           
    }else if(index>0 && index<=Length()){
        for(int i=0;i<index-1;i++)
            p=p->next;
        
        temp->next=p->next;
        p->next=temp;
    }
    if(index==Length()-1)
        last=last->next;
    
}

int CircularLL::Delete(int index){
    Node *p=head;
    Node *q=NULL;
    if(index==0){
        head=head->next;
        last->next=head;
    }else if(index>0 && index<Length()){
        int i=0;
        while(i++<index){
            q=p;
            p=p->next;
        }
        q->next=p->next;
    }
    if(index==Length())
        last=q;
    int x=p->data;
    delete p;
    p=NULL;
    return x;
}

int main(){
    
    
    int A[]={1,2,3,4,5};
    int n=5;
    
    CircularLL cll(A,n);
    cout<<cll.Length()<<endl;
    cll.Display();
    cll.RDisplay(cll.head);
    cout<<endl;
    cll.Insert(0, 10);
    cll.Display();
    cll.Insert(6, 11);
    cll.Display();
    cll.Insert(5,12);
    cll.Display();
    cll.Delete(2);
    cll.Display();
    return 0;
}
