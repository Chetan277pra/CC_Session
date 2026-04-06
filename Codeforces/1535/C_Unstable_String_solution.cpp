// Problem: Unstable String
// Contest: 1535
// Link: https://codeforces.com/contest/1535/problem/C
// Submission id: 370013533

#include <bits/stdc++.h>
using namespace std;
 
/* -------------------- FAST IO -------------------- */
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
 
/* -------------------- TYPES -------------------- */
typedef long long ll;
typedef long double ld;
 
/* -------------------- MACROS -------------------- */
#define endl '\n'
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
#define lb lower_bound
#define ub upper_bound
 
#define maxe(v) *max_element(all(v))
#define mine(v) *min_element(all(v))
 
/* -------------------- VECTORS -------------------- */
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vs vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
 
/* -------------------- CONSTANTS -------------------- */
const ll INF = 1e18;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
 
/* -------------------- DEBUG -------------------- */
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif
 
/* -------------------- PBDS -------------------- */
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;
 
/* -------------------- UTILITY -------------------- */
 
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
 
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
 
ll power(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
ll modInverse(ll a, ll mod = MOD) {
    return power(a, mod - 2, mod);
}
 
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
 
        int n = s.size();
        int len0 = 0, len1 = 0;
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            // expected characters
            char c0 = (i % 2 == 0 ? '0' : '1');
            char c1 = (i % 2 == 0 ? '1' : '0');
 
            if (s[i] == c0 || s[i] == '?') len0++;
            else len0 = 0;
 
            if (s[i] == c1 || s[i] == '?') len1++;
            else len1 = 0;
 
            ans += max(len0, len1);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}