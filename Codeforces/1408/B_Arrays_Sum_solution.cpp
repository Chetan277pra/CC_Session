// Problem: Arrays Sum
// Contest: 1408
// Link: https://codeforces.com/contest/1408/problem/B
// Submission id: 369498718

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int s = 0;
        for (int i = 0; i < n; i++)
            s += (i == 0 || a[i] != a[i - 1]);

        if (k == 1) {
            cout << (s == 1 ? 1 : -1) << '\n';
        } else {
            int x = s - 1, y = k - 1;
            cout << max(1, (x + y - 1) / y) << '\n';
        }
    }
}