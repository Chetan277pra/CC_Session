// Problem: Nikita and Books
// Contest: 2244
// Link: https://codeforces.com/contest/2244/problem/B
// Submission id: 383190676

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long prev = 0;
        long long extra = 0;
        bool ok = true;

        for (int i = 0; i < n - 1; i++) {
            long long cur = a[i] + extra;
            long long need = prev + 1;

            if (cur < need) {
                ok = false;
                break;
            }

            extra = cur - need;
            prev = need;
        }

        if (ok) {
            long long last = a[n - 1] + extra;
            if (last > prev)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
}