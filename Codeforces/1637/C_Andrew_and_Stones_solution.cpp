// Problem: Andrew and Stones
// Contest: 1637
// Link: https://codeforces.com/contest/1637/problem/C
// Submission id: 390743622

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
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        bool big = false;
        long long ans = 0;
 
        for (int i = 1; i < n - 1; i++) {
            big |= (a[i] > 1);
            ans += (a[i] + 1) / 2;
        }
 
        if (!big || (n == 3 && a[1] % 2 == 1)) {
            cout << -1 << '\n';
            continue;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}