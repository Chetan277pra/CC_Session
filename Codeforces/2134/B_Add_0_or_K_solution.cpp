// Problem: Add 0 or K
// Contest: 2134
// Link: https://codeforces.com/contest/2134/problem/B
// Submission id: 379526293

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;
 
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
 
            long long r = a % (k + 1);
            long long ans = a + r * k;
 
            cout << ans << (i + 1 == n ? '\n' : ' ');
        }
    }
 
    return 0;
}