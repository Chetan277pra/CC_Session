// Problem: chtn
// Contest: 1881
// Submission id: 383372702

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

        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        long long ans = 0;

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                char a = s[i][j];
                char b = s[j][n - 1 - i];
                char c = s[n - 1 - i][n - 1 - j];
                char d = s[n - 1 - j][i];

                char mx = max({a, b, c, d});

                ans += (mx - a);
                ans += (mx - b);
                ans += (mx - c);
                ans += (mx - d);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}