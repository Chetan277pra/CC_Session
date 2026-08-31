// Problem: Palindrome Game (easy version)
// Contest: 1527
// Link: https://codeforces.com/contest/1527/problem/B1
// Submission id: 389019521

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    int a = 0, b = 0;
    int diff = 0, same = 0, same2 = 0;
 
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i])
            diff++;
 
        else if (s[i] == '0')
            same++;
    }
 
    if (n % 2 && s[n / 2] == '0')
        same2 = 1;
 
    if (diff == 0) {
        if (same > 0 && same2)
            cout << "ALICE\n";
        else
            cout << "BOB\n";
 
        return;
    }
 
    b = diff;
 
    if (!same2) {
        a += ((same + 1) / 2) * 2;
        b += (same / 2) * 2;
    }
    else {
        a++;
        b += ((same + 1) / 2) * 2;
        a += (same / 2) * 2;
    }
 
    if (a < b)
        cout << "ALICE\n";
    else if (a > b)
        cout << "BOB\n";
    else
        cout << "DRAW\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin >> tt;
 
    while (tt--)
        solve();
}