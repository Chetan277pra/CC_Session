// Problem: Secret Box
// Contest: 1985
// Link: https://codeforces.com/contest/1985/problem/E
// Submission id: 381847404

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y, z, k;
        cin >> x >> y >> z >> k;
        int ans = 0;
        for (int a = 1; a <= x; a++) {
            if (k % a) continue;
            int rem = k / a;
            for (int b = 1; b <= y; b++) {
                if (rem % b) continue;
                int c = rem / b;
                if (c <= z) {
                    ans = max(ans, (x - a + 1) * (y - b + 1) * (z - c + 1));
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}