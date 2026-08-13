// Problem: Challenging Cliffs
// Contest: 1537
// Link: https://codeforces.com/contest/1537/problem/C
// Submission id: 386949612

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

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        int pos = 1;

        for (int i = 2; i < n; i++) {
            if (a[i] - a[i - 1] < a[pos] - a[pos - 1])
                pos = i;
        }

        cout << a[pos - 1];

        for (int i = pos + 1; i < n; i++)
            cout << ' ' << a[i];

        for (int i = 0; i < pos - 1; i++)
            cout << ' ' << a[i];

        cout << ' ' << a[pos] << '\n';
    }

    return 0;
}