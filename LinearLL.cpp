#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node *next;
};

class LinkedList{
public:
    Node *first;
    Node *last;
public:
    LinkedList(){ first=NULL;last=NULL;}
    LinkedList(int A[], int n);
    ~LinkedList();
    
    void Display();
    void RDisplay(Node *p);
    void ReverseDisplay(Node *p);
    int Length();
    int sum();
    int max();
    int min();
    Node * LinearSearch(int key);
    Node * ImpLinearSearch(int key);
    void Insert(int index, int x);
    void InsertLast(int x);
    void InsertSorted(int x);
    void Delete(int index);
    bool isSorted();
    void RemoveDuplicatesSorted();
    void ReverseElements();
    void ReverseLinks();
    void ReverseRecursion(Node *p, Node *q);
    Node * Concat2LL(Node *p, Node *q);
    Node * Merge2LL(Node *p, Node *q);
    bool isLoop();
};

LinkedList::LinkedList(int A[], int n){
    Node *t;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
       t=new Node;
       t->data=A[i];
       t->next=NULL;
       last->next=t;
       last=t;
    }
    
}

LinkedList::~LinkedList(){
    
}

void LinkedList::Display(){
    Node *p=first;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void LinkedList::RDisplay(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
        RDisplay(p);
    }
    
}

void LinkedList::ReverseDisplay(Node *p){
    if(p!=NULL){
        ReverseDisplay(p->next);
        cout<<p->data<<" ";
    }
    
}

int LinkedList::Length(){
    int count=0;
    Node *p=first;
    while(p){
        count++;
        p=p->next;
    }
    return count;
}

