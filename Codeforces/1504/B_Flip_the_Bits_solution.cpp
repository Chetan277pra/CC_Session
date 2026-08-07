// Problem: Flip the Bits
// Contest: 1504
// Link: https://codeforces.com/contest/1504/problem/B
// Submission id: 386126898

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    vector<int> balanced(n);

    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '0')
            cnt0++;
        else
            cnt1++;

        if (cnt0 == cnt1)
            balanced[i] = 1;
    }

    bool flip = false;

    for (int i = n - 1; i >= 0; i--) {
        char cur = a[i];

        if (flip)
            cur = (cur == '0' ? '1' : '0');

        if (cur == b[i])
            continue;

        if (!balanced[i]) {
            cout << "NO\n";
            return;
        }

        flip = !flip;
    }

    cout << "YES\n";
}

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}