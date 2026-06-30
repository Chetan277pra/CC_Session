// Problem: Friends and the Restaurant
// Contest: 1729
// Link: https://codeforces.com/contest/1729/problem/D
// Submission id: 380828496

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> x(n), y(n), d(n);

        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < n; i++) cin >> y[i];

        for (int i = 0; i < n; i++) d[i] = y[i] - x[i];

        sort(d.begin(), d.end());

        int i = 0, j = n - 1, ans = 0;

        while (i < j) {
            if (d[i] + d[j] >= 0) {
                ans++;
                i++;
                j--;
            } else {
                i++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}