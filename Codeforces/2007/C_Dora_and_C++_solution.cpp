// Problem: Dora and C++
// Contest: 2007
// Link: https://codeforces.com/contest/2007/problem/C
// Submission id: 380931059

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, a, b;
        cin >> n >> a >> b;
        int g = gcd(a, b);
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            cin >> r[i];
            r[i] %= g;
        }
        sort(r.begin(), r.end());
        int ans = r.back() - r.front();
        for (int i = 1; i < n; i++) {
            ans = min(ans, g - (r[i] - r[i - 1]));
        }

        cout << ans << '\n';
    }

    return 0;
}