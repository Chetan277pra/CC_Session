// Problem: The 67th XOR Problem
// Contest: 2218
// Link: https://codeforces.com/contest/2218/problem/E
// Submission id: 369753018

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        int ans = 0;
        for(auto& a : vec ) cin >> a;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++)
            ans = max(ans , vec[i]^vec[j]  );
        }
        cout<<ans<<"\n";
    }
  return 0;
}