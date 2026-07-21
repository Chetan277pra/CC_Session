// Problem: Collatz Conjecture
// Contest: 1982
// Link: https://codeforces.com/contest/1982/problem/B
// Submission id: 383735928

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        while (k > 0 && x != 1) {
            long long jump;
            if (x % y == 0)
                jump = y;
            else
                jump = y - (x % y);

            if (jump > k) {
                x += k;
                k = 0;
            } else {
                x += jump;
                k -= jump;

                while (x % y == 0)
                    x /= y;
            }
        }
        if (x == 1) {
            k %= (y - 1);
            x += k;
        }

        cout << x << '\n';
    }

    return 0;
}