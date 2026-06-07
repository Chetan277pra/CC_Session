// Problem: Removal of Unattractive Pairs
// Contest: 1907
// Link: https://codeforces.com/contest/1907/problem/C
// Submission id: 377611217

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

        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        int mx = *max_element(cnt.begin(), cnt.end());

        cout << max(n % 2, 2 * mx - n) << '\n';
    }

    return 0;
}