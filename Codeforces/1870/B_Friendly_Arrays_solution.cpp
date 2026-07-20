// Problem: Friendly Arrays
// Contest: 1870
// Link: https://codeforces.com/contest/1870/problem/B
// Submission id: 383614926

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int xr = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            xr ^= x;
        }

        int bor = 0;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            bor |= x;
        }

        if (n % 2 == 0) {
            cout << (xr & (~bor)) << " " << xr << "\n";
        } else {
            cout << xr << " " << (xr | bor) << "\n";
        }
    }

    return 0;
}