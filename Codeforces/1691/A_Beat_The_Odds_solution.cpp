// Problem: Beat The Odds
// Contest: 1691
// Link: https://codeforces.com/contest/1691/problem/A
// Submission id: 370667656

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
      int n;
      cin >> n;
      vector<int> vec(n);
      for(auto& a: vec) cin >> a;
      int odd = 0, even  = 0;
      for(auto a : vec) 
      if(a%2) odd++;
      else even++;
      cout<<min(odd , even)<<"\n";
    }
    return 0;
}