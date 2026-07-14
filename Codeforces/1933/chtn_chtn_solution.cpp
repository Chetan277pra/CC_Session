// Problem: chtn
// Contest: 1933
// Submission id: 382557992

#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        int mn = LLONG_MAX;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
 
        int cnt = 0;
        for (int x : a)
            if (x == mn)
                cnt++;
 
        if (cnt == 1) {
            cout << "YES\n";
        } else {
            bool ok = false;
            for (int x : a) {
                if (x % mn != 0) {
                    ok = true;
                    break;
                }
            }
            cout << (ok ? "YES\n" : "NO\n");
        }
    }
 
    return 0;
}