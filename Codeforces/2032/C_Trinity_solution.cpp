// Problem: Trinity
// Contest: 2032
// Link: https://codeforces.com/contest/2032/problem/C
// Submission id: 373606849

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
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
 
        sort(a.begin(), a.end());
 
        int ans = n;
        int r = 0;
 
        for (int l = 0; l < n; l++) {
            if (r < l) r = l;
            while (r + 1 < n && a[l] + a[l + 1] > a[r + 1]) {
                r++;
            }
            ans = min(ans, n - (r - l + 1));
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}