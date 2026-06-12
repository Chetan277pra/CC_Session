// Problem: Uninteresting Number
// Contest: 2050
// Link: https://codeforces.com/contest/2050/problem/C
// Submission id: 378345117

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
        int sm = 0, c2 = 0, c3 = 0;
        for (char c : s) {
            int d = c - '0';
            sm += d;
            if (d == 2) c2++;
            if (d == 3) c3++;
        }
        bool ok = false;
        for (int a = 0; a <= min(c2, 8); a++) {
            for (int b = 0; b <= min(c3, 2); b++) {
                if ((sm + 2 * a + 6 * b)%9 == 0) {
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
 
    return 0;
}