// Problem: Rae Taylor and Trees (easy version)
// Contest: 2171
// Link: https://codeforces.com/contest/2171/problem/D
// Submission id: 372271913

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), pre(n), suf(n);
        for (int i = 0; i < n; i++) cin >> p[i];
 
        pre[0] = p[0];
        for (int i = 1; i < n; i++) pre[i] = min(pre[i-1], p[i]);
 
        suf[n-1] = p[n-1];
        for (int i = n-2; i >= 0; i--) suf[i] = max(suf[i+1], p[i]);
 
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (pre[i-1] > suf[i]) {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "Yes\n" : "No\n");
    }
}