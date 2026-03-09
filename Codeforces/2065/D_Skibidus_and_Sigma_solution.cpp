// Problem: Skibidus and Sigma
// Contest: 2065
// Link: https://codeforces.com/contest/2065/problem/D
// Submission id: 365948408

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool custom(vector<int> a, vector<int> b){
  ll aa = 0, bb = 0;
  int n = a.size();
  aa = accumulate(a.begin() , a.end() , 0);
  bb = accumulate(b.begin() , b.end() , 0);
  bool pahla = false;
  for(int i = 0; i < n; i++) if(a[i] > b[i]) pahla = true;
  if(aa == bb) return pahla;
  // cout<<aa<<" "<<bb<<endl;
  return aa > bb;
}


int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
      int n , m;
      cin >> n >> m;
      vector<vector<int>> vec(n , vector<int>(m));
      for(auto & a : vec)
        for(auto & b : a) cin>>b;
      
      sort(vec.begin() , vec.end() , custom);
      vector<int> ans;
      for(auto a : vec){
        for(auto b : a) ans.push_back(b);
      }
      ll aa = 0;
      for(ll i = 0; i < n*m; i++) aa += (n*m -i)*ans[i];
      cout<<aa<<"\n";
    }
    return 0;
}