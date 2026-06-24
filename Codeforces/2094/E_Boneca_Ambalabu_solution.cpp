// Problem: Boneca Ambalabu
// Contest: 2094
// Link: https://codeforces.com/contest/2094/problem/E
// Submission id: 380044494

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
        vector<int> cnt(30, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int b = 0; b < 30; b++) {
                if (a[i] & (1 << b)) cnt[b]++;
            }
        }

        long long ans = 0;

        for (int x : a) {
            long long cur = 0;

            for (int b = 0; b < 30; b++) {
                if (x & (1 << b))
                    cur += 1LL * (n - cnt[b]) * (1LL << b);
                else
                    cur += 1LL * cnt[b] * (1LL << b);
            }

            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}