#include<iostream>
using namespace std;
#include<stack>
bool check(string str){
stack<char>st;
for(int i=0;i<str.size();i++){
if(str[i]=='('){
    st.push(str[i]);
}
else{
    if(st.empty())
    return 0;
    else
    st.pop();
}


}
return st.empty();
}
int main(){
    string str="(()))";
    cout<<check(str)<<endl;


return 0;
}