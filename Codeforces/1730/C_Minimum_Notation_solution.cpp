// Problem: Minimum Notation
// Contest: 1730
// Link: https://codeforces.com/contest/1730/problem/C
// Submission id: 389941659

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        string a;
        int mn = 9;

        for (int i = n - 1; i >= 0; i--) {
            int x = s[i] - '0';

            if (x > mn)
                a += char('0' + min(x + 1, 9));
            else
                a += s[i];

            mn = min(mn, x);
        }

        sort(a.begin(), a.end());
        cout << a << '\n';
    }
}