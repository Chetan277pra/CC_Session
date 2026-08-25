// Problem: Another Permutation Problem
// Contest: 1859
// Link: https://codeforces.com/contest/1859/problem/C
// Submission id: 388268571

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;

        for (int k = 0; k <= n; k++) {
            long long sum = 0, mx = 0;

            for (int i = 1; i <= k; i++) {
                sum += 1LL * i * i;
                mx = max(mx, 1LL * i * i);
            }

            for (int i = k + 1; i <= n; i++) {
                int x = n + k + 1 - i;
                sum += 1LL * i * x;
                mx = max(mx, 1LL * i * x);
            }

            ans = max(ans, sum - mx);
        }

        cout << ans << '\n';
    }
}