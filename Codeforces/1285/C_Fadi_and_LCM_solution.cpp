// Problem: Fadi and LCM
// Contest: 1285
// Link: https://codeforces.com/contest/1285/problem/C
// Submission id: 368260647

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;

    int a = 1, b = n;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int x = i;
            int y = n / i;

            if (__gcd(x, y) == 1) {
                if (max(x, y) < max(a, b)) {
                    a = x;
                    b = y;
                }
            }
        }
    }

    cout << a << " " << b;
}