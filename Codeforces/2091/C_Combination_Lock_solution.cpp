// Problem: Combination Lock
// Contest: 2091
// Link: https://codeforces.com/contest/2091/problem/C
// Submission id: 376619697

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
 
        if (n % 2 == 0) {
            cout << -1 << '\n';
            continue;
        }
 
        for (int i = 0; i < n; i++) {
            cout << (2 * i % n) + 1;
            if (i + 1 < n) cout << ' ';
        }
        cout << '\n';
    }
 
    return 0;
}