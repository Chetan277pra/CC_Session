// Problem: Yet Another Coin Problem
// Contest: 1934
// Link: https://codeforces.com/contest/1934/problem/B
// Submission id: 379155355

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> coin = {1,3,6,10,15};

    vector<int> dp(101, 1e9);
    dp[0] = 0;

    for(int i=1;i<=100;i++){
        for(int c:coin){
            if(c<=i)
                dp[i]=min(dp[i],dp[i-c]+1);
        }
    }

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long take = 0;

        if(n > 100){
            take = (n - 100 + 14) / 15; 
            n -= take * 15;
        }

        cout << take + dp[n] << '\n';
    }
}