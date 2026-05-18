// Problem: chtn
// Contest: 2091
// Submission id: 375075245

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool f(ll n, ll m, ll k, ll x) {
    ll g = m / (x + 1);
    ll s = g * x + min(m % (x + 1), x);
    return s * n >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;

        ll l = 1, r = m, a = m;

        while (l <= r) {
            ll x = (l + r) / 2;

            if (f(n, m, k, x)) {
                a = x;
                r = x - 1;
            } else {
                l = x + 1;
            }
        }

        cout << a << '\n';
    }
}