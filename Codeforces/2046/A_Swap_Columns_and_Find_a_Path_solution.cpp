// Problem: Swap Columns and Find a Path
// Contest: 2046
// Link: https://codeforces.com/contest/2046/problem/A
// Submission id: 374413272

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

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long ans = 0;
        long long extra = -1e18;

        for (int i = 0; i < n; i++) {
            ans += max(a[i], b[i]);
            extra = max(extra, min(a[i], b[i]));
        }

        cout << ans + extra << '\n';
    }

    return 0;
}