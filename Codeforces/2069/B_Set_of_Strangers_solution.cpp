// Problem: Set of Strangers
// Contest: 2069
// Link: https://codeforces.com/contest/2069/problem/B
// Submission id: 391432042

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<int> cost(n * m + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                cost[a[i][j]] = 1;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + 1 < n && a[i][j] == a[i + 1][j])
                    cost[a[i][j]] = 2;

                if (j + 1 < m && a[i][j] == a[i][j + 1])
                    cost[a[i][j]] = 2;
            }
        }

        int total = 0, mx = 0;

        for (int c = 1; c <= n * m; c++) {
            total += cost[c];
            mx = max(mx, cost[c]);
        }

        cout << total - mx << '\n';
    }

    return 0;
}