// Problem: Test of Love
// Contest: 1992
// Link: https://codeforces.com/contest/1992/problem/D
// Submission id: 390434297

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        s = "L" + s + "L";
        n += 2;

        int i = 0;
        bool ok = true;

        while (i < n - 1) {
            if (s[i] == 'L') {
                bool f = false;

                for (int j = i + 1; j < n && j <= i + m; j++) {
                    if (s[j] == 'L') {
                        i = j;
                        f = true;
                        break;
                    }
                }

                if (!f) {
                    i += m;

                    if (s[i] == 'C') {
                        ok = false;
                        break;
                    }
                }
            } else {
                i++;

                if (s[i] == 'C') {
                    ok = false;
                    break;
                }

                k--;
            }
        }

        cout << (ok && k >= 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}