// Problem: Erase First or Second Letter
// Contest: 1917
// Link: https://codeforces.com/contest/1917/problem/B
// Submission id: 365859967

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> ans(n);
        vector<int> nxt(26, n);

        ans[n - 1] = 1;
        nxt[s[n - 1] - 'a'] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            ans[i] = ans[i + 1] + (nxt[s[i] - 'a'] - i);
            nxt[s[i] - 'a'] = i;
        }

        cout << ans[0];
        cout << "\n";
    }
}