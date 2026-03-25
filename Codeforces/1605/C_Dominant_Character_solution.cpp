// Problem: Dominant Character
// Contest: 1605
// Link: https://codeforces.com/contest/1605/problem/C
// Submission id: 368179279

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int ans = 1e9;
 
        for (int i = 0; i < n; i++) {
            int a = 0, b = 0, c = 0;
            for (int j = i; j < n && j < i + 7; j++) {
                if (s[j] == 'a') a++;
                else if (s[j] == 'b') b++;
                else c++;
 
                int len = j - i + 1;
                if (len >= 2 && a > b && a > c) {
                    ans = min(ans, len);
                }
            }
        }
 
        if (ans == 1e9) cout << -1 << '\n';
        else cout << ans << '\n';
    }
 
    return 0;
}