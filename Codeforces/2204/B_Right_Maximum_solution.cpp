// Problem: Right Maximum
// Contest: 2204
// Link: https://codeforces.com/contest/2204/problem/B
// Submission id: 366984344

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
      for(auto & a : vec) cin >> a;
      int ans = 0;
      int maxi = 0;
      for(auto a : vec){
        // cout<<a<<" "<<maxi<<endl;
        if(a >= maxi){
          ans++;
          maxi = a;
        }
      }
      cout<<ans<<"\n";
    }
    return 0;
}