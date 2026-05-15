// Problem: Make It Ugly
// Contest: 1954
// Link: https://codeforces.com/contest/1954/problem/B
// Submission id: 374634620

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

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int x = a[0];
        bool same = true;

        for (int i = 0; i < n; i++) {
            if (a[i] != x) {
                same = false;
            }
        }

        if (same) {
            cout << -1 << '\n';
            continue;
        }

        int ans = 1e9;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                cnt++;
            } else {
                ans = min(ans, cnt);
                cnt = 0;
            }
        }

        ans = min(ans, cnt);

        cout << ans << '\n';
    }

    return 0;
}