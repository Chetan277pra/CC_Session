// Problem: Fighting Tournament
// Contest: 1719
// Link: https://codeforces.com/contest/1719/problem/C
// Submission id: 367389258

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int m = *max_element(a.begin(), a.end());
 
        deque<int> d(a.begin(), a.end());
        map<int, vector<int>> w;
 
        int r = 0;
 
        while (d.front() != m) {
            int x = d.front(); d.pop_front();
            int y = d.front(); d.pop_front();
            r++;
 
            if (x > y) {
                d.push_front(x);
                d.push_back(y);
                w[x].push_back(r);
            } else {
                d.push_front(y);
                d.push_back(x);
                w[y].push_back(r);
            }
        }
 
        while (q--) {
            int i;
            ll k;
            cin >> i >> k;
 
            int v = a[i - 1];
            ll ans = 0;
 
            if (v == m) {
                if (k <= r) {
                    ans = upper_bound(w[v].begin(), w[v].end(), k) - w[v].begin();
                } else {
                    ans = w[v].size() + (k - r);
                }
            } else {
                ans = upper_bound(w[v].begin(), w[v].end(), k) - w[v].begin();
            }
 
            cout << ans << " ";
        }
        cout << "\n";
    }
}