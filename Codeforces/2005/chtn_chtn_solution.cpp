// Problem: chtn
// Contest: 2005
// Submission id: 389471201

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> b(m);

        for (int &x : b)
            cin >> x;

        sort(b.begin(), b.end());

        while (q--) {
            int x;
            cin >> x;

            int pos = lower_bound(b.begin(), b.end(), x) - b.begin();

            if (pos == 0) {
                cout << b[0] - 1 << '\n';
            }
            else if (pos == m) {
                cout << n - b[m - 1] << '\n';
            }
            else {
                cout << (b[pos] - b[pos - 1]) / 2 << '\n';
            }
        }
    }

    return 0;
}