// Problem: Zhily and Mex and Max
// Contest: 2224
// Link: https://codeforces.com/contest/2224/problem/B
// Submission id: 373844143

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (auto &a : vec) cin >> a;

        sort(vec.begin(), vec.end());

        int ele = vec.back();

        vector<int> temp;
        temp.push_back(ele);

        map<int, int> mp;

        for (auto a : vec) mp[a]++;

        mp[ele]--;

        for (int i = 0; mp.count(i) && mp[i]; i++) {
            temp.push_back(i);
            mp[i]--;
        }

        for (auto &[a, b] : mp) {
            while (b--) temp.push_back(a);
        }

        int ans = 0;
        int mex = 0;
        int mx = 0;

        vector<int> seen(n + 5, 0);

        for (auto a : temp) {
            mx = max(mx, a);

            if (a <= n) seen[a] = 1;

            while (seen[mex]) mex++;

            ans += mex + mx;
        }

        cout << ans << "\n";
    }

    return 0;
}