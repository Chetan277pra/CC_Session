// Problem: Delete Two Elements
// Contest: 1598
// Link: https://codeforces.com/contest/1598/problem/C
// Submission id: 388836470

#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() 
{
    int tt;
    cin >> tt;
    while(tt--){
        int n ;
        cin >> n;
        vector<int> vec(n);
        for(auto & a :  vec) cin >> a;
        int count = 0;
        map<int , int> mpp;
        int tot = accumulate(vec.begin() , vec.end() , 0ll);
        if((2*tot)%n != 0) {
            cout << 0 << "\n";
            continue;
        }
        int target = (2 * tot) / n;
        for(auto a : vec){
            int left = target - a;
            if(mpp.find(left) != mpp.end()) count += mpp[left];
            mpp[a]++;
        }
        cout << count << "\n";
    }
    return 0;
}