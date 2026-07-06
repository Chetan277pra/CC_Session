// Problem: chtn
// Contest: 1853
// Submission id: 381503185

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> fib(30);
    fib[1] = fib[2] = 1;
    for (int i = 3; i < 30; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    int tt;
    cin >> tt;

    while (tt--) {
        int n, k;
        cin >> n >> k;

        if (k >= 29) {
            cout << 0 << '\n';
            continue;
        }

        int a = fib[k - 2];
        int b = fib[k - 1];

        int ans = 0;

        for (int x = 0; a * x <= n; x++) {
            int rem = n - a * x;
            if (rem % b) continue;
            int y = rem / b;
            if (x <= y) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}