// Problem: Sort
// Contest: 1996
// Link: https://codeforces.com/contest/1996/problem/C
// Submission id: 376539385

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        string a, b;
        cin >> a >> b;
 
        vector<vector<int>> pa(n + 1, vector<int>(26));
        vector<vector<int>> pb(n + 1, vector<int>(26));
 
        for (int i = 1; i <= n; i++) {
            pa[i] = pa[i - 1];
            pb[i] = pb[i - 1];
            pa[i][a[i - 1] - 'a']++;
            pb[i][b[i - 1] - 'a']++;
        }
 
        while (q--) {
            int l, r;
            cin >> l >> r;
 
            int ans = 0;
 
            for (int c = 0; c < 26; c++) {
                int x = pa[r][c] - pa[l - 1][c];
                int y = pb[r][c] - pb[l - 1][c];
                if (x > y) ans += x - y;
            }
 
            cout << ans << '\n';
        }
    }
 
    return 0;
}