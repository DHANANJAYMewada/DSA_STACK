#include<iostream>
using namespace std;
#include<stack>
string process(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            if(!st.empty())
            st.pop();
        }
        else{
            st.push(s[i]);

        }
    }

    string ans="";
    while (!st.empty())
    {
        ans=st.top()+ans;
        st.pop();
        /* code */
       
    }
     return ans;
}
    bool backspace(string s,string t){
        return process(s)==process(t);
    }
    

int main(){
    string s=process("ab#cd");
cout<<s;

return 0;
}