// Problem: chtn
// Contest: 1641
// Submission id: 390984152

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n , x;
        cin >> n >> x;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        map<int , int> mpp;
        for(auto a : vec) mpp[a]++;
        sort(vec.begin() , vec.end());
        int count = 0;
        for(auto a : vec){
            if(mpp[a] == 0) continue;
            if(mpp[a*x] != 0) {mpp[a*x]--; mpp[a]--; continue; }
            mpp[a]--;
            count++;
            // cout << a << " " << mpp[a] << " " << a*x << " " << mpp[a*x] << endl;
        }
        cout << count << "\n";
        
    }
    return 0;
}