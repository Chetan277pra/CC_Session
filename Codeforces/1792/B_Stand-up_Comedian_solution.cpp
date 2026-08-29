// Problem: Stand-up Comedian
// Contest: 1792
// Link: https://codeforces.com/contest/1792/problem/B
// Submission id: 388701036

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if (a == 0) {
            cout << 1 << '\n';
            continue;
        }
 
        long long x = min(b, c);
        long long ans = a + 2 * x;
 
        b -= x;
        c -= x;
 
        long long r = b + c + d;
 
        ans += min(a, r);
 
        if (r > a)
            ans++;
 
        cout << ans << '\n';
    }
}