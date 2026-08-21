// Problem: Fall Down
// Contest: 1669
// Link: https://codeforces.com/contest/1669/problem/G
// Submission id: 387914776

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<string> a(n);
        for (auto &row : a) cin >> row;
 
        for (int j = 0; j < m; j++) {
            int pos = n - 1;
 
            for (int i = n - 1; i >= 0; i--) {
                if (a[i][j] == 'o') {
                    pos = i - 1;
                } else if (a[i][j] == '*') {
                    a[i][j] = '.';
                    a[pos][j] = '*';
                    pos--;
                }
            }
        }
 
        for (auto &row : a)
            cout << row << '\n';
 
        cout << '\n';
    }
 
    return 0;
}