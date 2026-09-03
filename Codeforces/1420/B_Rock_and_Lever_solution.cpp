// Problem: Rock and Lever
// Contest: 1420
// Link: https://codeforces.com/contest/1420/problem/B
// Submission id: 389293794

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        long long c[31] = {};
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            int b = 31 - __builtin_clz(x);
            c[b]++;
        }
 
        long long ans = 0;
 
        for (int b = 0; b <= 30; b++) {
            ans += c[b] * (c[b] - 1) / 2;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}