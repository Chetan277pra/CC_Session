// Problem: The 67th Tree Problem
// Contest: 2218
// Link: https://codeforces.com/contest/2218/problem/F
// Submission id: 369891487

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
      
      int even , odd;
      cin >> even >> odd;

      int n = even + odd;

      if((even == 0 && n % 2 == 0) || (n/2 < even)){
        cout<<"NO\n";
        continue;
      }

      cout<<"YES\n";

      int d = odd - even;
      int mm = 2*even + (d % 2);

      for(int i = 2; i <= mm; i++){
        cout<<i-1<<" "<<i<<"\n";
      }

      for(int i = mm + 1; i <= n; i++){
        cout<<mm<<" "<<i<<"\n";
      }
    }
    return 0;
}