// Problem: k-LCM (easy version)
// Contest: 1497
// Link: https://codeforces.com/contest/1497/problem/C1
// Submission id: 387465256

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
 
        if (n % 2) {
            cout << 1 << ' ' << (n - 1) / 2 << ' ' << (n - 1) / 2 << '\n';
        } else if (n % 4 == 2) {
            cout << 2 << ' ' << n / 2 - 1 << ' ' << n / 2 - 1 << '\n';
        } else {
            cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << '\n';
        }
    }
 
    return 0;
}