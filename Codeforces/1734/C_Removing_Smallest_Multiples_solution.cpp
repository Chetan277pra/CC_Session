// Problem: Removing Smallest Multiples
// Contest: 1734
// Link: https://codeforces.com/contest/1734/problem/C
// Submission id: 379269864

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin >> tt;
 
    while (tt--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
        s = " " + s;
 
        vector<int> vis(n + 1);
 
        long long ans = 0;
 
        for (int k = 1; k <= n; k++) {
            for (int x = k; x <= n; x += k) {
                if (s[x] == '1') break;
                if (!vis[x]) {
                    vis[x] = 1;
                    ans += k;
                }
            }
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}