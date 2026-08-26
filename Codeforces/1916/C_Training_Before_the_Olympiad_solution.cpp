// Problem: Training Before the Olympiad
// Contest: 1916
// Link: https://codeforces.com/contest/1916/problem/C
// Submission id: 388487362

#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int sum = 0;
        int odd = 0;
 
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
 
            sum += num;
            odd += num & 1;
 
            int sub = odd / 3;
 
            if (odd % 3 == 1 && i != 0)
                sub++;
 
            cout << sum - sub << (i == n - 1 ? '\n' : ' ');
        }
    }
 
    return 0;
}