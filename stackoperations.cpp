#include<iostream>
using namespace std;


class Node{
public:
    char data;
    Node *next;
};

class Stack{
    
public:
    int size;
    Node *top;
public:
    Stack(){ top=NULL;}
    bool isEmpty();
    bool isFull();
    void push(char x);
    char peek(int pos);
    char pop();
    char stackTop();
    bool balancedParenthesis(char *exp);
    int isOperand(char x);
    int precedence(char x);
    char * infixToPostfix(char *infix);
};

bool Stack::isEmpty(){
    if(top==NULL)
        return true;
    return false;
}

bool Stack::isFull(){
    Node *t= new Node;
    if(t==NULL)
        return true;
    return false;
    
}

void Stack::push(char x){
    Node *temp = new Node;
    
    if(temp==NULL){
        cout<<"Stack overflow"<<endl;
    }else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}

char Stack::pop(){
    char x=-1;
    Node *p=new Node;
    if(top==NULL)
        cout<<"Stack is Empty"<<endl;
    else{
        p=top;
        top=top->next;
        x=p->data;
    }
    
    delete p;
    p=NULL;
    return x;
}

char Stack::peek(int pos){
    int x=-1;
    Node *p=top;
    if(top==NULL)
        cout<<"Stack empty";
    else{
        int i=0;
        while(i++<pos-1 && p){
            p=p->next;
        }
        if(p)
            x=p->data;
    }
    
    return x;
}

char Stack::stackTop(){
    char x=-1;
    if(top==NULL)
        cout<<"Stack empty"<<endl;
    else{
        x=top->data;
    }
    return x;
}

bool Stack::balancedParenthesis(char *exp){
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
        }else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(top==NULL)
                return 0;
            char x= pop();
            if((x=='(' && exp[i]==')') || (x=='{' && exp[i]=='}') || (x=='[' && exp[i]==']'))
                continue;
            else
                return 0;
        }
    }
    
    if(top==NULL)
        return 1;
    else
        return 0;
    
}

int Stack::isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int Stack::precedence(char x){
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

char * Stack::infixToPostfix(char *infix){
    char *postfix = new char[strlen(infix)+2];
   
    int j=0;
    int i=0;
    while(infix[i]!='\0'){
        if(isOperand(infix[i]))
            postfix[j++]=infix[i++];
        else{
            if(top==NULL || precedence(infix[i])>precedence(top->data))
                push(infix[i++]);
            else
                postfix[j++]=pop();
        }
    }
    
    while(top!=NULL)
        postfix[j++]=pop();
    
    postfix[j++]='\0';
    
    return postfix;
}

int main(){
    
    
    Stack st;
    //cout<<st.balancedParenthesis("{(a+b}+c)")<<endl;
    st.push('#');
    char * ans = st.infixToPostfix("a+b*c-d/e");
    
    for(int i=0;i<strlen(ans);i++)
        cout<<ans[i];
    cout<<endl;
    return 0;
}
