// Problem: Reverse Binary Strings
// Contest: 1437
// Link: https://codeforces.com/contest/1437/problem/B
// Submission id: 390237184

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
 
        string s;
        cin >> s;
 
        int a = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n])
                a++;
        }
 
        cout << a / 2 << "\n";
    }
 
    return 0;
}