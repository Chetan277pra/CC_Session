// Problem: Mirror Grid
// Contest: 1703
// Link: https://codeforces.com/contest/1703/problem/E
// Submission id: 384544849

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];
 
        vector<vector<int>> v(n, vector<int>(n, 0));
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j]) continue;
 
                set<pair<int, int>> st;
 
                st.insert({i, j});
                st.insert({j, n - 1 - i});
                st.insert({n - 1 - i, n - 1 - j});
                st.insert({n - 1 - j, i});
 
                int c = 0;
 
                for (auto [x, y] : st) {
                    v[x][y] = 1;
                    c += g[x][y] - '0';
                }
 
                ans += min(c, (int)st.size() - c);
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}