// Problem: Make Equal With Mod
// Contest: 1656
// Link: https://codeforces.com/contest/1656/problem/C
// Submission id: 381987668

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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        bool o = 0, c = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) o = 1;
            if (i + 1 < n && a[i] + 1 == a[i + 1]) c = 1;
        }

        cout << (o && c ? "NO" : "YES") << '\n';
    }
}