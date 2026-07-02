// Problem: chtn
// Contest: 1744
// Submission id: 381041648

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
 
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            while (x % 2 == 0) {
                cnt++;
                x /= 2;
            }
        }
 
        if (cnt >= n) {
            cout << 0 << "\n";
            continue;
        }
 
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            int x = i;
            int c = 0;
            while (x % 2 == 0) {
                c++;
                x /= 2;
            }
            v.push_back(c);
        }
 
        sort(v.rbegin(), v.rend());
 
        int ans = 0;
        for (int x : v) {
            if (cnt >= n) break;
            cnt += x;
            ans++;
        }
 
        if (cnt >= n)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
 
    return 0;
}