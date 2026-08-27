// Problem: AccurateLee
// Contest: 1369
// Link: https://codeforces.com/contest/1369/problem/B
// Submission id: 388589539

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
 
        int l = 0, r = n - 1;
 
        while (l < n && s[l] == '0')
            l++;
 
        while (r >= 0 && s[r] == '1')
            r--;
 
        if (l > r) {
            cout << s << '\n';
        } else {
            cout << s.substr(0, l) << '0' << s.substr(r + 1) << '\n';
        }
    }
 
    return 0;
}