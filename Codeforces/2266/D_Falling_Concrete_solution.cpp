// Problem: Falling Concrete
// Contest: 2266
// Link: https://codeforces.com/contest/2266/problem/D
// Submission id: 391750603

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
        for(int i = 0; i < n; i++){
            vec[i] -= i;
        }
        sort(vec.begin() , vec.end());
        int ans = INT_MIN;
        map<int , int> mpp;
        for(auto a : vec){
           mpp[a] = max(mpp[a] , mpp[a-1] + 1);
           ans = max(ans , mpp[a]);
        }
        cout << ans <<"\n";
    }
    return 0;
}