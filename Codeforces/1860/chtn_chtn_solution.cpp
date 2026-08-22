// Problem: chtn
// Contest: 1860
// Submission id: 388025071

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int m, k, a, b;
        cin >> m >> k >> a >> b;

        int x = min(b, m / k);
        m -= x * k;

        m = max(0LL, m - a);

        int q = m / k;
        int r = m % k;

        int ans;

        if (r == 0) {
            ans = q;
        }
        else if (a < k - r) {
            ans = q + r;
        }
        else {
            ans = q + 1;
        }

        cout << ans << '\n';
    }
}