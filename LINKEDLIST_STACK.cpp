#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;

    }
};
class stack{
    node*top;
    int size;
    public:
    stack(){
        top=NULL;
        size=0;

    }
    void push(int value){
        node*temp=new node(value);
        temp->next=top;
        top=temp;
        size++;
        cout<<"successfully pushed"<<value<<endl;

    }

void pop(){
    if(top==NULL){
        cout<<"stack underflow"<<endl;
        return;


    }
    else{
        node*temp=top;
        top=top->next;
        delete temp;
        size--;
        cout<<"successfully popped"<<endl;
        return;

    }

}
int peek(){
    if(top==NULL){
        cout<<"stack is empty"<<endl;
        return -1;

    }
    else{
        return top->data;

    }
}
bool isempty(){
    return top==NULL;
}
int issize(){
    return size;
}
};
int main(){
    stack s;
    s.push(3);
    s.push(50);
    s.push(20);
    s.push(10);
    s.push(20);
    s.pop();
    cout<<"top element is"<<s.peek()<<endl;
    cout<<"is stack empty"<<s.isempty()<<endl;
    cout<<"size"<<s.issize()<<endl;

return 0;
}