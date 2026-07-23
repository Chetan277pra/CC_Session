// Problem: Corners
// Contest: 1720
// Link: https://codeforces.com/contest/1720/problem/C
// Submission id: 383979668

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        int ones = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (char c : a[i])
                if (c == '1') ones++;
        }

        if (ones == 0) {
            cout << 0 << '\n';
            continue;
        }

        int penalty = 2; 

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                int zeros = 0;
                zeros += (a[i][j] == '0');
                zeros += (a[i + 1][j] == '0');
                zeros += (a[i][j + 1] == '0');
                zeros += (a[i + 1][j + 1] == '0');

                if (zeros >= 2)
                    penalty = 0;
                else if (zeros == 1)
                    penalty = min(penalty, 1);
            }
        }

        cout << ones - penalty << '\n';
    }

    return 0;
}