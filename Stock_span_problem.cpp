#include<iostream>
using namespace std;
#include<vector>
#include<stack>

int main(){
    stack<int>st;
    int n=5;
    int arr[]={3,2,6,7,5};
    vector<int>ans(n);

    for(int i=n-1;i>0;i--){
        while (!st.empty() && arr[i]>arr[st.top()])
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        ans[st.top()] = st.top() + 1;
        st.pop();
    }

  
for(int i = 0; i < n; i++){
    cout << ans[i] << " ";
}

    return 0;
}