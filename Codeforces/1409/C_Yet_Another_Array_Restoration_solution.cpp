// Problem: Yet Another Array Restoration
// Contest: 1409
// Link: https://codeforces.com/contest/1409/problem/C
// Submission id: 392234769

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
 
        int ans = 1e9, d0 = -1;
 
        for (int d = 1; d <= y - x; ++d) {
            if ((y - x) % d == 0) {
                int p = min(n, (y - 1) / d + 1);
 
                if (p - 1 < (y - x) / d)
                    continue;
 
                int res = y + (n - p) * d;
 
                if (res < ans) {
                    ans = res;
                    d0 = d;
                }
            }
        }
 
        int p = min(n, (y - 1) / d0 + 1);
 
        for (int i = 1; i <= n; ++i)
            cout << y + (i - p) * d0 << " \n"[i == n];
    }
 
    return 0;
}