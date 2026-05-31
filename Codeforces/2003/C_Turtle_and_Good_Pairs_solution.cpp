// Problem: Turtle and Good Pairs
// Contest: 2003
// Link: https://codeforces.com/contest/2003/problem/C
// Submission id: 376805258

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<pair<int,char>> v;
        vector<int> cnt(26);

        for (char c : s) cnt[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (cnt[i]) v.push_back({cnt[i], char('a' + i)});
        }

        string ans;

        while (!v.empty()) {
            sort(v.begin(), v.end(), greater<pair<int,char>>());

            vector<pair<int,char>> nxt;

            for (auto [f, c] : v) {
                ans += c;
                if (f - 1 > 0) nxt.push_back({f - 1, c});
            }

            v = nxt;
        }

        cout << ans << '\n';
    }

    return 0;
}