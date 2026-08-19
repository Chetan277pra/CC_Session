// Problem: chtn
// Contest: 1352
// Submission id: 387712100

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long ans = k + (k - 1) / (n - 1);

        cout << ans << '\n';
    }

    return 0;
}