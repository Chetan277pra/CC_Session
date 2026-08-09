// Problem: Easy Scheduling
// Contest: 1578
// Link: https://codeforces.com/contest/1578/problem/E
// Submission id: 386393563

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int h, p;
        cin >> h >> p;

        int total = (1LL << h) - 1;
        int ready = 1;
        int ans = 0;

        while (ready < total) {
            int take = min(ready, p);
            total -= take;
            ready *= 2;
            ans++;
        }

        ans += (total + p - 1) / p;

        cout << ans << '\n';
    }

    return 0;
}