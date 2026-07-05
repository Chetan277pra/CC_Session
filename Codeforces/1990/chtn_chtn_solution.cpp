// Problem: chtn
// Contest: 1990
// Submission id: 381320043

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n + 1, 1);

        for (int i = x + 1; i <= n; i++)
            a[i] = (i - x) & 1 ? -1 : 1;

        for (int i = y - 1; i >= 1; i--)
            a[i] = ((y - i) & 1) ? -1 : 1;

        for (int i = 1; i <= n; i++)
            cout << a[i] << " \n"[i == n];
    }

    return 0;
}