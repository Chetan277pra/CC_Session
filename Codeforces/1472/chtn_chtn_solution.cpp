// Problem: chtn
// Contest: 1472
// Submission id: 390842562

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
        for (int &x : a) cin >> x;

        sort(a.rbegin(), a.rend());

        long long x = 0, y = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && a[i] % 2 == 0)
                x += a[i];
            else if (i % 2 == 1 && a[i] % 2 == 1)
                y += a[i];
        }

        if (x > y) cout << "Alice\n";
        else if (x < y) cout << "Bob\n";
        else cout << "Tie\n";
    }

    return 0;
}