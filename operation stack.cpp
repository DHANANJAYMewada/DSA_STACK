#include<iostream>
using namespace std;
class stack{
    int *arr;
    int top;
    int size;
    public:
    stack(int s){
        size=s;
        arr=new int (size);
        top=-1;

    }
    void push(int vlaue){
        if(top==size-1){
            cout<<"stck overflow"<<endl;
            return;

        }
        else{
            top++;
            arr[top]=vlaue;
            cout<<"successfully pushed"<<vlaue<<endl;

        }

    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;


        }
        else{
            top--;
            cout<<"successfully popped"<<endl;
            return;
        }

    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top==-1;
    }
    bool issize(){
        return size;
    }
};
int main(){
    stack  s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    cout<<"top element is "<<s.peek()<<endl;
    cout<<"is stack empty "<<s.isEmpty()<<endl;


return 0;
}