// Problem: Passing the Ball
// Contest: 2204
// Link: https://codeforces.com/contest/2204/problem/A
// Submission id: 366978806

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int ans = 0;
      for(auto a : s){
        ans++;
        if(a == 'L') break;
      }
      cout<<ans<<"\n";
    }
    return 0;
}