// Problem: Vika and the Bridge
// Contest: 1848
// Link: https://codeforces.com/contest/1848/problem/B
// Submission id: 385011716

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> pos(k + 1);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            pos[x].push_back(i);
        }

        int ans = INT_MAX;

        for (int c = 1; c <= k; c++) {
            int mx1 = 0, mx2 = 0;
            int last = 0;

            for (int p : pos[c]) {
                int gap = p - last - 1;

                if (gap >= mx1) {
                    mx2 = mx1;
                    mx1 = gap;
                } else if (gap > mx2) {
                    mx2 = gap;
                }

                last = p;
            }

            int gap = n - last;

            if (gap >= mx1) {
                mx2 = mx1;
                mx1 = gap;
            } else if (gap > mx2) {
                mx2 = gap;
            }

            ans = min(ans, max(mx2, mx1 / 2));
        }

        cout << ans << '\n';
    }

    return 0;
}