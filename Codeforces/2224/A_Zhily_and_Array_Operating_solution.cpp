// Problem: Zhily and Array Operating
// Contest: 2224
// Link: https://codeforces.com/contest/2224/problem/A
// Submission id: 373741445

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        for(int i = n-2; i >= 0; i--){
            if(vec[i+1] > 0) vec[i] += vec[i+1];
        }
        int ans = 0;
        for(auto a : vec) if(a > 0) ans++;
        cout<<ans<<'\n';
    }
    return 0;
}