int LinkedList::sum(){
    int sum=0;
    Node *p=first;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int LinkedList::max(){
    int maxnum=INT_MIN;
    Node *p=first;
    while(p){
        if(p->data>maxnum)
            maxnum=p->data;
        p=p->next;
    }
    return maxnum;
}

int LinkedList::min(){
    int minnum=INT_MAX;
    Node *p=first;
    while(p){
        if(p->data<minnum)
            minnum=p->data;
        p=p->next;
    }
    return minnum;
}


Node * LinkedList::LinearSearch(int key){
    Node *p=first;
    
    while(p){
        if(p->data==key)
            return p;
        else
            p=p->next;
    }
    
    return p;
}

Node * LinkedList::ImpLinearSearch(int key){
    Node *p=first;
    Node *q=new Node;
    
    while(p){
        if(p->data==key){
            
            q->next=p->next;
            q=p;
            p->next=first;
            first=p;
            return first;
        }
            p=p->next;
    }
    
    return NULL;
}

void LinkedList::Insert(int index, int x){
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    
    if(index==0){
        temp->next=first;
        first=temp;
        last=first;
    }else if(index>0 && index<=Length()){
        Node *q = new Node;
        q=first;
        int i=0;
        while(i++<index-1)
            q=q->next;
        temp->next = q->next;
        q->next = temp;
        
        
    }
    while(last->next)
        last=last->next;
    
}

void LinkedList::InsertLast(int x){
    
    Node *temp;
    
       temp=new Node;
    
       temp->data=x;
       temp->next=NULL;
       if(first==NULL)
           first=last=temp;
       else
       {
           last->next=temp;
           last=temp;
           
       }
    while(last->next)
        last=last->next;
    
}

void LinkedList::InsertSorted(int x){
    
    Node *p=first;
    
    Node *temp=new Node;
    Node *q=new Node;
    temp->data=x;
    temp->next=NULL;
    while(p && p->data<x){
            q=p;
            p=p->next;
        }
        
    if(p==first){
        temp->next=first;
        first=temp;
    }else{
        temp->next=q->next;
        q->next=temp;
    }
    
    while(last->next)
        last=last->next;
    
}

void LinkedList::Delete(int index){
    Node *p=first;
    Node *q=NULL;
    if(index<=Length() && index>0){
        if(index==1){
            first=first->next;
        }else{
            int i=0;
            while(p && i++<index-1){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            if(index==Length()+1)
                last=q;
            
        }
        cout<<endl<<"Deleted:"<<p->data<<endl;
        delete p;
        p=NULL;
    }
    
    
}

bool LinkedList::isSorted(){
    Node *p=first;
    int prev=INT_MIN;
    while(p){
        
        if(prev>p->data)
            return false;
        prev=p->data;
        p=p->next;
    }
    return true;
}

void LinkedList::RemoveDuplicatesSorted(){
    Node *p=first;
    int prev=p->data;
    p=p->next;
    int count=1;
    while(p){
        if(prev==p->data)
            Delete(count);
       
        prev=p->data;
        p=p->next;
        count++;
    }
}

void LinkedList::ReverseElements(){
    Node *p=first;
    int A[Length()-1];
    int i=0;
    while(p && i<Length()){
        A[i++]=p->data;
        p=p->next;
    }
    
    p=first;
    while(i>=0 && p){
        p->data=A[--i];
        p=p->next;
    }
}

void LinkedList::ReverseLinks(){
    Node *p=first;
    last=first;
    Node *q=NULL;
    Node *r=NULL;
    
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    
    first=q;
    
}

void LinkedList::ReverseRecursion(Node *p, Node *q){

    if(p){
        ReverseRecursion(p->next,p);
        p->next=q;
    }
    else
        first=q;
        
    
}

Node * LinkedList::Concat2LL(Node *p,Node *q){
    while(p->next){
        p=p->next;
    }
    p->next=q;
    q=NULL;
    
    while(last->next)
        last=last->next;
    return p;
}


Node * LinkedList::Merge2LL(Node *f, Node *s){
    Node *t = new Node;
    Node *l = new Node;
    
    if(f->data<s->data){
        t=l=f;
        f=f->next;
        l->next=NULL;
    }else{
        t=l=s;
        s=s->next;
        l->next=NULL;
    }
    
    while(f && s){
        
        if(f->data<s->data){
            l->next=f;
            l=l->next;
            f=f->next;
            l->next=NULL;
        }else{
            l->next=s;
            l=l->next;
            s=s->next;
            l->next=NULL;
        }
        
    }
    
    if(f)
        l->next=f;
    else if(s)
        l->next=s;
    
    while(last->next)
        last=last->next;
    
    return t;
}

bool LinkedList::isLoop(){
    Node *p=first;
    Node *q=first;
    
    
        do{
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
        }while(p && q);
        
        if(p==q)
            return true;
        else
            return false;
}

int main(){
    
    
    int A[]={1,3,5,7,9};
    int n=5;
    int B[]={2,4,6,8};
       int m=4;

    LinkedList ll(A,n);
    ll.Display();
    LinkedList ll2(B,m);
    ll2.Display();
//    cout<<ll.Length()<<endl;
//    cout<<ll.sum()<<endl;
//    cout<<ll.min()<<endl;
//    cout<<ll.max()<<endl;
//
//    cout<<endl;
//    Node *ans= ll.LinearSearch(2);
//    cout<<ans->data<<" "<<ans<<endl;
//    Node *ans1= ll.LinearSearch(10);
//    cout<<ans1<<endl;
//    Node *ans2= ll.ImpLinearSearch(2);
//    cout<<ans2<<endl;
    
    //ll.Insert(0, 10);
    //ll.Display();
    //ll.Insert(2, 11);
//    LinkedList ll;
//
//    ll.Display();
//    ll.Insert(ll.Length(), 12);
//    ll.Display();
//
//    ll.InsertLast(30);
//    ll.InsertLast(31);
//    ll.Display();
//    ll.InsertSorted(31);
//    ll.Display();
//    ll.InsertSorted(32);
//    ll.Display();
//    ll.Delete(1);
//    ll.Display();
//    ll.Delete(4);
//    ll.Display();
//    ll.InsertLast(32);
//    ll.Display();
//    cout<<ll.isSorted()<<endl;
//    ll.RemoveDuplicatesSorted();
//    ll.Display();
//    ll.ReverseRecursion(ll.first, NULL);
//    ll.Display();
    
    ll.Merge2LL(ll.first, ll2.first);
    ll.Display();
    ll.InsertLast(10);
    ll.Display();
    
    
    
    return 0;
}
