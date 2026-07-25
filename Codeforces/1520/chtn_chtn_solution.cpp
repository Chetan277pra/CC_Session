// Problem: chtn
// Contest: 1520
// Submission id: 384228837

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

        unordered_map<int, long long> mp;
        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            ans += mp[x - i];
            mp[x - i]++;
        }

        cout << ans << '\n';
    }

    return 0;
}