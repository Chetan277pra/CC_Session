// Problem: Sum of Substrings
// Contest: 1691
// Link: https://codeforces.com/contest/1691/problem/C
// Submission id: 380144570

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        long long k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt = 0;
        for (char c : s) cnt += (c == '1');

        int ans = 11 * cnt;

        int first = -1, last = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }

        if (last != -1) {
            int cost = n - 1 - last;
            if (cost <= k) {
                ans -= 10;
                k -= cost;
                if (first == last)
                    first = -1;
            }
        }

        if (first != -1 ) {
            int cost = first;
            if (cost <= k)
                ans -= 1;
        }

        cout << ans << '\n';
    }

    return 0;
}