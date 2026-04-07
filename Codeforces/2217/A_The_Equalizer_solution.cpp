// Problem: The Equalizer
// Contest: 2217
// Link: https://codeforces.com/contest/2217/problem/A
// Submission id: 370188373

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while(tt--){
      int n, k;
      cin >> n >> k;
      vector<int> vec(n);
      for(auto &a : vec) cin >> a;
      int tot = accumulate(vec.begin() , vec.end() , 0);
      if( tot%2 == 1  or (n*k) % 2 == 0 ){
        cout<<"YES\n";
      }
      else{
        cout<< "NO\n";
      }
    }
    return 0;
}