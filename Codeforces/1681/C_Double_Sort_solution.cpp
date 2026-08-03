// Problem: Double Sort
// Contest: 1681
// Link: https://codeforces.com/contest/1681/problem/C
// Submission id: 385435548

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

        vector<pair<int, int>> cur(n), target;
        for (int i = 0; i < n; i++) cin >> cur[i].first;
        for (int i = 0; i < n; i++) cin >> cur[i].second;

        target = cur;
        sort(target.begin(), target.end());

        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (target[i].second < target[i - 1].second) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        vector<pair<int, int>> ans;

        for (int i = 0; i < n; i++) {
            if (cur[i] == target[i]) continue;

            int j = i + 1;
            while (j < n && cur[j] != target[i]) j++;

            swap(cur[i], cur[j]);
            ans.push_back({i + 1, j + 1});
        }

        cout << ans.size() << '\n';
        for (auto [x, y] : ans)
            cout << x << " " << y << '\n';
    }

    return 0;
}