#include<iostream>
using namespace std;
#include<stack>
#include<vector>
stack<int>_push(int arr[],int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        if(i==0)
        st.push(arr[i]);
        else
        st.push(min(arr[i],st.top()));
    }
    return st;
}
void getminn(stack<int>st){
    while (!st.empty())
    {
      cout<<st.top();
      st.pop();  /* code */
    }
    
}
int main(){
    int arr[5]={5,1,2,3,0};
      int n = 5;

    stack<int> st = _push(arr, n);
    getminn(st);

return 0;
}