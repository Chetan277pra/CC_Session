// Problem: Weird Sum
// Contest: 1648
// Link: https://codeforces.com/contest/1648/problem/A
// Submission id: 366403450

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(vector<int> vec){
  ll pref = 0;
  ll ans = 0;
  int n = vec.size();
  for(int i = 0; i < n; i++){
    ans += 1ll*i*vec[i] - pref;
    pref += vec[i];
  }
  return ans;
}
int main(){
  int n , m ;
  cin >> n >> m;
  vector<vector<int>> vec;
  map<int,vector<int>> x;
  map<int,vector<int>> y;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       int temp;
       cin >> temp;
       x[temp].push_back(i);
       y[temp].push_back(j);
    }
  }
  ll ans = 0;
  for(auto &a : x)
    sort(a.second.begin() , a.second.end());
  
  for(auto &a : y)
  sort(a.second.begin() , a.second.end());
  
  for(auto a : x){
    ans += cal(a.second);
  }
  
  for(auto a : y){
    ans += cal(a.second);
  }
  
  cout<<ans;
  return 0;
}









