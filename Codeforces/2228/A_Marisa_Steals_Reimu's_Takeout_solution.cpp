// Problem: Marisa Steals Reimu's Takeout
// Contest: 2228
// Link: https://codeforces.com/contest/2228/problem/A
// Submission id: 374976473

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
        for(auto a : vec) if(a == 0) ans++;
        int aa = 0, bb = 0;
        for(auto a : vec) {if(a == 1) aa++; else if(a == 2) bb++;}
        if(bb >= aa){
            ans += aa;
            bb -= aa;
            ans += (bb/3);
        }
        else{
            ans += bb;
            aa -= bb;
            ans += (aa/3);
        }
        cout<<ans<<"\n";
    }
    return 0;
}