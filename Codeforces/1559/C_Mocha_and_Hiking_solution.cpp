// Problem: Mocha and Hiking
// Contest: 1559
// Link: https://codeforces.com/contest/1559/problem/C
// Submission id: 381741000

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
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        if (a[1] == 1) {
            cout << n + 1 << " ";
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << "\n";
        } else if (a[n] == 0) {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << n + 1 << "\n";
        } else {
            for (int i = 1; i < n; i++) {
                if (a[i] == 0 && a[i + 1] == 1) {
                    for (int j = 1; j <= i; j++)
                        cout << j << " ";
                    cout << n + 1 << " ";
                    for (int j = i + 1; j <= n; j++)
                        cout << j << " ";
                    cout << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}