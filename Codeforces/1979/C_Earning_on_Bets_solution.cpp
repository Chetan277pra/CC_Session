// Problem: Earning on Bets
// Contest: 1979
// Link: https://codeforces.com/contest/1979/problem/C
// Submission id: 375470338

#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int64> k(n);
        for (int i = 0; i < n; i++) cin >> k[i];

        int64 l = 1;

        for (int i = 0; i < n; i++) {
            l = l / gcd(l, k[i]) * k[i];
        }

        vector<int64> ans(n);
        int64 sum = 0;

        for (int i = 0; i < n; i++) {
            ans[i] = l / k[i];
            sum += ans[i];
        }

        if (sum >= l) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}