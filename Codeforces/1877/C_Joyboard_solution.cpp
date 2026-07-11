// Problem: Joyboard
// Contest: 1877
// Link: https://codeforces.com/contest/1877/problem/C
// Submission id: 382128740

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (k == 1) {
            cout << 1 << '\n';
        } else if (k == 2) {
            cout << min(m, n - 1) + m / n << '\n';
        } else if (k == 3) {
            cout << max(0LL, m - n + 1) - m / n << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}