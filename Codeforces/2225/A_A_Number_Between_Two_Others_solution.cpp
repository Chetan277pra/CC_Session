// Problem: A Number Between Two Others
// Contest: 2225
// Link: https://codeforces.com/contest/2225/problem/A
// Submission id: 372005395

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int x , y;
        cin >> x >> y;
        
        if (y == 2 * x) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }
    return 0;
}