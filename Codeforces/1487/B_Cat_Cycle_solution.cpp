// Problem: Cat Cycle
// Contest: 1487
// Link: https://codeforces.com/contest/1487/problem/B
// Submission id: 386240082

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n % 2 == 0) {
            cout << (k - 1) % n + 1 << '\n';
        } else {
            int extra = (k - 1) / (n / 2);
            cout << (k + extra - 1) % n + 1 << '\n';
        }
    }

    return 0;
}