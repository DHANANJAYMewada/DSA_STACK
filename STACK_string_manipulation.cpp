  #include<iostream>
  using namespace std;
  #include<vector>
  #include<stack>
  int save(vector<string>v){
    stack<string>s;
    for(int i=0;i<v.size();i++)
{
    if(s.empty())
    s.push(v[i]);
    else if(s.top()==v[i])
    s.pop();
    else
    s.push(v[i]);
     };
    return s.size();
} 

  int main(){
   vector<string>v= {"a", "b", "b", "c", "c", "a"};
   int result=save(v);
       cout << result;
  return 0;
  }