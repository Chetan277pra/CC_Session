// Problem: Devyatkino
// Contest: 2067
// Link: https://codeforces.com/contest/2067/problem/C
// Submission id: 381145075

#include <bits/stdc++.h>
using namespace std;

bool check(long long n, int k) {
    long long x = n - k;
    int mn = 7;
    if (x == 0) mn = min(mn, 7);
    while (x > 0) {
        int d = x % 10;
        mn = min(mn, (7 - d + 10) % 10);
        x /= 10;
    }
    return mn <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        long long n;
        cin >> n;

        for (int k = 0;; k++) {
            if (check(n, k)) {
                cout << k << "\n";
                break;
            }
        }
    }
}