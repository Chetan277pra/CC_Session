// Problem: chtn
// Contest: 2000
// Submission id: 374122761

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        string s;
        cin >> s;

        int l = 0, r = n - 1;
        ll ans = 0;

        while (l < r) {
            while (l < n && s[l] != 'L')
                l++;

            while (r >= 0 && s[r] != 'R')
                r--;

            if (l < r) {
                ans += pref[r + 1] - pref[l];
                l++;
                r--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}