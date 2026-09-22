// Problem: zeyd1234
// Contest: 2266
// Submission id: 391526021

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug cout << "Debug\n"

/*
      ---===ASCII help===---
     '0' -> 48     '9' -> 57
     'A' -> 65     'Z' -> 90
     'a' -> 97     'z' -> 122
*/

inline void USACO(string filename) {
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
}

const ll mod = 1e9 + 7;
const ll inf = 1e18;

vector<ll> spf(200001);

void sieve() {
    for (int i = 1; i < 200001; i++) spf[i] = i;
    for (int i = 2; i * i < 200001; i++) {
        if (spf[i] != i) continue;
        for (int j = i * i; j < 200001; j += i) if (spf[j] == j) spf[j] = i;
    }
}

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> arr(n);
    for (ll& x : arr) cin >> x;
    vector<ll> dp(n + 1, 0);
    for (ll x = k + 1; x <= n; x++) {
        ll mn = -1, temp = x;
        while (temp > 1) {
            ll p = spf[temp], curr = 1 + p * dp[x / p];
            if (mn == -1 || curr < mn) mn = curr;
            while (temp % p == 0) temp /= p;
        }
        dp[x] = mn;
    }
    ll ans = 0;
    for (ll x : arr) ans += dp[x];
    cout << ans << "\n";
}

int main() {
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}

