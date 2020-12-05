#include<iostream>
#include<stack>
using namespace std;

class Node{
public:
    int data;
    Node *lchild;
    Node *rchild;
};


class BST{
public:
    Node * root;
public:
    BST(){ root=NULL;}
    void Insert(int key);
    Node* RInsert(Node *p, int key);
    void Inorder();
    Node* Search(int key);
    Node* RSearch(Node *p, int key);
};

Node* BST::Search(int key){
    Node *p=root;
    while(p!=NULL){
        if(p->data==key)
            return p;
        else if(p->data<key)
            p=p->lchild;
        else
            p=p->rchild;
    }
    return NULL;
}

Node* BST::RSearch(Node *p, int key){
    if(p!=NULL){
        if(p->data==key)
            return p;
        else if(p->data<key)
            RSearch(p->lchild,key);
        else
            RSearch(p->rchild,key);
    }
    return NULL;
}

void BST::Insert(int key){
    Node *p=root;
    Node *r=new Node;
    while(p!=NULL){
        r=p;
        if(p->data==key)
            return;
        else if(p->data<key)
            p=p->lchild;
        else
            p=p->rchild;
        
    }
    Node *temp=new Node;
    temp->data=key;
    temp->lchild=NULL;
    temp->rchild=NULL;
    
    if(r->data>temp->data)
        r->lchild=temp;
    else
        r->rchild=temp;
    
}

Node* BST::RInsert(Node *p, int key){
    Node *r=new Node;
    Node *temp=NULL;
    if(p==NULL){
        temp=new Node;
        temp->data=key;
        temp->lchild=NULL;
        temp->rchild=NULL;
        return temp;
    }
    if(key<p->data)
        p->lchild=RInsert(p->lchild, key);
    else if(key>p->data)
        p->rchild=RInsert(p->rchild, key);
    return p;
}


void BST::Inorder(){
    Node *p=root;
    stack<Node *> st;
    while(p!=NULL || !st.empty()){
        if(p!=NULL){
            st.push(p);
            p=p->lchild;
            
        }
        else{
            p=st.top();st.pop();
            cout<<p->data<<" ";
            p=p->rchild;
        }
    }
}


int main(){
    
    
    BST bst;
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(2);
    bst.Insert(1);
    bst.Insert(5);
    bst.Inorder();
    return 0;
}
