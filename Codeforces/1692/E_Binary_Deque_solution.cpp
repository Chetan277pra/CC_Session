// Problem: Binary Deque
// Contest: 1692
// Link: https://codeforces.com/contest/1692/problem/E
// Submission id: 375365162

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);

        int total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        if (total < s) {
            cout << -1 << '\n';
            continue;
        }

        if (total == s) {
            cout << 0 << '\n';
            continue;
        }

        int l = 0, sum = 0, mx = 0;

        for (int r = 0; r < n; r++) {
            sum += a[r];

            while (sum > s) {
                sum -= a[l];
                l++;
            }

            if (sum == s) {
                mx = max(mx, r - l + 1);
            }
        }

        cout << n - mx << '\n';
    }

    return 0;
}