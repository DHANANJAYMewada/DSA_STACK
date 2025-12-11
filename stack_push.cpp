#include<iostream>
using namespace std;
class stack{
    int*arr;
    int top;
    int size;
    public:
    stack(int s){
        size=s;
        arr=new int [size];
        top=-1;

    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;


        }
        else{
            top++;
            arr[top]=value;

        }

    }
};
int main(){
  stack s(5);
  s.push(10);
  s.push(20);
  s.push(20);

  s.push(20);
  s.push(20);
cout<<"successfully pushed "<<endl;
 



    


return 0;
}