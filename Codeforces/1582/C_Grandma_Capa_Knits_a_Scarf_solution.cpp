// Problem: Grandma Capa Knits a Scarf
// Contest: 1582
// Link: https://codeforces.com/contest/1582/problem/C
// Submission id: 390596521

#include <bits/stdc++.h>
using namespace std;
 
int check(string &s, char ch) {
 
    int l = 0;
    int r = s.size() - 1;
    int count = 0;
 
    while (l < r) {
 
        if (s[l] == s[r]) {
            l++;
            r--;
        }
 
        else if (s[l] == ch) {
            l++;
            count++;
        }
 
        else if (s[r] == ch) {
            r--;
            count++;
        }
 
        else {
            return INT_MAX;
        }
    }
 
    return count;
}
 
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
 
        int l = 0;
        int r = n - 1;
 
        while (l < r && s[l] == s[r]) {
            l++;
            r--;
        }
 
        if (l >= r) {
            cout << 0 << '\n';
            continue;
        }
 
        char a = s[l];
        char b = s[r];
 
        int ans1 = check(s, a);
        int ans2 = check(s, b);
 
        int ans = min(ans1, ans2);
 
        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
 
    return 0;
}