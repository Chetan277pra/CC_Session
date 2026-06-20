// Problem: Differential Sorting
// Contest: 1635
// Link: https://codeforces.com/contest/1635/problem/C
// Submission id: 379625765

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << 0 << '\n';
            continue;
        }

        if (a[n - 2] > a[n - 1] || a[n - 1] < 0 ) {
            cout << -1 << '\n';
            continue;
        }

        cout << n - 2 << '\n';
        for (int i = 1; i <= n - 2; i++) {
            cout << i << ' ' << n - 1 << ' ' << n << '\n';
        }
    }

    return 0;
}