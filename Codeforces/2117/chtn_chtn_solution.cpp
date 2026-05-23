// Problem: chtn
// Contest: 2117
// Submission id: 375770181

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

        vector<int> a(n), last(n + 1);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            last[a[i]] = i;

        set<int> need, cur;

        int ans = 0;
        int mnLast = 1e9;

        for (int i = 0; i < n; i++) {

            cur.insert(a[i]);
            need.erase(a[i]);

            mnLast = min(mnLast, last[a[i]]);

            if (need.empty() && mnLast > i) {
                ans++;
                need = cur;
                cur.clear();
                mnLast = 1e9;
            }
        }

        cout << ans + 1 << '\n';
    }
}