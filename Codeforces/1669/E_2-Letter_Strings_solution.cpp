// Problem: 2-Letter Strings
// Contest: 1669
// Link: https://codeforces.com/contest/1669/problem/E
// Submission id: 379935531

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
 
        map<string, long long> freq;
        long long ans = 0;
 
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
 
            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[0]) {
                    string t = s;
                    t[0] = c;
                    ans += freq[t];
                }
            }
 
            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[1]) {
                    string t = s;
                    t[1] = c;
                    ans += freq[t];
                }
            }
 
            freq[s]++;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}