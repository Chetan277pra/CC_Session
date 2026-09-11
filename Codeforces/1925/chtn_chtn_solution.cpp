// Problem: chtn
// Contest: 1925
// Submission id: 390331518

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        int ans = 1;

        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                if (i <= x / n)
                    ans = max(ans, i);

                if (x / i <= x / n)
                    ans = max(ans, x / i);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}