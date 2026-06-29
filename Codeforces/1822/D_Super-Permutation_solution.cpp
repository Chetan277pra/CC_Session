// Problem: Super-Permutation
// Contest: 1822
// Link: https://codeforces.com/contest/1822/problem/D
// Submission id: 380578219

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        if (n & 1) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> p;
        int l = 0, r = n - 1;

        while (l < r) {
            p.push_back(l++);
            p.push_back(r--);
        }

        vector<int> ans;
        int prev = 0;

        for (int x : p) {
            int diff = (x - prev + n) % n;
            if (diff == 0) diff = n;
            ans.push_back(diff);
            prev = x;
        }

        for (int x : ans)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}