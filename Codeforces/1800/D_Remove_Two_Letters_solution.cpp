// Problem: Remove Two Letters
// Contest: 1800
// Link: https://codeforces.com/contest/1800/problem/D
// Submission id: 383849576

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
        string s;
        cin >> s;

        int ans = 1;
        for (int i = 0; i + 2 < n; i++) {
            if (s[i] != s[i + 2])
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}