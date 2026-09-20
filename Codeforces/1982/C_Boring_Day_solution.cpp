// Problem: Boring Day
// Contest: 1982
// Link: https://codeforces.com/contest/1982/problem/C
// Submission id: 391252105

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long l, r;
        cin >> n >> l >> r;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long sum = 0;
        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {
            sum += a[right];

            while (sum > r) {
                sum -= a[left++];
            }

            if (sum >= l) {
                ans++;
                sum = 0;
                left = right + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}