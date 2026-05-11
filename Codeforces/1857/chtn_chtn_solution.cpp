// Problem: chtn
// Contest: 1857
// Submission id: 374209361

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

        int m = n * (n - 1) / 2;

        vector<long long> b(m);

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<long long> a;

        int idx = 0;

        for (int cnt = n - 1; cnt >= 1; cnt--) {
            a.push_back(b[idx]);
            idx += cnt;
        }

        a.push_back(1000000000);

        for (auto x : a) {
            cout << x << " ";
        }

        cout << '\n';
    }

    return 0;
}