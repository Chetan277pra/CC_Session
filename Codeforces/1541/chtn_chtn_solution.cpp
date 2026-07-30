// Problem: chtn
// Contest: 1541
// Submission id: 384894039

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

        vector<int> a(n + 1), pos(2 * n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int p = a[i]; p <= 2 * n; p += a[i]) {
                int x = p / a[i];
                if (x > 2 * n || pos[x] == 0) continue;

                int j = pos[x];
                if (i < j && i + j == p)
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}