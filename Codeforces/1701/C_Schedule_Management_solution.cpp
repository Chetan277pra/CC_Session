// Problem: Schedule Management
// Contest: 1701
// Link: https://codeforces.com/contest/1701/problem/C
// Submission id: 374033464

#include <bits/stdc++.h>
using namespace std;
#define int long long
bool possi(int mid, vector<int>& cnt, int n) {
    int extra = 0;
    int need = 0;

    for (int i = 1; i <= n; i++) {
        if (cnt[i] > mid) {
            need += cnt[i] - mid;
        } else {
            extra += (mid - cnt[i]) / 2;
        }
    }

    return extra >= need;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, m;
        cin >> n >> m;

        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int l = 0, r = 2 * m;
        int ans = r;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (possi(mid, cnt, n)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}