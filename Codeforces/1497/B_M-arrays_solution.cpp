// Problem: M-arrays
// Contest: 1497
// Link: https://codeforces.com/contest/1497/problem/B
// Submission id: 386803847

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> cnt(m, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x % m]++;
        }

        int ans = 0;

        if (cnt[0] > 0)
            ans++;

        for (int r = 1; r <= m / 2; r++) {
            int x = cnt[r];
            int y = cnt[m - r];

            if (r == m - r) {
                if (x > 0)
                    ans++;
            } 
            else if (x == 0 && y == 0) {
                continue;
            } 
            else if (x == 0 || y == 0) {
                ans += max(x, y);
            } 
            else {
                ans += 1 + max(0, abs(x - y) - 1);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}