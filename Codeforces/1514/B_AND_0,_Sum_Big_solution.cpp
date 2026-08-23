// Problem: AND 0, Sum Big
// Contest: 1514
// Link: https://codeforces.com/contest/1514/problem/B
// Submission id: 388161771

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll MOD = 1e9 + 7;
 
ll power(ll a, ll b) {
    ll ans = 1;
 
    while (b > 0) {
        if (b & 1)
            ans = ans * a % MOD;
 
        a = a * a % MOD;
        b >>= 1;
    }
 
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll n, k;
        cin >> n >> k;
 
        cout << power(n, k) << '\n';
    }
 
    return 0;
}