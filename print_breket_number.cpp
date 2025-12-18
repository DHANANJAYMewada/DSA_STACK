#include<iostream>
using namespace std;
#include<vector>
#include<stack>
class solution{
    public:


vector<int>breket(string str){
    int count=0;
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<str .size();i++){
        if(str[i]=='('){
            count++;
            st.push(count);
            ans.push_back(count);

        }
        else if(str[i]==')'){
            ans.push_back(st.top());
st.pop();
        }
       
    }
     return ans;
}
};
int main(){
    solution s;
       vector<int> res = s.breket("(())");

    for(int x : res){
        cout << x << " ";
    }




return 0;
}