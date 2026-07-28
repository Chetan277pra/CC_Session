// Problem: Prefix Sum Addicts
// Contest: 1738
// Link: https://codeforces.com/contest/1738/problem/B
// Submission id: 384660673

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> s(k);
        for (int i = 0; i < k; i++) cin >> s[i];

        if (k == 1) {
            cout << "YES\n";
            continue;
        }

        bool ok = true;
        vector<long long> d(k - 1);

        for (int i = 1; i < k; i++) {
            d[i - 1] = s[i] - s[i - 1];
        }

        for (int i = 1; i < (int)d.size(); i++) {
            if (d[i] < d[i - 1]) {
                ok = false;
                break;
            }
        }

        if (s[0] > (n - k + 1) * d[0]) ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}