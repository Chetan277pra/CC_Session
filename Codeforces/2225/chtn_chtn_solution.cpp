// Problem: chtn
// Contest: 2225
// Submission id: 372366049

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