// Problem: Alternating Subsequence
// Contest: 1343
// Link: https://codeforces.com/contest/1343/problem/C
// Submission id: 389207446

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long ans = 0;

        for (int i = 0; i < n; ) {
            long long mx = a[i];
            int j = i + 1;

            while (j < n && ((a[j] > 0) == (a[i] > 0))) {
                mx = max(mx, a[j]);
                j++;
            }

            ans += mx;
            i = j;
        }

        cout << ans << '\n';
    }

    return 0;
}