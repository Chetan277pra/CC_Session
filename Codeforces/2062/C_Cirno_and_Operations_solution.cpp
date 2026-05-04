// Problem: Cirno and Operations
// Contest: 2062
// Link: https://codeforces.com/contest/2062/problem/C
// Submission id: 373527870

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
 
        int ans = accumulate(a.begin(), a.end(), 0LL);
 
        while (a.size() > 1) {
            int m = a.size();
 
            vector<int> b(m - 1);
            for (int i = 0; i < m - 1; i++)
                b[i] = a[i + 1] - a[i];
 
            vector<int> ra = a;
            reverse(ra.begin(), ra.end());
 
            vector<int> rb(m - 1);
            for (int i = 0; i < m - 1; i++)
                rb[i] = ra[i + 1] - ra[i];
 
            int s1 = accumulate(b.begin(), b.end(), 0LL);
            int s2 = accumulate(rb.begin(), rb.end(), 0LL);
 
            if (s2 > s1) a = rb;
            else a = b;
 
            ans = max(ans, max(s1, s2));
        }
 
        cout << ans << '\n';
    }
}