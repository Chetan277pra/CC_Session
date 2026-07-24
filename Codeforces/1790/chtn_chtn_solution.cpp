// Problem: chtn
// Contest: 1790
// Submission id: 384104700

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

        map<long long, int> cnt;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x]++;
        }

        long long ans = 0;
        int active = 0;
        long long prev = -4e18;

        for (auto [x, f] : cnt) {
            if (x != prev + 1) active = 0;
            if (f > active) ans += f - active;
            active = f;
            prev = x;
        }

        cout << ans << "\n";
    }

    return 0;
}