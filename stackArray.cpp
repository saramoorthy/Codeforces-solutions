#include<iostream>
using namespace std;

class Stack{
public:
    int size;
    int top;
    int *st;

public:
    Stack(){ size=0; top=-1; };
    Stack(int A[], int size);
    bool isEmpty();
    bool isFull();
    void display();
    void push(int x);
    int pop();
    int stackTop();
    int peek(int index);
};


Stack::Stack(int A[], int size){
    this->size=size;
    top=-1;
    st = new int[size];
    for(int i=0;i<size;i++){
        st[i]=A[i];
        top++;
    }
    
}

bool Stack::isEmpty(){
    if(top==-1)
        return true;
    else
        return false;
}

bool Stack::isFull(){
    if(top==size-1)
        return true;
    else
        return false;
}

void Stack::push(int x){
    if(top<size-1){
        st[++top]=x;
    }else
        cout<<"Stack overflow"<<endl;
}

int Stack::pop(){
    int x=-1;
    if(top!=-1){
        x=st[top--];
    }else{
        cout<<"Stack Underflow"<<endl;
    }
    return x;
}

int Stack::stackTop(){
    if(top>-1)
        return st[top];
    return -1;
}

int Stack::peek(int index){
    int x=-1;
    if(index<0 || index>size-1)
        cout<<"Invalid position"<<endl;
    else
        x=st[top-index+1];
    return x;
}

void Stack::display(){
    int x=top;
    while(x>-1){
        cout<<st[x--]<<" ";
    }
    cout<<endl;
}
int main(){
    
    
    int A[]={1,2,3,4,5};
    int n=5;
    Stack st(A,n);
    st.display();
    cout<<st.pop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    st.display();
    st.push(10);
    st.display();
    return 0;
}
