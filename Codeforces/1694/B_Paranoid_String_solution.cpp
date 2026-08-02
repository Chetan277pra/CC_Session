// Problem: Paranoid String
// Contest: 1694
// Link: https://codeforces.com/contest/1694/problem/B
// Submission id: 385303035

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

        long long ans = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                ans += i + 1;
            else
                ans += 1;
        }

        cout << ans << "\n";
    }

    return 0;
}