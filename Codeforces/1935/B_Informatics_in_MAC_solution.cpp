// Problem: Informatics in MAC
// Contest: 1935
// Link: https://codeforces.com/contest/1935/problem/B
// Submission id: 380455014

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

        vector<int> a(n), p(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= n) p[a[i]] = 1;
        }

        int mex = 0;
        while (p[mex]) mex++;

        if (mex == 0) {
            cout << n << "\n";
            for (int i = 1; i <= n; i++)
                cout << i << " " << i << "\n";
            continue;
        }

        vector<int> c(mex);
        vector<pair<int, int>> v;

        int d = 0, l = 1;

        for (int i = 0; i < n; i++) {
            if (a[i] < mex) {
                if (c[a[i]] == 0) d++;
                c[a[i]]++;
            }

            if (d == mex) {
                v.push_back({l, i + 1});
                l = i + 2;
                fill(c.begin(), c.end(), 0);
                d = 0;
            }
        }

        if ((int)v.size() < 2) {
            cout << -1 << "\n";
            continue;
        }

        v.back().second = n;

        cout << v.size() << "\n";
        for (auto x : v)
            cout << x.first << " " << x.second << "\n";
    }

    return 0;
}