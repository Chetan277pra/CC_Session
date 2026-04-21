// Problem: Make It Round
// Contest: 1759
// Link: https://codeforces.com/contest/1759/problem/D
// Submission id: 371902753

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int temp = n;
        int c2 = 0, c5 = 0;

        while (temp % 2 == 0) {
            temp /= 2;
            c2++;
        }

        temp = n;

        while (temp % 5 == 0) {
            temp /= 5;
            c5++;
        }

        int k = 1;

        while (c2 < c5 && k * 2 <= m) {
            k *= 2;
            c2++;
        }

        while (c5 < c2 && k * 5 <= m) {
            k *= 5;
            c5++;
        }

        while (k * 10 <= m) {
            k *= 10;
        }

        k *= (m / k);

        cout << n * k << "\n";
    }

    return 0;
}