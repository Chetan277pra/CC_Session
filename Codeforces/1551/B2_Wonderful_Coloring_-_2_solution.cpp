// Problem: Wonderful Coloring - 2
// Contest: 1551
// Link: https://codeforces.com/contest/1551/problem/B2
// Submission id: 369029602

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
        vector<int> a(n), c(n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; i++) {
            if ((int)pos[a[i]].size() < k) {
                pos[a[i]].push_back(i);
            }
        }

        vector<int> usable;
        for (auto &p : pos) {
            for (int idx : p.second) usable.push_back(idx);
        }

        int m = usable.size();
        int use = (m / k) * k;

        for (int i = 0; i < use; i++) {
            c[usable[i]] = (i % k) + 1;
        }

        for (int i = 0; i < n; i++) {
            cout << c[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}