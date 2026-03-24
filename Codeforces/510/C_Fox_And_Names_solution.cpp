// Problem: Fox And Names
// Contest: 510
// Link: https://codeforces.com/contest/510/problem/C
// Submission id: 368021964

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<string> vec(n);
  for(auto & a : vec) cin >> a;
  vector<vector<int>> adj(26);
  vector<int> inorder(26,0);
  for(int i = 0; i < n-1; i++){
    string a = vec[i];
    string b = vec[i+1];
    bool alag = false;
    int len = min(a.length() , b.length());
    for(int j = 0; j < len; j++){
      if(a[j] != b[j]){
        alag = true;
        adj[a[j]-'a'].push_back(b[j]-'a');
        inorder[b[j]-'a']++;
        break;
      }
    }
    if(!alag and a.length() > b.length()){
      cout<<"Impossible";
      return 0;
    }
  }
    // topo sort
    vector<int> total;
    queue<int> q;
    for(int i = 0; i < 26; i++) {
      if(inorder[i] == 0) {
        q.push(i); 
        total.push_back(i);
      } 
    }
    while(!q.empty()){
      int temp = q.front();
      q.pop();
      for(auto a : adj[temp]){
        if((--inorder[a]) == 0 ){
          total.push_back(a);
          q.push(a);
        }
      }
    }
    if(total.size() != 26) {
      cout<<"Impossible";
    }
    else {
      for(auto a : total) cout<<char(a+'a');
    }
  return 0;
}
