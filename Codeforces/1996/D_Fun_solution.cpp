// Problem: Fun
// Contest: 1996
// Link: https://codeforces.com/contest/1996/problem/D
// Submission id: 379356595

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x, ans;
        cin >> n >> x;
        ans = 0;
        for (long long a = 1; a <= n; a++) {
            for (long long b = 1; a * b <= n; b++) {
                long long c = min((n - a * b) / (a + b), x - a - b);
                if (c > 0) ans += c;
                if(c <= 0) break;
            }
        }
 
        cout << ans <<'\n';
    }
 
    return 0;
}