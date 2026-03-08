// Problem: Equalize
// Contest: 1928
// Link: https://codeforces.com/contest/1928/problem/B
// Submission id: 365911855

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        ll n;
        cin >> n;
 
        vector<ll> v(n);
        for(ll &x : v) cin >> x;
 
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
 
        ll l = 0, ans = 0;
 
        for(ll r = 0; r < v.size(); r++){
            while(v[r] - v[l] > n - 1) l++;
            ans = max(ans, r - l + 1);
        }
 
        cout << ans << "\n";
    }
}