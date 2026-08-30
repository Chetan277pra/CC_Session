// Problem: chtn
// Contest: 1583
// Submission id: 388936010

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> v(n + 1, 0);

        for (int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            v[b] = 1;
        }

        int r = 1;
        while (v[r]) r++;

        for (int i = 1; i <= n; i++) {
            if (i != r)
                cout << r << " " << i << '\n';
        }
    }

    return 0;
}