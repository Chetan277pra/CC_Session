// Problem: Counting Pairs
// Contest: 2051
// Link: https://codeforces.com/contest/2051/problem/D
// Submission id: 377264200

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n , x , y;
        cin >> n >> x >> y;
        vector<int> vec(n);
        for(auto & a : vec) cin >> a;
        int ans = 0;
        // tot - a - rem > x
        // tot - a - x > rem;
        int tot = accumulate(vec.begin() , vec.end() , 0ll);
        sort(vec.begin() , vec.end());
        for(int i = 0; i < n; i++){
            int rem1 = tot - x - vec[i];
            auto it1 = upper_bound(vec.begin() , vec.end() , rem1);
            int rem2 = tot - y - vec[i];
            auto it2 = lower_bound(vec.begin() , vec.end() , rem2);
            // cout << vec[i]<<" " << *it1 <<" "<<*it2 << " ";
            // cout << it1 - it2 << endl;
            int ind1 = it1 - vec.begin();
            int ind2 = it2 - vec.begin();
            if(ind2 <= i && i < ind1) ans--;
            // ans = max(ans , 0);
            ans += (it1 - it2 );
        }

        cout << ans/2<<"\n";
    }
    return 0;
}
// 19
// 3 4 6 6
// 19 - 3 - x > 8   < y
// 19 - 3 - x < 10 == -x < -6 x >= 6