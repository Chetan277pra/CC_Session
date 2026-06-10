// Problem: AI Project Development
// Contest: 2233
// Link: https://codeforces.com/contest/2233/problem/A
// Submission id: 378109412

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int tt;
    cin >> tt;
    while (tt--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int a = (n + (x + y) - 1) / (x + y);
        int b;
        if (z * x >= n) {
            b = (n + x - 1) / x;
        } else {
            int tot = n - z * x;
            b = z + (tot + (x + 10 * y) - 1) / (x + 10 * y);
        }
 
        cout << min(a, b) << "\n";
    }
    return 0;
}