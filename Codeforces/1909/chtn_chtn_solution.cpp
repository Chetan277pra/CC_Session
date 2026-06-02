// Problem: chtn
// Contest: 1909
// Submission id: 377048399

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() 
{
    int tt;
    cin >> tt;
    
    while(tt--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(auto &a : vec) cin >> a;
        
        for(int bit = 0; bit < 62; bit++){
            int cnt = 0;
            for(auto a : vec){
                if(a & (1LL << bit))
                    cnt++;
            }
            if(cnt > 0 && cnt < n){
                cout << (1LL << (bit+1)) << "\n";
                break;
            }
        }
    }
    
    return 0;
}