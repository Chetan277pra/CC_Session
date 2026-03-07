// Problem: Brightness Begins
// Contest: 2020
// Link: https://codeforces.com/contest/2020/problem/B
// Submission id: 365752732

#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int tt;
    cin >> tt;

    while(tt--){
        int k;
        cin >> k;

        int l = 1, r = 2e18;

        while(l <= r){
            int mid = l + (r - l) / 2;

            int sq = sqrtl(mid);
            while((sq+1)*(sq+1) <= mid) sq++;
            while(sq*sq > mid) sq--;

            if(k + sq > mid)
                l = mid + 1;
            else
                r = mid - 1;
        }

        cout << l << "\n";
    }

    return 0;
}