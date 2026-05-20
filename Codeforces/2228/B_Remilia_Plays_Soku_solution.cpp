// Problem: Remilia Plays Soku
// Contest: 2228
// Link: https://codeforces.com/contest/2228/problem/B
// Submission id: 375264550

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
 
        if (n <= 3) {
            cout << 1 << '\n';
            continue;
        }
 
        long long d = abs(x1 - x2);
        d = min(d, n - d);
 
        cout << d + k << '\n';
    }
 
    return 0;
}