// Problem: chtn
// Contest: 2237
// Submission id: 379724753

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        int ans = 0;
        int mini = INT_MAX;
        for(auto a : vec ){
            mini = min(mini , a );
            ans += mini;
        }
        cout << ans << "\n";
    }
    return 0;
}