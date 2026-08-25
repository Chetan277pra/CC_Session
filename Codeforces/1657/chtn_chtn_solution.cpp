// Problem: chtn
// Contest: 1657
// Submission id: 388376669

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        string s;
        cin >> n >> s;

        int p = 0, a = 0;

        while (p < n) {
            if (s[p] == '(') {
                if (p + 1 >= n) break;
                p += 2;
                a++;
            } else {
                int j = p + 1;

                while (j < n && s[j] != ')')
                    j++;

                if (j == n) break;

                p = j + 1;
                a++;
            }
        }

        cout << a << " " << n - p << '\n';
    }

    return 0;
}