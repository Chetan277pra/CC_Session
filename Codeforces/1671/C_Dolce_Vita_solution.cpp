// Problem: Dolce Vita
// Contest: 1671
// Link: https://codeforces.com/contest/1671/problem/C
// Submission id: 389382866

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);

        for (auto &a : vec)
            cin >> a;

        sort(vec.begin(), vec.end());

        int tot = 0;
        int prefix = 0;

        for (int i = 0; i < n; i++) {
            prefix += vec[i];

            if (prefix > k)
                break;

            int days = (k - prefix) / (i + 1) + 1;
            tot += days;
        }

        cout << tot << '\n';
    }

    return 0;
}