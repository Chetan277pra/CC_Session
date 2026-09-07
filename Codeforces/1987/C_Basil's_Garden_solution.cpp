// Problem: Basil's Garden
// Contest: 1987
// Link: https://codeforces.com/contest/1987/problem/C
// Submission id: 389711710

#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    
    int tt;
    cin >> tt;
    while(tt--){
        
        int n;
        cin >> n;
    
        vector<int> h(n);
    
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
    
        int time = h[n - 1];
    
        for (int i = n - 2; i >= 0; i--) {
            time = max(h[i], time + 1);
        }
    
        cout << time << '\n';
    }
 
    return 0;
}