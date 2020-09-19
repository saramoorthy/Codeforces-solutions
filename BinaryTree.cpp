#include<iostream>
#include<queue>
#include<stack>
using namespace std;


class Node{
public:
    char data;
    Node *lchild;
    Node *rchild;
    Node() {};
    Node(int data);
};
Node::Node(int data) {
    lchild = nullptr;
    this->data = data;
    rchild = nullptr;
}

class BinaryTree{
public:
    Node *root;
public:
    BinaryTree(){root=NULL;}
    BinaryTree(char *A, int n);
    void preorder(Node *p);
    void inorder(Node *p);
    void postorder(Node *p);
    void ItPreorder();
    void ItInorder();
    void ItPostorder();
    void LevelOrder();
    int searchInorder(int inArray[], int inStart, int inEnd, int data);
    Node * generateFromTraversal(int *inorder, int *preorder, int inStart, int inEnd);
    
    
};

BinaryTree::BinaryTree(char A[], int n){
    Node *p=NULL;
    queue<Node *> q;
    if(root==NULL){
        root=new Node;
        root->data=A[1];
        root->lchild=NULL;
        root->rchild=NULL;
        q.push(root);
    }
    int i=1;
    while(!q.empty() || i<n){
        p=q.front();
        q.pop();
        if(p->lchild==NULL){
            if((2*i)<n){
                Node *temp=new Node;
                temp->data=A[2*i];
                temp->lchild=NULL;
                temp->rchild=NULL;
                p->lchild=temp;
                q.push(temp);
            }
            
        }
        if(p->rchild==NULL){
            if((2*i+1)<n){
                Node *temp=new Node;
                temp->data=A[(2*i)+1];
                temp->lchild=NULL;
                temp->rchild=NULL;
                p->rchild=temp;
                q.push(temp);
            }
        }
        i++;
    }
}

void BinaryTree::preorder(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void BinaryTree::inorder(Node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

void BinaryTree::postorder(Node *p){
    if(p!=NULL){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

void BinaryTree::ItPreorder(){
    Node *p=root;
    stack<Node *> st;
    while(p!=NULL || !st.empty()){
        if(p!=NULL){
            cout<<p->data<<" ";
            st.push(p);
            p=p->lchild;
        }else{
            p=st.top();
            st.pop();
            p=p->rchild;
        }
        
    }
    
}

void BinaryTree::ItInorder(){
    Node *p=root;
    stack<Node *> st;
    while(p!=NULL || !st.empty()){
        if(p!=NULL){
            st.push(p);
            p=p->lchild;
        }else{
            p=st.top();
            st.pop();
            cout<<p->data<<" ";
            p=p->rchild;
        }
    }
}

void BinaryTree::ItPostorder(){
    Node *p=root;
    stack<long int> st;
    long int temp;
    while(p!=NULL || !st.empty()){
        if(p!=NULL){
            st.push((long int)p);
            p=p->lchild;
        }else{
            temp=st.top();st.pop();
            if(temp>0){
                st.push(-temp);
                p=((Node *)temp)->rchild;
            }else{
                cout<<((Node *)-temp)->data<<" ";
                p=NULL;
            }
            
        }
    }
}

void BinaryTree::LevelOrder(){
    Node *p=root;
    queue<Node *>q;
    q.push(root);
    cout<<p->data<<" ";
    while(!q.empty()){
        p=q.front();q.pop();
        if(p->lchild!=NULL){
            cout<<p->lchild->data<<" ";
            q.push(p->lchild);
        }
        if(p->rchild!=NULL){
            cout<<p->rchild->data<<" ";
            q.push(p->rchild);
        }
    }
}

int BinaryTree::searchInorder(int inArray[], int inStart, int inEnd, int data){
    for (int i=inStart; i<=inEnd; i++){
        if (inArray[i] == data){
            return i;
        }
    }
    return -1;
}

Node* BinaryTree::generateFromTraversal(int *inorder, int *preorder, int inStart, int inEnd) {
    //Reference: https://algorithms.tutorialhorizon.com/make-a-binary-tree-from-given-inorder-and-preorder-traveral/
    static int preIndex = 0;
 
    if (inStart > inEnd){
        return nullptr;
    }
 
    Node* node = new Node(preorder[preIndex++]);
 
    if (inStart == inEnd){
        return node;
    }
 
    int splitIndex = searchInorder(inorder, inStart, inEnd, node->data);
    node->lchild = generateFromTraversal(inorder, preorder, inStart, splitIndex-1);
    node->rchild = generateFromTraversal(inorder, preorder, splitIndex+1, inEnd);
 
    return node;
}

int main(){
    char A[]={'0','A','B','C','D','E','F','G'};
    int n=8;

    BinaryTree bt(A,n);
//    bt.preorder(bt.root);
//    cout<<endl;
//    bt.inorder(bt.root);
//    cout<<endl;
    bt.postorder(bt.root);
    cout<<endl;
//    bt.ItPreorder();
//    cout<<endl;
//    bt.ItInorder();
//    cout<<endl;
    bt.ItPostorder();
    cout<<endl;
    bt.LevelOrder();
    cout<<endl;
    return 0;
}
