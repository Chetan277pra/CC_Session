// Problem: chtn
// Contest: 1613
// Submission id: 385175253

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
ll h;
vector<ll> a;

bool check(ll k) {
    ll damage = k;
    for (int i = 0; i < n - 1; i++) {
        damage += min(k, a[i + 1] - a[i]);
        if (damage >= h) return true;
    }
    return damage >= h;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cin >> n >> h;
        a.resize(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll l = 1, r = h;

        while (l < r) {
            ll mid = l + (r - l) / 2;
            if (check(mid))
                r = mid;
            else
                l = mid + 1;
        }

        cout << l << '\n';
    }

    return 0;
}