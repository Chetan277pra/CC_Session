// Problem: Add Modulo 10
// Contest: 1714
// Link: https://codeforces.com/contest/1714/problem/E
// Submission id: 367473456

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        bool has5 = false;
        for (int x : a) {
            if (x % 5 == 0) has5 = true;
        }
 
        if (has5) {
            for (int &x : a) {
                if (x % 10 == 5) x += 5;
            }
 
            bool ok = true;
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) ok = false;
            }
 
            cout << (ok ? "YES\n" : "NO\n");
        } else {
            for (int &x : a) {
                while (x % 10 != 2) {
                    x += x % 10;
                }
            }
 
            bool ok = true;
            for (int i = 1; i < n; i++) {
                if ((a[i] % 20) != (a[0] % 20)) {
                    ok = false;
                }
            }
 
            cout << (ok ? "YES\n" : "NO\n");
        }
    }
}