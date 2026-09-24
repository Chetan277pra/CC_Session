// Problem: chtn
// Contest: 2170
// Submission id: 391876690

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s = 0, c = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s += x;
            if (x) c++;
        }

        cout << min(c, s - n + 1) << '\n';
    }

    return 0;
}