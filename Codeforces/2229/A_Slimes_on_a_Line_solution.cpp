// Problem: Slimes on a Line
// Contest: 2229
// Link: https://codeforces.com/contest/2229/problem/A
// Submission id: 375881537

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
        sort(vec.begin() , vec.end());
        int mid = (vec[0] + vec[n-1])/2;
        
        cout << max(mid - vec[0] , vec[n-1] - mid) <<"\n";
    }
    return 0;
}