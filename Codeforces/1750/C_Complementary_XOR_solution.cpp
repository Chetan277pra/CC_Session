// Problem: Complementary XOR
// Contest: 1750
// Link: https://codeforces.com/contest/1750/problem/C
// Submission id: 370575525

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
        string a, b;
        cin >> a >> b;

        bool eq = (a == b);
        bool inv = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                inv = false;
                break;
            }
        }

        if (!eq && !inv) {
            cout << "NO\n";
            continue;
        }

        vector<pair<int, int>> op;

        for (int i = 1; i < n; i++) {
            if (b[i] != b[i - 1]) {
                op.push_back({0, i - 1});
                bool tmp = eq;
                eq = inv;
                inv = tmp;
            }
        }

        if (b[0] == '1') {
            op.push_back({0, 0});
            op.push_back({1, n - 1});
        }

        if (inv) {
            op.push_back({0, n - 1});
        }

        cout << "YES\n";
        cout << op.size() << "\n";
        for (auto &p : op) {
            cout << p.first + 1 << " " << p.second + 1 << "\n";
        }
    }

    return 0;
}