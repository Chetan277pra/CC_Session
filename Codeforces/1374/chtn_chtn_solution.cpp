// Problem: chtn
// Contest: 1374
// Submission id: 372877723

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n , k;
        cin >> n >> k;
        vector<int> vec(n);
        for(auto & a : vec ) cin >> a;
        vector<int> ms;
        map<int , int> mpp;
        for(auto a : vec) if(a%k != 0) mpp[k - (a%k)]++;
        int ans = 0;
        for(auto a : mpp){
        int rem = a.first;
        int freq = a.second;
        int curr =  k * (freq - 1) + rem + 1;
        ans = max(ans, curr);
    }

        cout << ans << "\n";

    }
    return 0;
}