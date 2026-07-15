// Problem: Swap Game
// Contest: 1747
// Link: https://codeforces.com/contest/1747/problem/C
// Submission id: 382784620

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
        long long mn = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        if (a[0] == mn)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }

    return 0;
}