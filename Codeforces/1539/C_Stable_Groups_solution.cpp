// Problem: Stable Groups
// Contest: 1539
// Link: https://codeforces.com/contest/1539/problem/C
// Submission id: 385677378

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> need;
    int groups = 1;

    for (int i = 0; i < n - 1; i++) {
        int gap = a[i + 1] - a[i];

        if (gap > x) {
            groups++;
            need.push_back((gap - 1) / x);
        }
    }

    sort(need.begin(), need.end());

    for (int cost : need) {
        if (cost <= k) {
            k -= cost;
            groups--;
        } else {
            break;
        }
    }

    cout << groups << "\n";

    return 0;
}