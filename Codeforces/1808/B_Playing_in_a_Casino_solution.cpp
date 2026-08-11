// Problem: Playing in a Casino
// Contest: 1808
// Link: https://codeforces.com/contest/1808/problem/B
// Submission id: 386648808

#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<int>> a(n, vector<int>(m));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
 
        int ans = 0;
 
        for (int j = 0; j < m; j++) {
            vector<int> v(n);
 
            for (int i = 0; i < n; i++) {
                v[i] = a[i][j];
            }
 
            sort(v.begin(), v.end());
 
            int sum = 0;
 
            for (int i = 0; i < n; i++) {
                ans += v[i] * i - sum;
                sum += v[i];
            }
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}