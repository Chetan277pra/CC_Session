// Problem: Split
// Contest: 2158
// Link: https://codeforces.com/contest/2158/problem/B
// Submission id: 390124522

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

        vector<int> cnt(2 * n + 1);

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int odd = 0, even = 0;

        for (int x = 1; x <= 2 * n; x++) {
            if (cnt[x] == 0) continue;

            if (cnt[x] & 1)
                odd++;
            else
                even++;
        }

        int ans;

        if (odd > 0) {
            ans = odd + 2 * even;
        } else {
            int k = even;
            if ((k & 1) != (n & 1))
                k--;
            ans = 2 * k;
        }

        cout << ans << '\n';
    }

    return 0;
}