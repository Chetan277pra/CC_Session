// Problem: Forming Triangles
// Contest: 1922
// Link: https://codeforces.com/contest/1922/problem/B
// Submission id: 379035401

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll c2(ll x) {
    return x * (x - 1) / 2;
}

ll c3(ll x) {
    return x * (x - 1) * (x - 2) / 6;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<ll> f(n + 1);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            f[x]++;
        }

        ll ans = 0, pre = 0;

        for (int i = 0; i <= n; i++) {
            ans += c3(f[i]);
            ans += c2(f[i]) * pre;
            pre += f[i];
        }

        cout << ans << '\n';
    }

    return 0;
}