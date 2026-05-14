// Problem: All Pairs Segments
// Contest: 2019
// Link: https://codeforces.com/contest/2019/problem/B
// Submission id: 374532798

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> x(n);

        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        map<ll, ll> mp;

        for (int i = 0; i < n; i++) {
            ll cnt = 1LL * (i + 1) * (n - i) - 1;
            mp[cnt]++;
        }

        for (int i = 0; i < n - 1; i++) {
            ll gap = x[i + 1] - x[i] - 1;

            if (gap > 0) {
                ll cnt = 1LL * (i + 1) * (n - i - 1);
                mp[cnt] += gap;
            }
        }

        while (q--) {
            ll k;
            cin >> k;
            cout << mp[k] << ' ';
        }

        cout << '\n';
    }

    return 0;
}